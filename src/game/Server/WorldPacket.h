/*
 * This file is part of the CMaNGOS Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MANGOSSERVER_WORLDPACKET_H
#define MANGOSSERVER_WORLDPACKET_H

#include "Common.h"
#include "Util/ByteBuffer.h"
#include "Server/Opcodes.h"
#include <chrono>

// Note: m_opcode and size stored in platfom dependent format
// ignore endianess until send, and converted at receive
class WorldPacket : public ByteBuffer
{
    public:
        // just container for later use
        WorldPacket() : ByteBuffer(0), m_opcode(MSG_NULL_ACTION)
        {
        }
        explicit WorldPacket(LogicalOpcodes opcode, size_t reservedSize = 200) : ByteBuffer(reservedSize), m_opcode(opcode) {}

        void Initialize(LogicalOpcodes opcode, size_t reservedSize = 200)
        {
            clear();
            reserve(reservedSize);
            m_opcode = opcode;
        }

        LogicalOpcodes GetOpcode() const { return m_opcode; }
        void SetOpcode(LogicalOpcodes opcode) { m_opcode = opcode; }
        inline const char* GetOpcodeName() const { return LookupOpcodeName(m_opcode); }

        std::chrono::steady_clock::time_point GetReceivedTime() const { return m_receivedTime; }
        void SetReceivedTime(std::chrono::steady_clock::time_point receivedTime) { m_receivedTime = receivedTime; }

    private:
        LogicalOpcodes m_opcode;
        std::chrono::steady_clock::time_point m_receivedTime; // only set for a specific set of opcodes, for performance reasons.
};
#endif
