/*
 * This file is part of the DestinyCore Project. See AUTHORS file for copyright information.
 *
 * DestinyCore is a fork and derivative work of the CMaNGOS Project (https://github.com/cmangos).
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include "Opcodes.h"

OpcodeHandler logicalOpcodeTable[NUM_LOGICAL_OPCODES] =
{
    { "MSG_NULL_ACTION",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_BOOTME",                      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_DBLOOKUP",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_DBLOOKUP",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUERY_OBJECT_POSITION",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_QUERY_OBJECT_POSITION",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUERY_OBJECT_ROTATION",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_QUERY_OBJECT_ROTATION",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_WORLD_TELEPORT",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleWorldTeleportOpcode},
    { "CMSG_TELEPORT_TO_UNIT",            STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_ZONE_MAP",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_ZONE_MAP",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_DEBUG_CHANGECELLZONE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_EMBLAZON_TABARD_OBSOLETE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_UNEMBLAZON_TABARD_OBSOLETE",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_RECHARGE",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_LEARN_SPELL",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CREATEMONSTER",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_DESTROYMONSTER",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CREATEITEM",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CREATEGAMEOBJECT",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_CHECK_FOR_BOTS",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MAKEMONSTERATTACKGUID",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_BOT_DETECTED2",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_FORCEACTION",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_FORCEACTIONONOTHER",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_FORCEACTIONSHOW",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_FORCEACTIONSHOW",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PETGODMODE",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_PETGODMODE",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DEBUGINFOSPELLMISS_OBSOLETE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_WEATHER_SPEED_CHEAT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_UNDRESSPLAYER",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_BEASTMASTER",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GODMODE",                     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GODMODE",                     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHEAT_SETMONEY",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_LEVEL_CHEAT",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_PET_LEVEL_CHEAT",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SET_WORLDSTATE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_COOLDOWN_CHEAT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_USE_SKILL_CHEAT",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_FLAG_QUEST",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_FLAG_QUEST_FINISH",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CLEAR_QUEST",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SEND_EVENT",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_DEBUG_AISTATE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_DEBUG_AISTATE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_DISABLE_PVP_CHEAT",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_ADVANCE_SPAWN_TIME",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_PVP_PORT_OBSOLETE",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTH_SRP6_BEGIN",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTH_SRP6_PROOF",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTH_SRP6_RECODE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CHAR_CREATE",                 STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleCharCreateOpcode},
    { "CMSG_CHAR_ENUM",                   STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleCharEnumOpcode},
    { "CMSG_CHAR_DELETE",                 STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleCharDeleteOpcode},
    { "SMSG_AUTH_SRP6_RESPONSE",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHAR_CREATE",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHAR_ENUM",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHAR_DELETE",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PLAYER_LOGIN",                STATUS_AUTHED,    PROCESS_INPLACE,      &WorldSession::HandlePlayerLoginOpcode},
    { "SMSG_NEW_WORLD",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_TRANSFER_PENDING",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_TRANSFER_ABORTED",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHARACTER_LOGIN_FAILED",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOGIN_SETTIMESPEED",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GAMETIME_UPDATE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GAMETIME_SET",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GAMETIME_SET",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GAMESPEED_SET",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GAMESPEED_SET",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SERVERTIME",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SERVERTIME",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PLAYER_LOGOUT",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePlayerLogoutOpcode},
    { "CMSG_LOGOUT_REQUEST",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLogoutRequestOpcode},
    { "SMSG_LOGOUT_RESPONSE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOGOUT_COMPLETE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_LOGOUT_CANCEL",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLogoutCancelOpcode},
    { "SMSG_LOGOUT_CANCEL_ACK",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_NAME_QUERY",                  STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleNameQueryOpcode},
    { "SMSG_NAME_QUERY_RESPONSE",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PET_NAME_QUERY",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetNameQueryOpcode},
    { "SMSG_PET_NAME_QUERY_RESPONSE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GUILD_QUERY",                 STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleGuildQueryOpcode},
    { "SMSG_GUILD_QUERY_RESPONSE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_ITEM_QUERY_SINGLE",           STATUS_LOGGEDIN,  PROCESS_IMMEDIATE,    &WorldSession::HandleItemQuerySingleOpcode},
    { "CMSG_ITEM_QUERY_MULTIPLE",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_ITEM_QUERY_SINGLE_RESPONSE",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ITEM_QUERY_MULTIPLE_RESPONSE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PAGE_TEXT_QUERY",             STATUS_LOGGEDIN,  PROCESS_IMMEDIATE,    &WorldSession::HandlePageTextQueryOpcode},
    { "SMSG_PAGE_TEXT_QUERY_RESPONSE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUEST_QUERY",                 STATUS_LOGGEDIN,  PROCESS_IMMEDIATE,    &WorldSession::HandleQuestQueryOpcode},
    { "SMSG_QUEST_QUERY_RESPONSE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GAMEOBJECT_QUERY",            STATUS_LOGGEDIN,  PROCESS_IMMEDIATE,    &WorldSession::HandleGameObjectQueryOpcode},
    { "SMSG_GAMEOBJECT_QUERY_RESPONSE",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CREATURE_QUERY",              STATUS_LOGGEDIN,  PROCESS_IMMEDIATE,    &WorldSession::HandleCreatureQueryOpcode},
    { "SMSG_CREATURE_QUERY_RESPONSE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_WHO",                         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleWhoOpcode},
    { "SMSG_WHO",                         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_WHOIS",                       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleWhoisOpcode},
    { "SMSG_WHOIS",                       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FRIEND_LIST",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleFriendListOpcode},
    { "SMSG_FRIEND_LIST",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_FRIEND_STATUS",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_ADD_FRIEND",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAddFriendOpcode},
    { "CMSG_DEL_FRIEND",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleDelFriendOpcode},
    { "SMSG_IGNORE_LIST",                 STATUS_NEVER,     PROCESS_THREADUNSAFE, &WorldSession::Handle_ServerSide},
    { "CMSG_ADD_IGNORE",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAddIgnoreOpcode},
    { "CMSG_DEL_IGNORE",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleDelIgnoreOpcode},
    { "CMSG_GROUP_INVITE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupInviteOpcode},
    { "SMSG_GROUP_INVITE",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GROUP_CANCEL",                STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GROUP_CANCEL",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GROUP_ACCEPT",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupAcceptOpcode},
    { "CMSG_GROUP_DECLINE",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupDeclineOpcode},
    { "SMSG_GROUP_DECLINE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GROUP_UNINVITE",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupUninviteOpcode},
    { "CMSG_GROUP_UNINVITE_GUID",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupUninviteGuidOpcode},
    { "SMSG_GROUP_UNINVITE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GROUP_SET_LEADER",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupSetLeaderOpcode},
    { "SMSG_GROUP_SET_LEADER",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_LOOT_METHOD",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLootMethodOpcode},
    { "CMSG_GROUP_DISBAND",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupDisbandOpcode},
    { "SMSG_GROUP_DESTROYED",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GROUP_LIST",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PARTY_MEMBER_STATS",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PARTY_COMMAND_RESULT",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "UMSG_UPDATE_GROUP_MEMBERS",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GUILD_CREATE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildCreateOpcode},
    { "CMSG_GUILD_INVITE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildInviteOpcode},
    { "SMSG_GUILD_INVITE",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GUILD_ACCEPT",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildAcceptOpcode},
    { "CMSG_GUILD_DECLINE",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildDeclineOpcode},
    { "SMSG_GUILD_DECLINE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GUILD_INFO",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildInfoOpcode},
    { "SMSG_GUILD_INFO",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GUILD_ROSTER",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildRosterOpcode},
    { "SMSG_GUILD_ROSTER",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GUILD_PROMOTE",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildPromoteOpcode},
    { "CMSG_GUILD_DEMOTE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildDemoteOpcode},
    { "CMSG_GUILD_LEAVE",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildLeaveOpcode},
    { "CMSG_GUILD_REMOVE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildRemoveOpcode},
    { "CMSG_GUILD_DISBAND",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildDisbandOpcode},
    { "CMSG_GUILD_LEADER",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildLeaderOpcode},
    { "CMSG_GUILD_MOTD",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildMOTDOpcode},
    { "SMSG_GUILD_EVENT",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GUILD_COMMAND_RESULT",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "UMSG_UPDATE_GUILD",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_MESSAGECHAT",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMessagechatOpcode},
    { "SMSG_MESSAGECHAT",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_JOIN_CHANNEL",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleJoinChannelOpcode},
    { "CMSG_LEAVE_CHANNEL",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLeaveChannelOpcode},
    { "SMSG_CHANNEL_NOTIFY",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHANNEL_LIST",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelListOpcode},
    { "SMSG_CHANNEL_LIST",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHANNEL_PASSWORD",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelPasswordOpcode},
    { "CMSG_CHANNEL_SET_OWNER",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelSetOwnerOpcode},
    { "CMSG_CHANNEL_OWNER",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelOwnerOpcode},
    { "CMSG_CHANNEL_MODERATOR",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelModeratorOpcode},
    { "CMSG_CHANNEL_UNMODERATOR",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelUnmoderatorOpcode},
    { "CMSG_CHANNEL_MUTE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelMuteOpcode},
    { "CMSG_CHANNEL_UNMUTE",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelUnmuteOpcode},
    { "CMSG_CHANNEL_INVITE",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelInviteOpcode},
    { "CMSG_CHANNEL_KICK",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelKickOpcode},
    { "CMSG_CHANNEL_BAN",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelBanOpcode},
    { "CMSG_CHANNEL_UNBAN",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelUnbanOpcode},
    { "CMSG_CHANNEL_ANNOUNCEMENTS",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelAnnouncementsOpcode},
    { "CMSG_CHANNEL_MODERATE",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChannelModerateOpcode},
    { "SMSG_UPDATE_OBJECT",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DESTROY_OBJECT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_USE_ITEM",                    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleUseItemOpcode},
    { "CMSG_OPEN_ITEM",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleOpenItemOpcode},
    { "CMSG_READ_ITEM",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleReadItemOpcode},
    { "SMSG_READ_ITEM_OK",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_READ_ITEM_FAILED",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ITEM_COOLDOWN",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GAMEOBJ_USE",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGameObjectUseOpcode},
    { "CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GAMEOBJECT_CUSTOM_ANIM",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_AREATRIGGER",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE,      &WorldSession::HandleAreaTriggerOpcode},
    { "MSG_MOVE_START_FORWARD",           STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_BACKWARD",          STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_STOP",                    STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_STRAFE_LEFT",       STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_STRAFE_RIGHT",      STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_STOP_STRAFE",             STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_JUMP",                    STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_TURN_LEFT",         STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_TURN_RIGHT",        STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_STOP_TURN",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_PITCH_UP",          STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_PITCH_DOWN",        STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_STOP_PITCH",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_SET_RUN_MODE",            STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_SET_WALK_MODE",           STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_TOGGLE_LOGGING",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_TELEPORT",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_TELEPORT_CHEAT",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_TELEPORT_ACK",            STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveTeleportAckOpcode},
    { "MSG_MOVE_TOGGLE_FALL_LOGGING",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_FALL_LAND",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_START_SWIM",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_STOP_SWIM",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_SET_RUN_SPEED_CHEAT",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_RUN_SPEED",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_RUN_BACK_SPEED",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_WALK_SPEED_CHEAT",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_WALK_SPEED",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_SWIM_SPEED_CHEAT",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_SWIM_SPEED",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_SWIM_BACK_SPEED",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_ALL_SPEED_CHEAT",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_TURN_RATE_CHEAT",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_TURN_RATE",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_TOGGLE_COLLISION_CHEAT",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_SET_FACING",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_SET_PITCH",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "MSG_MOVE_WORLDPORT_ACK",           STATUS_TRANSFER,  PROCESS_THREADUNSAFE, &WorldSession::HandleMoveWorldportAckOpcode},
    { "SMSG_MONSTER_MOVE",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MOVE_WATER_WALK",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MOVE_LAND_WALK",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_MOVE_SET_RAW_POSITION_ACK",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_MOVE_SET_RAW_POSITION",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_FORCE_RUN_SPEED_CHANGE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_RUN_SPEED_CHANGE_ACK",  STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleForceSpeedChangeAckOpcodes},
    { "SMSG_FORCE_RUN_BACK_SPEED_CHANGE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK", STATUS_LOGGEDIN, PROCESS_THREADSAFE, &WorldSession::HandleForceSpeedChangeAckOpcodes},
    { "SMSG_FORCE_SWIM_SPEED_CHANGE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_SWIM_SPEED_CHANGE_ACK", STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleForceSpeedChangeAckOpcodes},
    { "SMSG_FORCE_MOVE_ROOT",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_MOVE_ROOT_ACK",         STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveRootAck},
    { "SMSG_FORCE_MOVE_UNROOT",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_MOVE_UNROOT_ACK",       STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveRootAck},
    { "MSG_MOVE_ROOT",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_UNROOT",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_HEARTBEAT",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "SMSG_MOVE_KNOCK_BACK",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MOVE_KNOCK_BACK_ACK",         STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveKnockBackAck},
    { "MSG_MOVE_KNOCK_BACK",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_MOVE_FEATHER_FALL",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MOVE_NORMAL_FALL",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MOVE_SET_HOVER",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MOVE_UNSET_HOVER",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MOVE_HOVER_ACK",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveFlagChangeOpcode},
    { "MSG_MOVE_HOVER",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_TRIGGER_CINEMATIC_CHEAT",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_OPENING_CINEMATIC",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_TRIGGER_CINEMATIC",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_NEXT_CINEMATIC_CAMERA",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleNextCinematicCamera},
    { "CMSG_COMPLETE_CINEMATIC",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleCompleteCinematic},
    { "SMSG_TUTORIAL_FLAGS",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TUTORIAL_FLAG",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTutorialFlagOpcode},
    { "CMSG_TUTORIAL_CLEAR",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTutorialClearOpcode},
    { "CMSG_TUTORIAL_RESET",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTutorialResetOpcode},
    { "CMSG_STANDSTATECHANGE",            STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleStandStateChangeOpcode},
    { "CMSG_EMOTE",                       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleEmoteOpcode},
    { "SMSG_EMOTE",                       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TEXT_EMOTE",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTextEmoteOpcode},
    { "SMSG_TEXT_EMOTE",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_AUTOEQUIP_GROUND_ITEM",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTOSTORE_GROUND_ITEM",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTOSTORE_LOOT_ITEM",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAutostoreLootItemOpcode},
    { "CMSG_STORE_LOOT_IN_SLOT",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTOEQUIP_ITEM",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAutoEquipItemOpcode},
    { "CMSG_AUTOSTORE_BAG_ITEM",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAutoStoreBagItemOpcode},
    { "CMSG_SWAP_ITEM",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSwapItem},
    { "CMSG_SWAP_INV_ITEM",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSwapInvItemOpcode},
    { "CMSG_SPLIT_ITEM",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSplitItemOpcode},
    { "CMSG_AUTOEQUIP_ITEM_SLOT",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAutoEquipItemSlotOpcode},
    { "OBSOLETE_DROP_ITEM",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_DESTROYITEM",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleDestroyItemOpcode},
    { "SMSG_INVENTORY_CHANGE_FAILURE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_OPEN_CONTAINER",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_INSPECT",                     STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleInspectOpcode},
    { "SMSG_INSPECT",                     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_INITIATE_TRADE",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleInitiateTradeOpcode},
    { "CMSG_BEGIN_TRADE",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBeginTradeOpcode},
    { "CMSG_BUSY_TRADE",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBusyTradeOpcode},
    { "CMSG_IGNORE_TRADE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleIgnoreTradeOpcode},
    { "CMSG_ACCEPT_TRADE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAcceptTradeOpcode},
    { "CMSG_UNACCEPT_TRADE",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleUnacceptTradeOpcode},
    { "CMSG_CANCEL_TRADE",                STATUS_LOGGEDIN_OR_RECENTLY_LOGGEDOUT, PROCESS_THREADUNSAFE, &WorldSession::HandleCancelTradeOpcode},
    { "CMSG_SET_TRADE_ITEM",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetTradeItemOpcode},
    { "CMSG_CLEAR_TRADE_ITEM",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleClearTradeItemOpcode},
    { "CMSG_SET_TRADE_GOLD",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetTradeGoldOpcode},
    { "SMSG_TRADE_STATUS",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_TRADE_STATUS_EXTENDED",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_INITIALIZE_FACTIONS",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SET_FACTION_VISIBLE",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SET_FACTION_STANDING",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_FACTION_ATWAR",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetFactionAtWarOpcode},
    { "CMSG_SET_FACTION_CHEAT",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_Deprecated},
    { "SMSG_SET_PROFICIENCY",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_ACTION_BUTTON",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetActionButtonOpcode},
    { "SMSG_ACTION_BUTTONS",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_INITIAL_SPELLS",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LEARNED_SPELL",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SUPERCEDED_SPELL",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_NEW_SPELL_SLOT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CAST_SPELL",                  STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleCastSpellOpcode},
    { "CMSG_CANCEL_CAST",                 STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleCancelCastOpcode},
    { "SMSG_CAST_RESULT",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_START",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_GO",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_FAILURE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_COOLDOWN",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_COOLDOWN_EVENT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CANCEL_AURA",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleCancelAuraOpcode},
    { "SMSG_UPDATE_AURA_DURATION",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_CAST_FAILED",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_CHANNEL_START",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_CHANNEL_UPDATE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CANCEL_CHANNELLING",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleCancelChanneling},
    { "SMSG_AI_REACTION",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_SELECTION",               STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleSetSelectionOpcode},
    { "CMSG_SET_TARGET_OBSOLETE",         STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleSetTargetOpcode},
    { "CMSG_UNUSED",                      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_UNUSED2",                     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_ATTACKSWING",                 STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleAttackSwingOpcode},
    { "CMSG_ATTACKSTOP",                  STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleAttackStopOpcode},
    { "SMSG_ATTACKSTART",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKSTOP",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKSWING_NOTINRANGE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKSWING_BADFACING",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKSWING_NOTSTANDING",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKSWING_DEADTARGET",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKSWING_CANT_ATTACK",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ATTACKERSTATEUPDATE",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_VICTIMSTATEUPDATE_OBSOLETE",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DAMAGE_DONE_OBSOLETE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DAMAGE_TAKEN_OBSOLETE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CANCEL_COMBAT",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLHEALLOG",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLENERGIZELOG",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SHEATHE_OBSOLETE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SAVE_PLAYER",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SETDEATHBINDPOINT",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_BINDPOINTUPDATE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GETDEATHBINDZONE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_BINDZONEREPLY",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PLAYERBOUND",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CLIENT_CONTROL_UPDATE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_REPOP_REQUEST",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRepopRequestOpcode},
    { "SMSG_RESURRECT_REQUEST",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_RESURRECT_RESPONSE",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleResurrectResponseOpcode},
    { "CMSG_LOOT",                        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLootOpcode},
    { "CMSG_LOOT_MONEY",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLootMoneyOpcode},
    { "CMSG_LOOT_RELEASE",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLootReleaseOpcode},
    { "SMSG_LOOT_RESPONSE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_RELEASE_RESPONSE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_REMOVED",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_MONEY_NOTIFY",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_ITEM_NOTIFY",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_CLEAR_MONEY",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ITEM_PUSH_RESULT",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DUEL_REQUESTED",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DUEL_OUTOFBOUNDS",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DUEL_INBOUNDS",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DUEL_COMPLETE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DUEL_WINNER",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_DUEL_ACCEPTED",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleDuelAcceptedOpcode},
    { "CMSG_DUEL_CANCELLED",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleDuelCancelledOpcode},
    { "SMSG_MOUNTRESULT",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DISMOUNTRESULT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PUREMOUNT_CANCELLED_OBSOLETE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MOUNTSPECIAL_ANIM",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMountSpecialAnimOpcode},
    { "SMSG_MOUNTSPECIAL_ANIM",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_TAME_FAILURE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PET_SET_ACTION",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetSetAction},
    { "CMSG_PET_ACTION",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetAction},
    { "CMSG_PET_ABANDON",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetAbandon},
    { "CMSG_PET_RENAME",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetRename},
    { "SMSG_PET_NAME_INVALID",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_SPELLS",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_MODE",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GOSSIP_HELLO",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGossipHelloOpcode},
    { "CMSG_GOSSIP_SELECT_OPTION",        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGossipSelectOptionOpcode},
    { "SMSG_GOSSIP_MESSAGE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GOSSIP_COMPLETE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_NPC_TEXT_QUERY",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleNpcTextQueryOpcode},
    { "SMSG_NPC_TEXT_UPDATE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_NPC_WONT_TALK",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_STATUS_QUERY",     STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverStatusQueryOpcode},
    { "SMSG_QUESTGIVER_STATUS",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_HELLO",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverHelloOpcode},
    { "SMSG_QUESTGIVER_QUEST_LIST",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_QUERY_QUEST",      STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverQueryQuestOpcode},
    { "CMSG_QUESTGIVER_QUEST_AUTOLAUNCH", STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverQuestAutoLaunch},
    { "SMSG_QUESTGIVER_QUEST_DETAILS",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_ACCEPT_QUEST",     STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverAcceptQuestOpcode},
    { "CMSG_QUESTGIVER_COMPLETE_QUEST",   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverCompleteQuest},
    { "SMSG_QUESTGIVER_REQUEST_ITEMS",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_REQUEST_REWARD",   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverRequestRewardOpcode},
    { "SMSG_QUESTGIVER_OFFER_REWARD",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_CHOOSE_REWARD",    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverChooseRewardOpcode},
    { "SMSG_QUESTGIVER_QUEST_INVALID",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTGIVER_CANCEL",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestgiverCancel},
    { "SMSG_QUESTGIVER_QUEST_COMPLETE",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_QUESTGIVER_QUEST_FAILED",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUESTLOG_SWAP_QUEST",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestLogSwapQuest},
    { "CMSG_QUESTLOG_REMOVE_QUEST",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestLogRemoveQuest},
    { "SMSG_QUESTLOG_FULL",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_QUESTUPDATE_FAILED",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_QUESTUPDATE_FAILEDTIMER",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_QUESTUPDATE_COMPLETE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_QUESTUPDATE_ADD_KILL",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_QUESTUPDATE_ADD_ITEM",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUEST_CONFIRM_ACCEPT",        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestConfirmAccept},
    { "SMSG_QUEST_CONFIRM_ACCEPT",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PUSHQUESTTOPARTY",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePushQuestToParty},
    { "CMSG_LIST_INVENTORY",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleListInventoryOpcode},
    { "SMSG_LIST_INVENTORY",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SELL_ITEM",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSellItemOpcode},
    { "SMSG_SELL_ITEM",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BUY_ITEM",                    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBuyItemOpcode},
    { "CMSG_BUY_ITEM_IN_SLOT",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBuyItemInSlotOpcode},
    { "SMSG_BUY_ITEM",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_BUY_FAILED",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TAXICLEARALLNODES",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_TAXIENABLEALLNODES",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_TAXISHOWNODES",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SHOWTAXINODES",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TAXINODE_STATUS_QUERY",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTaxiNodeStatusQueryOpcode},
    { "SMSG_TAXINODE_STATUS",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TAXIQUERYAVAILABLENODES",     STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTaxiQueryAvailableNodes},
    { "CMSG_ACTIVATETAXI",                STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleActivateTaxiOpcode},
    { "SMSG_ACTIVATETAXIREPLY",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_NEW_TAXI_PATH",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TRAINER_LIST",                STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleTrainerListOpcode},
    { "SMSG_TRAINER_LIST",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TRAINER_BUY_SPELL",           STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleTrainerBuySpellOpcode},
    { "SMSG_TRAINER_BUY_SUCCEEDED",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_TRAINER_BUY_FAILED",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BINDER_ACTIVATE",             STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleBinderActivateOpcode},
    { "SMSG_PLAYERBINDERROR",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BANKER_ACTIVATE",             STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleBankerActivateOpcode},
    { "SMSG_SHOW_BANK",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BUY_BANK_SLOT",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleBuyBankSlotOpcode},
    { "SMSG_BUY_BANK_SLOT_RESULT",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PETITION_SHOWLIST",           STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePetitionShowListOpcode},
    { "SMSG_PETITION_SHOWLIST",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PETITION_BUY",                STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePetitionBuyOpcode},
    { "CMSG_PETITION_SHOW_SIGNATURES",    STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePetitionShowSignOpcode},
    { "SMSG_PETITION_SHOW_SIGNATURES",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PETITION_SIGN",               STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePetitionSignOpcode},
    { "SMSG_PETITION_SIGN_RESULTS",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_PETITION_DECLINE",             STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePetitionDeclineOpcode},
    { "CMSG_OFFER_PETITION",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleOfferPetitionOpcode},
    { "CMSG_TURN_IN_PETITION",            STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleTurnInPetitionOpcode},
    { "SMSG_TURN_IN_PETITION_RESULTS",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PETITION_QUERY",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePetitionQueryOpcode},
    { "SMSG_PETITION_QUERY_RESPONSE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_FISH_NOT_HOOKED",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_FISH_ESCAPED",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BUG",                         STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleBugOpcode},
    { "SMSG_NOTIFICATION",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PLAYED_TIME",                 STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandlePlayedTime},
    { "SMSG_PLAYED_TIME",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_QUERY_TIME",                  STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleQueryTimeOpcode},
    { "SMSG_QUERY_TIME_RESPONSE",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOG_XPGAIN",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AURACASTLOG",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_RECLAIM_CORPSE",              STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleReclaimCorpseOpcode},
    { "CMSG_WRAP_ITEM",                   STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleWrapItemOpcode},
    { "SMSG_LEVELUP_INFO",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_MINIMAP_PING",                 STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMinimapPingOpcode},
    { "SMSG_RESISTLOG",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ENCHANTMENTLOG",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_SKILL_CHEAT",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_START_MIRROR_TIMER",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PAUSE_MIRROR_TIMER",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_STOP_MIRROR_TIMER",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PING",                        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_EarlyProccess},
    { "SMSG_PONG",                        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CLEAR_COOLDOWN",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GAMEOBJECT_PAGETEXT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SETSHEATHED",                 STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleSetSheathedOpcode},
    { "SMSG_COOLDOWN_CHEAT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_DELAYED",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PLAYER_MACRO_OBSOLETE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_PLAYER_MACRO_OBSOLETE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GHOST",                       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_INVIS",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_INVALID_PROMOTION_CODE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_GM_BIND_OTHER",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_GM_SUMMON",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_ITEM_TIME_UPDATE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ITEM_ENCHANT_TIME_UPDATE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AUTH_CHALLENGE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_AUTH_SESSION",                STATUS_NEVER,     PROCESS_THREADSAFE,   &WorldSession::Handle_EarlyProccess},
    { "SMSG_AUTH_RESPONSE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_GM_SHOWLABEL",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_PET_CAST_SPELL",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetCastSpellOpcode},
    { "MSG_SAVE_GUILD_EMBLEM",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSaveGuildEmblemOpcode},
    { "MSG_TABARDVENDOR_ACTIVATE",        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTabardVendorActivateOpcode},
    { "SMSG_PLAY_SPELL_VISUAL",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_ZONEUPDATE",                  STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleZoneUpdateOpcode},
    { "SMSG_PARTYKILLLOG",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_COMPRESSED_UPDATE_OBJECT",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PLAY_SPELL_IMPACT",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_EXPLORATION_EXPERIENCE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GM_SET_SECURITY_GROUP",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_NUKE",                     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_RANDOM_ROLL",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRandomRollOpcode},
    { "SMSG_ENVIRONMENTALDAMAGELOG",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_RWHOIS_OBSOLETE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_RWHOIS",                      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_LOOKING_FOR_GROUP",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL },
    { "CMSG_SET_LOOKING_FOR_GROUP",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL },
    { "CMSG_UNLEARN_SPELL",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_UNLEARN_SKILL",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleUnlearnSkillOpcode},
    { "SMSG_REMOVED_SPELL",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_DECHARGE",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GMTICKET_CREATE",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGMTicketCreateOpcode},
    { "SMSG_GMTICKET_CREATE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GMTICKET_UPDATETEXT",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGMTicketUpdateTextOpcode},
    { "SMSG_GMTICKET_UPDATETEXT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_ACCOUNT_DATA_TIMES",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_REQUEST_ACCOUNT_DATA",        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRequestAccountData},
    { "CMSG_UPDATE_ACCOUNT_DATA",         STATUS_LOGGEDIN_OR_RECENTLY_LOGGEDOUT, PROCESS_THREADUNSAFE, &WorldSession::HandleUpdateAccountData},
    { "SMSG_UPDATE_ACCOUNT_DATA",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CLEAR_FAR_SIGHT_IMMEDIATE",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_POWERGAINLOG_OBSOLETE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GM_TEACH",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_CREATE_ITEM_TARGET",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GMTICKET_GETTICKET",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGMTicketGetTicketOpcode},
    { "SMSG_GMTICKET_GETTICKET",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_UNLEARN_TALENTS",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GAMEOBJECT_DESPAWN_ANIM",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_CORPSE_QUERY",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleCorpseQueryOpcode},
    { "CMSG_GMTICKET_DELETETICKET",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGMTicketDeleteTicketOpcode},
    { "SMSG_GMTICKET_DELETETICKET",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHAT_WRONG_FACTION",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GMTICKET_SYSTEMSTATUS",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGMTicketSystemStatusOpcode},
    { "SMSG_GMTICKET_SYSTEMSTATUS",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SPIRIT_HEALER_ACTIVATE",      STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSpiritHealerActivateOpcode},
    { "CMSG_SET_STAT_CHEAT",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SET_REST_START",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SKILL_BUY_STEP",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SKILL_BUY_RANK",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_XP_CHEAT",                    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SPIRIT_HEALER_CONFIRM",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHARACTER_POINT_CHEAT",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GOSSIP_POI",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHAT_IGNORED",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleChatIgnoredOpcode},
    { "CMSG_GM_VISION",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SERVER_COMMAND",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_SILENCE",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_REVEALTO",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_RESURRECT",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_SUMMONMOB",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_MOVECORPSE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_FREEZE",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_UBERINVIS",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_REQUEST_PLAYER_INFO",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GM_PLAYER_INFO",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GUILD_RANK",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildRankOpcode},
    { "CMSG_GUILD_ADD_RANK",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildAddRankOpcode},
    { "CMSG_GUILD_DEL_RANK",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildDelRankOpcode},
    { "CMSG_GUILD_SET_PUBLIC_NOTE",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildSetPublicNoteOpcode},
    { "CMSG_GUILD_SET_OFFICER_NOTE",      STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildSetOfficerNoteOpcode},
    { "SMSG_LOGIN_VERIFY_WORLD",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CLEAR_EXPLORATION",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SEND_MAIL",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSendMail},
    { "SMSG_SEND_MAIL_RESULT",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GET_MAIL_LIST",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGetMailList},
    { "SMSG_MAIL_LIST_RESULT",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BATTLEFIELD_LIST",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBattlefieldListOpcode},
    { "SMSG_BATTLEFIELD_LIST",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BATTLEFIELD_JOIN",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_BATTLEFIELD_WIN_OBSOLETE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_BATTLEFIELD_LOSE_OBSOLETE",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TAXICLEARNODE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_TAXIENABLENODE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_ITEM_TEXT_QUERY",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleItemTextQuery},
    { "SMSG_ITEM_TEXT_QUERY_RESPONSE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MAIL_TAKE_MONEY",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMailTakeMoney},
    { "CMSG_MAIL_TAKE_ITEM",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMailTakeItem},
    { "CMSG_MAIL_MARK_AS_READ",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMailMarkAsRead},
    { "CMSG_MAIL_RETURN_TO_SENDER",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMailReturnToSender},
    { "CMSG_MAIL_DELETE",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMailDelete},
    { "CMSG_MAIL_CREATE_TEXT_ITEM",       STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMailCreateTextItem},
    { "SMSG_SPELLLOGMISS",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLLOGEXECUTE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DEBUGAURAPROC",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PERIODICAURALOG",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLDAMAGESHIELD",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLNONMELEEDAMAGELOG",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_LEARN_TALENT",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLearnTalentOpcode},
    { "SMSG_RESURRECT_FAILED",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TOGGLE_PVP",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTogglePvP},
    { "SMSG_ZONE_UNDER_ATTACK",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_AUCTION_HELLO",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionHelloOpcode},
    { "CMSG_AUCTION_SELL_ITEM",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionSellItem},
    { "CMSG_AUCTION_REMOVE_ITEM",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionRemoveItem},
    { "CMSG_AUCTION_LIST_ITEMS",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionListItems},
    { "CMSG_AUCTION_LIST_OWNER_ITEMS",    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionListOwnerItems},
    { "CMSG_AUCTION_PLACE_BID",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionPlaceBid},
    { "SMSG_AUCTION_COMMAND_RESULT",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AUCTION_LIST_RESULT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AUCTION_OWNER_LIST_RESULT",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AUCTION_BIDDER_NOTIFICATION", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AUCTION_OWNER_NOTIFICATION",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PROCRESIST",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DISPEL_FAILED",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLORDAMAGE_IMMUNE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_AUCTION_LIST_BIDDER_ITEMS",   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAuctionListBidderItems},
    { "SMSG_AUCTION_BIDDER_LIST_RESULT",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SET_FLAT_SPELL_MODIFIER",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SET_PCT_SPELL_MODIFIER",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_AMMO",                    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetAmmoOpcode},
    { "SMSG_CORPSE_RECLAIM_DELAY",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_ACTIVE_MOVER",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetActiveMoverOpcode},
    { "CMSG_PET_CANCEL_AURA",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetCancelAuraOpcode},
    { "CMSG_PLAYER_AI_CHEAT",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CANCEL_AUTO_REPEAT_SPELL",    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleCancelAutoRepeatSpellOpcode},
    { "MSG_GM_ACCOUNT_ONLINE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_LIST_STABLED_PETS",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleListStabledPetsOpcode},
    { "CMSG_STABLE_PET",                  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleStablePet},
    { "CMSG_UNSTABLE_PET",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleUnstablePet},
    { "CMSG_BUY_STABLE_SLOT",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBuyStableSlot},
    { "SMSG_STABLE_RESULT",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_STABLE_REVIVE_PET",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleStableRevivePet},
    { "CMSG_STABLE_SWAP_PET",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleStableSwapPet},
    { "MSG_QUEST_PUSH_RESULT",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQuestPushResult},
    { "SMSG_PLAY_MUSIC",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PLAY_OBJECT_SOUND",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_REQUEST_PET_INFO",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRequestPetInfoOpcode},
    { "CMSG_FAR_SIGHT",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleFarSightOpcode},
    { "SMSG_SPELLDISPELLOG",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DAMAGE_CALC_LOG",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_ENABLE_DAMAGE_LOG",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GROUP_CHANGE_SUB_GROUP",      STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupChangeSubGroupOpcode},
    { "CMSG_REQUEST_PARTY_MEMBER_STATS",  STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRequestPartyMemberStatsOpcode},
    { "CMSG_GROUP_SWAP_SUB_GROUP",        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupSwapSubGroupOpcode},
    { "CMSG_RESET_FACTION_CHEAT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_AUTOSTORE_BANK_ITEM",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAutoStoreBankItemOpcode},
    { "CMSG_AUTOBANK_ITEM",               STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAutoBankItemOpcode},
    { "MSG_QUERY_NEXT_MAIL_TIME",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleQueryNextMailTime},
    { "SMSG_RECEIVED_MAIL",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_RAID_GROUP_ONLY",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_DURABILITY_CHEAT",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SET_PVP_RANK_CHEAT",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_ADD_PVP_MEDAL_CHEAT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_DEL_PVP_MEDAL_CHEAT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SET_PVP_TITLE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_PVP_CREDIT",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AUCTION_REMOVED_NOTIFICATION", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GROUP_RAID_CONVERT",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupRaidConvertOpcode},
    { "CMSG_GROUP_ASSISTANT_LEADER",      STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGroupAssistantLeaderOpcode},
    { "CMSG_BUYBACK_ITEM",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBuybackItem},
    { "SMSG_SERVER_MESSAGE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MEETINGSTONE_JOIN",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMeetingStoneJoinOpcode},
    { "CMSG_MEETINGSTONE_LEAVE",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMeetingStoneLeaveOpcode},
    { "CMSG_MEETINGSTONE_CHEAT",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_MEETINGSTONE_SETQUEUE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MEETINGSTONE_INFO",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleMeetingStoneInfoOpcode},
    { "SMSG_MEETINGSTONE_COMPLETE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MEETINGSTONE_IN_PROGRESS",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MEETINGSTONE_MEMBER_ADDED",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GMTICKETSYSTEM_TOGGLE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_CANCEL_GROWTH_AURA",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleCancelGrowthAuraOpcode},
    { "SMSG_CANCEL_AUTO_REPEAT",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_STANDSTATE_UPDATE",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_ALL_PASSED",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_ROLL_WON",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_LOOT_ROLL",                   STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLootRoll},
    { "SMSG_LOOT_START_ROLL",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_LOOT_ROLL",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_LOOT_MASTER_GIVE",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLootMasterGiveOpcode},
    { "SMSG_LOOT_MASTER_LIST",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SET_FORCED_REACTIONS",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_FAILED_OTHER",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GAMEOBJECT_RESET_STATE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_REPAIR_ITEM",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRepairItemOpcode},
    { "SMSG_CHAT_PLAYER_NOT_FOUND",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_TALENT_WIPE_CONFIRM",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleTalentWipeConfirmOpcode},
    { "SMSG_SUMMON_REQUEST",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SUMMON_RESPONSE",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSummonResponseOpcode},
    { "MSG_MOVE_TOGGLE_GRAVITY_CHEAT",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_MONSTER_MOVE_TRANSPORT",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_BROKEN",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_MOVE_FEATHER_FALL",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_MOVE_WATER_WALK",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SERVER_BROADCAST",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SELF_RES",                    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSelfResOpcode},
    { "SMSG_FEIGN_DEATH_RESISTED",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_RUN_SCRIPT",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SCRIPT_MESSAGE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DUEL_COUNTDOWN",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_AREA_TRIGGER_MESSAGE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_TOGGLE_HELM",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleShowingHelmOpcode},
    { "CMSG_TOGGLE_CLOAK",                STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleShowingCloakOpcode},
    { "SMSG_MEETINGSTONE_JOINFAILED",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PLAYER_SKINNED",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DURABILITY_DAMAGE_DEATH",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_EXPLORATION",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SET_ACTIONBAR_TOGGLES",       STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleSetActionBarTogglesOpcode},
    { "UMSG_DELETE_GUILD_CHARTER",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_PETITION_RENAME",              STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetitionRenameOpcode},
    { "SMSG_INIT_WORLD_STATES",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_UPDATE_WORLD_STATE",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_ITEM_NAME_QUERY",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleItemNameQueryOpcode},
    { "SMSG_ITEM_NAME_QUERY_RESPONSE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_ACTION_FEEDBACK",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHAR_RENAME",                 STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleCharRenameOpcode},
    { "SMSG_CHAR_RENAME",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MOVE_SPLINE_DONE",            STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveSplineDoneOpcode},
    { "CMSG_MOVE_FALL_RESET",             STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMovementOpcodes},
    { "SMSG_INSTANCE_SAVE_CREATED",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_RAID_INSTANCE_INFO",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_REQUEST_RAID_INFO",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRequestRaidInfoOpcode},
    { "CMSG_MOVE_TIME_SKIPPED",           STATUS_LOGGEDIN,  PROCESS_INPLACE,      &WorldSession::HandleMoveTimeSkippedOpcode},
    { "CMSG_MOVE_FEATHER_FALL_ACK",       STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveFlagChangeOpcode},
    { "CMSG_MOVE_WATER_WALK_ACK",         STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveFlagChangeOpcode},
    { "CMSG_MOVE_NOT_ACTIVE_MOVER",       STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleMoveNotActiveMoverOpcode},
    { "SMSG_PLAY_SOUND",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BATTLEFIELD_STATUS",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBattlefieldStatusOpcode},
    { "SMSG_BATTLEFIELD_STATUS",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BATTLEFIELD_PORT",            STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBattlefieldPortOpcode},
    { "MSG_INSPECT_HONOR_STATS",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleInspectHonorStatsOpcode},
    { "CMSG_BATTLEMASTER_HELLO",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBattlemasterHelloOpcode},
    { "CMSG_MOVE_START_SWIM_CHEAT",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_MOVE_STOP_SWIM_CHEAT",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_FORCE_WALK_SPEED_CHANGE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_WALK_SPEED_CHANGE_ACK", STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleForceSpeedChangeAckOpcodes},
    { "SMSG_FORCE_SWIM_BACK_SPEED_CHANGE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK",   STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleForceSpeedChangeAckOpcodes},
    { "SMSG_FORCE_TURN_RATE_CHANGE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_FORCE_TURN_RATE_CHANGE_ACK",  STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleForceSpeedChangeAckOpcodes},
    { "MSG_PVP_LOG_DATA",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePVPLogDataOpcode},
    { "CMSG_LEAVE_BATTLEFIELD",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleLeaveBattlefieldOpcode},
    { "CMSG_AREA_SPIRIT_HEALER_QUERY",    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAreaSpiritHealerQueryOpcode},
    { "CMSG_AREA_SPIRIT_HEALER_QUEUE",    STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleAreaSpiritHealerQueueOpcode},
    { "SMSG_AREA_SPIRIT_HEALER_TIME",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GM_UNTEACH",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_WARDEN_DATA",                 STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_WARDEN_DATA",                 STATUS_AUTHED,    PROCESS_THREADUNSAFE, &WorldSession::HandleWardenDataOpcode},
    { "SMSG_GROUP_JOINED_BATTLEGROUND",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_BATTLEGROUND_PLAYER_POSITIONS", STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBattleGroundPlayerPositionsOpcode},
    { "CMSG_PET_STOP_ATTACK",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetStopAttack},
    { "SMSG_BINDER_CONFIRM",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_BATTLEGROUND_PLAYER_JOINED",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_BATTLEGROUND_PLAYER_LEFT",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BATTLEMASTER_JOIN",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleBattlemasterJoinOpcode},
    { "SMSG_ADDON_INFO",                  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PET_UNLEARN",                 STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetUnlearnOpcode},
    { "SMSG_PET_UNLEARN_CONFIRM",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PARTY_MEMBER_STATS_FULL",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_PET_SPELL_AUTOCAST",          STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandlePetSpellAutocastOpcode},
    { "SMSG_WEATHER",                     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PLAY_TIME_WARNING",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MINIGAME_SETUP",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_MINIGAME_STATE",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_MINIGAME_MOVE",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_MINIGAME_MOVE_FAILED",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_RAID_INSTANCE_MESSAGE",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_COMPRESSED_MOVES",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GUILD_INFO_TEXT",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGuildChangeInfoTextOpcode},
    { "SMSG_CHAT_RESTRICTED",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_SET_RUN_SPEED",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_SET_RUN_BACK_SPEED",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_SET_SWIM_SPEED",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_SET_WALK_SPEED",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_SET_SWIM_BACK_SPEED",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_SET_TURN_RATE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_UNROOT",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_FEATHER_FALL",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_NORMAL_FALL",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_SET_HOVER",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_UNSET_HOVER",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_WATER_WALK",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_LAND_WALK",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_START_SWIM",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_STOP_SWIM",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_SET_RUN_MODE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPLINE_MOVE_SET_WALK_MODE",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GM_NUKE_ACCOUNT",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "MSG_GM_DESTROY_CORPSE",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_GM_DESTROY_ONLINE_CORPSE",    STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_ACTIVATETAXIEXPRESS",         STATUS_LOGGEDIN,  PROCESS_THREADSAFE,   &WorldSession::HandleActivateTaxiExpressOpcode},
    { "SMSG_SET_FACTION_ATWAR",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GAMETIMEBIAS_SET",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_DEBUG_ACTIONS_START",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_DEBUG_ACTIONS_STOP",          STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "CMSG_SET_FACTION_INACTIVE",        STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetFactionInactiveOpcode},
    { "CMSG_SET_WATCHED_FACTION",         STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleSetWatchedFactionOpcode},
    { "MSG_MOVE_TIME_SKIPPED",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SPLINE_MOVE_ROOT",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_SET_EXPLORATION_ALL",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_INVALIDATE_PLAYER",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_RESET_INSTANCES",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleResetInstancesOpcode},
    { "SMSG_INSTANCE_RESET",              STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_INSTANCE_RESET_FAILED",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_UPDATE_LAST_INSTANCE",        STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_RAID_TARGET_UPDATE",           STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRaidTargetUpdateOpcode},
    { "MSG_RAID_READY_CHECK",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleRaidReadyCheckOpcode},
    { "CMSG_LUA_USAGE",                   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_PET_ACTION_SOUND",            STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_PET_DISMISS_SOUND",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_GHOSTEE_GONE",                STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_GM_UPDATE_TICKET_STATUS",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_GM_TICKET_STATUS_UPDATE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_SET_DUNGEON_DIFFICULTY",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL },
    { "CMSG_GMSURVEY_SUBMIT",             STATUS_LOGGEDIN,  PROCESS_THREADUNSAFE, &WorldSession::HandleGMSurveySubmitOpcode},
    { "SMSG_UPDATE_INSTANCE_OWNERSHIP",   STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_IGNORE_KNOCKBACK_CHEAT",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_CHAT_PLAYER_AMBIGUOUS",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "MSG_DELAY_GHOST_TELEPORT",         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_SPELLINSTAKILLLOG",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELL_UPDATE_CHAIN_TARGETS",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_CHAT_FILTERED",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_EXPECTED_SPAM_RECORDS",       STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_SPELLSTEALLOG",               STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_LOTTERY_QUERY_OBSOLETE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_LOTTERY_QUERY_RESULT_OBSOLETE",      STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "CMSG_BUY_LOTTERY_TICKET_OBSOLETE", STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_NULL},
    { "SMSG_LOTTERY_RESULT_OBSOLETE",     STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHARACTER_PROFILE",           STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_CHARACTER_PROFILE_REALM_CONNECTED",  STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_UNK",                         STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
    { "SMSG_DEFENSE_MESSAGE",             STATUS_NEVER,     PROCESS_INPLACE,      &WorldSession::Handle_ServerSide},
};

uint16_t GetOpcodeForBuild(LogicalOpcodes logicalOpcode, uint32_t build)
{
    switch (build)
    {
    case 5875:
        switch (logicalOpcode)
        {
        case MSG_NULL_ACTION: return BUILD5875_MSG_NULL_ACTION;
        case CMSG_BOOTME: return BUILD5875_CMSG_BOOTME;
        case CMSG_DBLOOKUP: return BUILD5875_CMSG_DBLOOKUP;
        case SMSG_DBLOOKUP: return BUILD5875_SMSG_DBLOOKUP;
        case CMSG_QUERY_OBJECT_POSITION: return BUILD5875_CMSG_QUERY_OBJECT_POSITION;
        case SMSG_QUERY_OBJECT_POSITION: return BUILD5875_SMSG_QUERY_OBJECT_POSITION;
        case CMSG_QUERY_OBJECT_ROTATION: return BUILD5875_CMSG_QUERY_OBJECT_ROTATION;
        case SMSG_QUERY_OBJECT_ROTATION: return BUILD5875_SMSG_QUERY_OBJECT_ROTATION;
        case CMSG_WORLD_TELEPORT: return BUILD5875_CMSG_WORLD_TELEPORT;
        case CMSG_TELEPORT_TO_UNIT: return BUILD5875_CMSG_TELEPORT_TO_UNIT;
        case CMSG_ZONE_MAP: return BUILD5875_CMSG_ZONE_MAP;
        case SMSG_ZONE_MAP: return BUILD5875_SMSG_ZONE_MAP;
        case CMSG_DEBUG_CHANGECELLZONE: return BUILD5875_CMSG_DEBUG_CHANGECELLZONE;
        case CMSG_EMBLAZON_TABARD_OBSOLETE: return BUILD5875_CMSG_EMBLAZON_TABARD_OBSOLETE;
        case CMSG_UNEMBLAZON_TABARD_OBSOLETE: return BUILD5875_CMSG_UNEMBLAZON_TABARD_OBSOLETE;
        case CMSG_RECHARGE: return BUILD5875_CMSG_RECHARGE;
        case CMSG_LEARN_SPELL: return BUILD5875_CMSG_LEARN_SPELL;
        case CMSG_CREATEMONSTER: return BUILD5875_CMSG_CREATEMONSTER;
        case CMSG_DESTROYMONSTER: return BUILD5875_CMSG_DESTROYMONSTER;
        case CMSG_CREATEITEM: return BUILD5875_CMSG_CREATEITEM;
        case CMSG_CREATEGAMEOBJECT: return BUILD5875_CMSG_CREATEGAMEOBJECT;
        case SMSG_CHECK_FOR_BOTS: return BUILD5875_SMSG_CHECK_FOR_BOTS;
        case CMSG_MAKEMONSTERATTACKGUID: return BUILD5875_CMSG_MAKEMONSTERATTACKGUID;
        case CMSG_BOT_DETECTED2: return BUILD5875_CMSG_BOT_DETECTED2;
        case CMSG_FORCEACTION: return BUILD5875_CMSG_FORCEACTION;
        case CMSG_FORCEACTIONONOTHER: return BUILD5875_CMSG_FORCEACTIONONOTHER;
        case CMSG_FORCEACTIONSHOW: return BUILD5875_CMSG_FORCEACTIONSHOW;
        case SMSG_FORCEACTIONSHOW: return BUILD5875_SMSG_FORCEACTIONSHOW;
        case CMSG_PETGODMODE: return BUILD5875_CMSG_PETGODMODE;
        case SMSG_PETGODMODE: return BUILD5875_SMSG_PETGODMODE;
        case SMSG_DEBUGINFOSPELLMISS_OBSOLETE: return BUILD5875_SMSG_DEBUGINFOSPELLMISS_OBSOLETE;
        case CMSG_WEATHER_SPEED_CHEAT: return BUILD5875_CMSG_WEATHER_SPEED_CHEAT;
        case CMSG_UNDRESSPLAYER: return BUILD5875_CMSG_UNDRESSPLAYER;
        case CMSG_BEASTMASTER: return BUILD5875_CMSG_BEASTMASTER;
        case CMSG_GODMODE: return BUILD5875_CMSG_GODMODE;
        case SMSG_GODMODE: return BUILD5875_SMSG_GODMODE;
        case CMSG_CHEAT_SETMONEY: return BUILD5875_CMSG_CHEAT_SETMONEY;
        case CMSG_LEVEL_CHEAT: return BUILD5875_CMSG_LEVEL_CHEAT;
        case CMSG_PET_LEVEL_CHEAT: return BUILD5875_CMSG_PET_LEVEL_CHEAT;
        case CMSG_SET_WORLDSTATE: return BUILD5875_CMSG_SET_WORLDSTATE;
        case CMSG_COOLDOWN_CHEAT: return BUILD5875_CMSG_COOLDOWN_CHEAT;
        case CMSG_USE_SKILL_CHEAT: return BUILD5875_CMSG_USE_SKILL_CHEAT;
        case CMSG_FLAG_QUEST: return BUILD5875_CMSG_FLAG_QUEST;
        case CMSG_FLAG_QUEST_FINISH: return BUILD5875_CMSG_FLAG_QUEST_FINISH;
        case CMSG_CLEAR_QUEST: return BUILD5875_CMSG_CLEAR_QUEST;
        case CMSG_SEND_EVENT: return BUILD5875_CMSG_SEND_EVENT;
        case CMSG_DEBUG_AISTATE: return BUILD5875_CMSG_DEBUG_AISTATE;
        case SMSG_DEBUG_AISTATE: return BUILD5875_SMSG_DEBUG_AISTATE;
        case CMSG_DISABLE_PVP_CHEAT: return BUILD5875_CMSG_DISABLE_PVP_CHEAT;
        case CMSG_ADVANCE_SPAWN_TIME: return BUILD5875_CMSG_ADVANCE_SPAWN_TIME;
        case CMSG_PVP_PORT_OBSOLETE: return BUILD5875_CMSG_PVP_PORT_OBSOLETE;
        case CMSG_AUTH_SRP6_BEGIN: return BUILD5875_CMSG_AUTH_SRP6_BEGIN;
        case CMSG_AUTH_SRP6_PROOF: return BUILD5875_CMSG_AUTH_SRP6_PROOF;
        case CMSG_AUTH_SRP6_RECODE: return BUILD5875_CMSG_AUTH_SRP6_RECODE;
        case CMSG_CHAR_CREATE: return BUILD5875_CMSG_CHAR_CREATE;
        case CMSG_CHAR_ENUM: return BUILD5875_CMSG_CHAR_ENUM;
        case CMSG_CHAR_DELETE: return BUILD5875_CMSG_CHAR_DELETE;
        case SMSG_AUTH_SRP6_RESPONSE: return BUILD5875_SMSG_AUTH_SRP6_RESPONSE;
        case SMSG_CHAR_CREATE: return BUILD5875_SMSG_CHAR_CREATE;
        case SMSG_CHAR_ENUM: return BUILD5875_SMSG_CHAR_ENUM;
        case SMSG_CHAR_DELETE: return BUILD5875_SMSG_CHAR_DELETE;
        case CMSG_PLAYER_LOGIN: return BUILD5875_CMSG_PLAYER_LOGIN;
        case SMSG_NEW_WORLD: return BUILD5875_SMSG_NEW_WORLD;
        case SMSG_TRANSFER_PENDING: return BUILD5875_SMSG_TRANSFER_PENDING;
        case SMSG_TRANSFER_ABORTED: return BUILD5875_SMSG_TRANSFER_ABORTED;
        case SMSG_CHARACTER_LOGIN_FAILED: return BUILD5875_SMSG_CHARACTER_LOGIN_FAILED;
        case SMSG_LOGIN_SETTIMESPEED: return BUILD5875_SMSG_LOGIN_SETTIMESPEED;
        case SMSG_GAMETIME_UPDATE: return BUILD5875_SMSG_GAMETIME_UPDATE;
        case CMSG_GAMETIME_SET: return BUILD5875_CMSG_GAMETIME_SET;
        case SMSG_GAMETIME_SET: return BUILD5875_SMSG_GAMETIME_SET;
        case CMSG_GAMESPEED_SET: return BUILD5875_CMSG_GAMESPEED_SET;
        case SMSG_GAMESPEED_SET: return BUILD5875_SMSG_GAMESPEED_SET;
        case CMSG_SERVERTIME: return BUILD5875_CMSG_SERVERTIME;
        case SMSG_SERVERTIME: return BUILD5875_SMSG_SERVERTIME;
        case CMSG_PLAYER_LOGOUT: return BUILD5875_CMSG_PLAYER_LOGOUT;
        case CMSG_LOGOUT_REQUEST: return BUILD5875_CMSG_LOGOUT_REQUEST;
        case SMSG_LOGOUT_RESPONSE: return BUILD5875_SMSG_LOGOUT_RESPONSE;
        case SMSG_LOGOUT_COMPLETE: return BUILD5875_SMSG_LOGOUT_COMPLETE;
        case CMSG_LOGOUT_CANCEL: return BUILD5875_CMSG_LOGOUT_CANCEL;
        case SMSG_LOGOUT_CANCEL_ACK: return BUILD5875_SMSG_LOGOUT_CANCEL_ACK;
        case CMSG_NAME_QUERY: return BUILD5875_CMSG_NAME_QUERY;
        case SMSG_NAME_QUERY_RESPONSE: return BUILD5875_SMSG_NAME_QUERY_RESPONSE;
        case CMSG_PET_NAME_QUERY: return BUILD5875_CMSG_PET_NAME_QUERY;
        case SMSG_PET_NAME_QUERY_RESPONSE: return BUILD5875_SMSG_PET_NAME_QUERY_RESPONSE;
        case CMSG_GUILD_QUERY: return BUILD5875_CMSG_GUILD_QUERY;
        case SMSG_GUILD_QUERY_RESPONSE: return BUILD5875_SMSG_GUILD_QUERY_RESPONSE;
        case CMSG_ITEM_QUERY_SINGLE: return BUILD5875_CMSG_ITEM_QUERY_SINGLE;
        case CMSG_ITEM_QUERY_MULTIPLE: return BUILD5875_CMSG_ITEM_QUERY_MULTIPLE;
        case SMSG_ITEM_QUERY_SINGLE_RESPONSE: return BUILD5875_SMSG_ITEM_QUERY_SINGLE_RESPONSE;
        case SMSG_ITEM_QUERY_MULTIPLE_RESPONSE: return BUILD5875_SMSG_ITEM_QUERY_MULTIPLE_RESPONSE;
        case CMSG_PAGE_TEXT_QUERY: return BUILD5875_CMSG_PAGE_TEXT_QUERY;
        case SMSG_PAGE_TEXT_QUERY_RESPONSE: return BUILD5875_SMSG_PAGE_TEXT_QUERY_RESPONSE;
        case CMSG_QUEST_QUERY: return BUILD5875_CMSG_QUEST_QUERY;
        case SMSG_QUEST_QUERY_RESPONSE: return BUILD5875_SMSG_QUEST_QUERY_RESPONSE;
        case CMSG_GAMEOBJECT_QUERY: return BUILD5875_CMSG_GAMEOBJECT_QUERY;
        case SMSG_GAMEOBJECT_QUERY_RESPONSE: return BUILD5875_SMSG_GAMEOBJECT_QUERY_RESPONSE;
        case CMSG_CREATURE_QUERY: return BUILD5875_CMSG_CREATURE_QUERY;
        case SMSG_CREATURE_QUERY_RESPONSE: return BUILD5875_SMSG_CREATURE_QUERY_RESPONSE;
        case CMSG_WHO: return BUILD5875_CMSG_WHO;
        case SMSG_WHO: return BUILD5875_SMSG_WHO;
        case CMSG_WHOIS: return BUILD5875_CMSG_WHOIS;
        case SMSG_WHOIS: return BUILD5875_SMSG_WHOIS;
        case CMSG_FRIEND_LIST: return BUILD5875_CMSG_FRIEND_LIST;
        case SMSG_FRIEND_LIST: return BUILD5875_SMSG_FRIEND_LIST;
        case SMSG_FRIEND_STATUS: return BUILD5875_SMSG_FRIEND_STATUS;
        case CMSG_ADD_FRIEND: return BUILD5875_CMSG_ADD_FRIEND;
        case CMSG_DEL_FRIEND: return BUILD5875_CMSG_DEL_FRIEND;
        case SMSG_IGNORE_LIST: return BUILD5875_SMSG_IGNORE_LIST;
        case CMSG_ADD_IGNORE: return BUILD5875_CMSG_ADD_IGNORE;
        case CMSG_DEL_IGNORE: return BUILD5875_CMSG_DEL_IGNORE;
        case CMSG_GROUP_INVITE: return BUILD5875_CMSG_GROUP_INVITE;
        case SMSG_GROUP_INVITE: return BUILD5875_SMSG_GROUP_INVITE;
        case CMSG_GROUP_CANCEL: return BUILD5875_CMSG_GROUP_CANCEL;
        case SMSG_GROUP_CANCEL: return BUILD5875_SMSG_GROUP_CANCEL;
        case CMSG_GROUP_ACCEPT: return BUILD5875_CMSG_GROUP_ACCEPT;
        case CMSG_GROUP_DECLINE: return BUILD5875_CMSG_GROUP_DECLINE;
        case SMSG_GROUP_DECLINE: return BUILD5875_SMSG_GROUP_DECLINE;
        case CMSG_GROUP_UNINVITE: return BUILD5875_CMSG_GROUP_UNINVITE;
        case CMSG_GROUP_UNINVITE_GUID: return BUILD5875_CMSG_GROUP_UNINVITE_GUID;
        case SMSG_GROUP_UNINVITE: return BUILD5875_SMSG_GROUP_UNINVITE;
        case CMSG_GROUP_SET_LEADER: return BUILD5875_CMSG_GROUP_SET_LEADER;
        case SMSG_GROUP_SET_LEADER: return BUILD5875_SMSG_GROUP_SET_LEADER;
        case CMSG_LOOT_METHOD: return BUILD5875_CMSG_LOOT_METHOD;
        case CMSG_GROUP_DISBAND: return BUILD5875_CMSG_GROUP_DISBAND;
        case SMSG_GROUP_DESTROYED: return BUILD5875_SMSG_GROUP_DESTROYED;
        case SMSG_GROUP_LIST: return BUILD5875_SMSG_GROUP_LIST;
        case SMSG_PARTY_MEMBER_STATS: return BUILD5875_SMSG_PARTY_MEMBER_STATS;
        case SMSG_PARTY_COMMAND_RESULT: return BUILD5875_SMSG_PARTY_COMMAND_RESULT;
        case UMSG_UPDATE_GROUP_MEMBERS: return BUILD5875_UMSG_UPDATE_GROUP_MEMBERS;
        case CMSG_GUILD_CREATE: return BUILD5875_CMSG_GUILD_CREATE;
        case CMSG_GUILD_INVITE: return BUILD5875_CMSG_GUILD_INVITE;
        case SMSG_GUILD_INVITE: return BUILD5875_SMSG_GUILD_INVITE;
        case CMSG_GUILD_ACCEPT: return BUILD5875_CMSG_GUILD_ACCEPT;
        case CMSG_GUILD_DECLINE: return BUILD5875_CMSG_GUILD_DECLINE;
        case SMSG_GUILD_DECLINE: return BUILD5875_SMSG_GUILD_DECLINE;
        case CMSG_GUILD_INFO: return BUILD5875_CMSG_GUILD_INFO;
        case SMSG_GUILD_INFO: return BUILD5875_SMSG_GUILD_INFO;
        case CMSG_GUILD_ROSTER: return BUILD5875_CMSG_GUILD_ROSTER;
        case SMSG_GUILD_ROSTER: return BUILD5875_SMSG_GUILD_ROSTER;
        case CMSG_GUILD_PROMOTE: return BUILD5875_CMSG_GUILD_PROMOTE;
        case CMSG_GUILD_DEMOTE: return BUILD5875_CMSG_GUILD_DEMOTE;
        case CMSG_GUILD_LEAVE: return BUILD5875_CMSG_GUILD_LEAVE;
        case CMSG_GUILD_REMOVE: return BUILD5875_CMSG_GUILD_REMOVE;
        case CMSG_GUILD_DISBAND: return BUILD5875_CMSG_GUILD_DISBAND;
        case CMSG_GUILD_LEADER: return BUILD5875_CMSG_GUILD_LEADER;
        case CMSG_GUILD_MOTD: return BUILD5875_CMSG_GUILD_MOTD;
        case SMSG_GUILD_EVENT: return BUILD5875_SMSG_GUILD_EVENT;
        case SMSG_GUILD_COMMAND_RESULT: return BUILD5875_SMSG_GUILD_COMMAND_RESULT;
        case UMSG_UPDATE_GUILD: return BUILD5875_UMSG_UPDATE_GUILD;
        case CMSG_MESSAGECHAT: return BUILD5875_CMSG_MESSAGECHAT;
        case SMSG_MESSAGECHAT: return BUILD5875_SMSG_MESSAGECHAT;
        case CMSG_JOIN_CHANNEL: return BUILD5875_CMSG_JOIN_CHANNEL;
        case CMSG_LEAVE_CHANNEL: return BUILD5875_CMSG_LEAVE_CHANNEL;
        case SMSG_CHANNEL_NOTIFY: return BUILD5875_SMSG_CHANNEL_NOTIFY;
        case CMSG_CHANNEL_LIST: return BUILD5875_CMSG_CHANNEL_LIST;
        case SMSG_CHANNEL_LIST: return BUILD5875_SMSG_CHANNEL_LIST;
        case CMSG_CHANNEL_PASSWORD: return BUILD5875_CMSG_CHANNEL_PASSWORD;
        case CMSG_CHANNEL_SET_OWNER: return BUILD5875_CMSG_CHANNEL_SET_OWNER;
        case CMSG_CHANNEL_OWNER: return BUILD5875_CMSG_CHANNEL_OWNER;
        case CMSG_CHANNEL_MODERATOR: return BUILD5875_CMSG_CHANNEL_MODERATOR;
        case CMSG_CHANNEL_UNMODERATOR: return BUILD5875_CMSG_CHANNEL_UNMODERATOR;
        case CMSG_CHANNEL_MUTE: return BUILD5875_CMSG_CHANNEL_MUTE;
        case CMSG_CHANNEL_UNMUTE: return BUILD5875_CMSG_CHANNEL_UNMUTE;
        case CMSG_CHANNEL_INVITE: return BUILD5875_CMSG_CHANNEL_INVITE;
        case CMSG_CHANNEL_KICK: return BUILD5875_CMSG_CHANNEL_KICK;
        case CMSG_CHANNEL_BAN: return BUILD5875_CMSG_CHANNEL_BAN;
        case CMSG_CHANNEL_UNBAN: return BUILD5875_CMSG_CHANNEL_UNBAN;
        case CMSG_CHANNEL_ANNOUNCEMENTS: return BUILD5875_CMSG_CHANNEL_ANNOUNCEMENTS;
        case CMSG_CHANNEL_MODERATE: return BUILD5875_CMSG_CHANNEL_MODERATE;
        case SMSG_UPDATE_OBJECT: return BUILD5875_SMSG_UPDATE_OBJECT;
        case SMSG_DESTROY_OBJECT: return BUILD5875_SMSG_DESTROY_OBJECT;
        case CMSG_USE_ITEM: return BUILD5875_CMSG_USE_ITEM;
        case CMSG_OPEN_ITEM: return BUILD5875_CMSG_OPEN_ITEM;
        case CMSG_READ_ITEM: return BUILD5875_CMSG_READ_ITEM;
        case SMSG_READ_ITEM_OK: return BUILD5875_SMSG_READ_ITEM_OK;
        case SMSG_READ_ITEM_FAILED: return BUILD5875_SMSG_READ_ITEM_FAILED;
        case SMSG_ITEM_COOLDOWN: return BUILD5875_SMSG_ITEM_COOLDOWN;
        case CMSG_GAMEOBJ_USE: return BUILD5875_CMSG_GAMEOBJ_USE;
        case CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE: return BUILD5875_CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE;
        case SMSG_GAMEOBJECT_CUSTOM_ANIM: return BUILD5875_SMSG_GAMEOBJECT_CUSTOM_ANIM;
        case CMSG_AREATRIGGER: return BUILD5875_CMSG_AREATRIGGER;
        case MSG_MOVE_START_FORWARD: return BUILD5875_MSG_MOVE_START_FORWARD;
        case MSG_MOVE_START_BACKWARD: return BUILD5875_MSG_MOVE_START_BACKWARD;
        case MSG_MOVE_STOP: return BUILD5875_MSG_MOVE_STOP;
        case MSG_MOVE_START_STRAFE_LEFT: return BUILD5875_MSG_MOVE_START_STRAFE_LEFT;
        case MSG_MOVE_START_STRAFE_RIGHT: return BUILD5875_MSG_MOVE_START_STRAFE_RIGHT;
        case MSG_MOVE_STOP_STRAFE: return BUILD5875_MSG_MOVE_STOP_STRAFE;
        case MSG_MOVE_JUMP: return BUILD5875_MSG_MOVE_JUMP;
        case MSG_MOVE_START_TURN_LEFT: return BUILD5875_MSG_MOVE_START_TURN_LEFT;
        case MSG_MOVE_START_TURN_RIGHT: return BUILD5875_MSG_MOVE_START_TURN_RIGHT;
        case MSG_MOVE_STOP_TURN: return BUILD5875_MSG_MOVE_STOP_TURN;
        case MSG_MOVE_START_PITCH_UP: return BUILD5875_MSG_MOVE_START_PITCH_UP;
        case MSG_MOVE_START_PITCH_DOWN: return BUILD5875_MSG_MOVE_START_PITCH_DOWN;
        case MSG_MOVE_STOP_PITCH: return BUILD5875_MSG_MOVE_STOP_PITCH;
        case MSG_MOVE_SET_RUN_MODE: return BUILD5875_MSG_MOVE_SET_RUN_MODE;
        case MSG_MOVE_SET_WALK_MODE: return BUILD5875_MSG_MOVE_SET_WALK_MODE;
        case MSG_MOVE_TOGGLE_LOGGING: return BUILD5875_MSG_MOVE_TOGGLE_LOGGING;
        case MSG_MOVE_TELEPORT: return BUILD5875_MSG_MOVE_TELEPORT;
        case MSG_MOVE_TELEPORT_CHEAT: return BUILD5875_MSG_MOVE_TELEPORT_CHEAT;
        case MSG_MOVE_TELEPORT_ACK: return BUILD5875_MSG_MOVE_TELEPORT_ACK;
        case MSG_MOVE_TOGGLE_FALL_LOGGING: return BUILD5875_MSG_MOVE_TOGGLE_FALL_LOGGING;
        case MSG_MOVE_FALL_LAND: return BUILD5875_MSG_MOVE_FALL_LAND;
        case MSG_MOVE_START_SWIM: return BUILD5875_MSG_MOVE_START_SWIM;
        case MSG_MOVE_STOP_SWIM: return BUILD5875_MSG_MOVE_STOP_SWIM;
        case MSG_MOVE_SET_RUN_SPEED_CHEAT: return BUILD5875_MSG_MOVE_SET_RUN_SPEED_CHEAT;
        case MSG_MOVE_SET_RUN_SPEED: return BUILD5875_MSG_MOVE_SET_RUN_SPEED;
        case MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT: return BUILD5875_MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT;
        case MSG_MOVE_SET_RUN_BACK_SPEED: return BUILD5875_MSG_MOVE_SET_RUN_BACK_SPEED;
        case MSG_MOVE_SET_WALK_SPEED_CHEAT: return BUILD5875_MSG_MOVE_SET_WALK_SPEED_CHEAT;
        case MSG_MOVE_SET_WALK_SPEED: return BUILD5875_MSG_MOVE_SET_WALK_SPEED;
        case MSG_MOVE_SET_SWIM_SPEED_CHEAT: return BUILD5875_MSG_MOVE_SET_SWIM_SPEED_CHEAT;
        case MSG_MOVE_SET_SWIM_SPEED: return BUILD5875_MSG_MOVE_SET_SWIM_SPEED;
        case MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT: return BUILD5875_MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT;
        case MSG_MOVE_SET_SWIM_BACK_SPEED: return BUILD5875_MSG_MOVE_SET_SWIM_BACK_SPEED;
        case MSG_MOVE_SET_ALL_SPEED_CHEAT: return BUILD5875_MSG_MOVE_SET_ALL_SPEED_CHEAT;
        case MSG_MOVE_SET_TURN_RATE_CHEAT: return BUILD5875_MSG_MOVE_SET_TURN_RATE_CHEAT;
        case MSG_MOVE_SET_TURN_RATE: return BUILD5875_MSG_MOVE_SET_TURN_RATE;
        case MSG_MOVE_TOGGLE_COLLISION_CHEAT: return BUILD5875_MSG_MOVE_TOGGLE_COLLISION_CHEAT;
        case MSG_MOVE_SET_FACING: return BUILD5875_MSG_MOVE_SET_FACING;
        case MSG_MOVE_SET_PITCH: return BUILD5875_MSG_MOVE_SET_PITCH;
        case MSG_MOVE_WORLDPORT_ACK: return BUILD5875_MSG_MOVE_WORLDPORT_ACK;
        case SMSG_MONSTER_MOVE: return BUILD5875_SMSG_MONSTER_MOVE;
        case SMSG_MOVE_WATER_WALK: return BUILD5875_SMSG_MOVE_WATER_WALK;
        case SMSG_MOVE_LAND_WALK: return BUILD5875_SMSG_MOVE_LAND_WALK;
        case MSG_MOVE_SET_RAW_POSITION_ACK: return BUILD5875_MSG_MOVE_SET_RAW_POSITION_ACK;
        case CMSG_MOVE_SET_RAW_POSITION: return BUILD5875_CMSG_MOVE_SET_RAW_POSITION;
        case SMSG_FORCE_RUN_SPEED_CHANGE: return BUILD5875_SMSG_FORCE_RUN_SPEED_CHANGE;
        case CMSG_FORCE_RUN_SPEED_CHANGE_ACK: return BUILD5875_CMSG_FORCE_RUN_SPEED_CHANGE_ACK;
        case SMSG_FORCE_RUN_BACK_SPEED_CHANGE: return BUILD5875_SMSG_FORCE_RUN_BACK_SPEED_CHANGE;
        case CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK: return BUILD5875_CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_SWIM_SPEED_CHANGE: return BUILD5875_SMSG_FORCE_SWIM_SPEED_CHANGE;
        case CMSG_FORCE_SWIM_SPEED_CHANGE_ACK: return BUILD5875_CMSG_FORCE_SWIM_SPEED_CHANGE_ACK;
        case SMSG_FORCE_MOVE_ROOT: return BUILD5875_SMSG_FORCE_MOVE_ROOT;
        case CMSG_FORCE_MOVE_ROOT_ACK: return BUILD5875_CMSG_FORCE_MOVE_ROOT_ACK;
        case SMSG_FORCE_MOVE_UNROOT: return BUILD5875_SMSG_FORCE_MOVE_UNROOT;
        case CMSG_FORCE_MOVE_UNROOT_ACK: return BUILD5875_CMSG_FORCE_MOVE_UNROOT_ACK;
        case MSG_MOVE_ROOT: return BUILD5875_MSG_MOVE_ROOT;
        case MSG_MOVE_UNROOT: return BUILD5875_MSG_MOVE_UNROOT;
        case MSG_MOVE_HEARTBEAT: return BUILD5875_MSG_MOVE_HEARTBEAT;
        case SMSG_MOVE_KNOCK_BACK: return BUILD5875_SMSG_MOVE_KNOCK_BACK;
        case CMSG_MOVE_KNOCK_BACK_ACK: return BUILD5875_CMSG_MOVE_KNOCK_BACK_ACK;
        case MSG_MOVE_KNOCK_BACK: return BUILD5875_MSG_MOVE_KNOCK_BACK;
        case SMSG_MOVE_FEATHER_FALL: return BUILD5875_SMSG_MOVE_FEATHER_FALL;
        case SMSG_MOVE_NORMAL_FALL: return BUILD5875_SMSG_MOVE_NORMAL_FALL;
        case SMSG_MOVE_SET_HOVER: return BUILD5875_SMSG_MOVE_SET_HOVER;
        case SMSG_MOVE_UNSET_HOVER: return BUILD5875_SMSG_MOVE_UNSET_HOVER;
        case CMSG_MOVE_HOVER_ACK: return BUILD5875_CMSG_MOVE_HOVER_ACK;
        case MSG_MOVE_HOVER: return BUILD5875_MSG_MOVE_HOVER;
        case CMSG_TRIGGER_CINEMATIC_CHEAT: return BUILD5875_CMSG_TRIGGER_CINEMATIC_CHEAT;
        case CMSG_OPENING_CINEMATIC: return BUILD5875_CMSG_OPENING_CINEMATIC;
        case SMSG_TRIGGER_CINEMATIC: return BUILD5875_SMSG_TRIGGER_CINEMATIC;
        case CMSG_NEXT_CINEMATIC_CAMERA: return BUILD5875_CMSG_NEXT_CINEMATIC_CAMERA;
        case CMSG_COMPLETE_CINEMATIC: return BUILD5875_CMSG_COMPLETE_CINEMATIC;
        case SMSG_TUTORIAL_FLAGS: return BUILD5875_SMSG_TUTORIAL_FLAGS;
        case CMSG_TUTORIAL_FLAG: return BUILD5875_CMSG_TUTORIAL_FLAG;
        case CMSG_TUTORIAL_CLEAR: return BUILD5875_CMSG_TUTORIAL_CLEAR;
        case CMSG_TUTORIAL_RESET: return BUILD5875_CMSG_TUTORIAL_RESET;
        case CMSG_STANDSTATECHANGE: return BUILD5875_CMSG_STANDSTATECHANGE;
        case CMSG_EMOTE: return BUILD5875_CMSG_EMOTE;
        case SMSG_EMOTE: return BUILD5875_SMSG_EMOTE;
        case CMSG_TEXT_EMOTE: return BUILD5875_CMSG_TEXT_EMOTE;
        case SMSG_TEXT_EMOTE: return BUILD5875_SMSG_TEXT_EMOTE;
        case CMSG_AUTOEQUIP_GROUND_ITEM: return BUILD5875_CMSG_AUTOEQUIP_GROUND_ITEM;
        case CMSG_AUTOSTORE_GROUND_ITEM: return BUILD5875_CMSG_AUTOSTORE_GROUND_ITEM;
        case CMSG_AUTOSTORE_LOOT_ITEM: return BUILD5875_CMSG_AUTOSTORE_LOOT_ITEM;
        case CMSG_STORE_LOOT_IN_SLOT: return BUILD5875_CMSG_STORE_LOOT_IN_SLOT;
        case CMSG_AUTOEQUIP_ITEM: return BUILD5875_CMSG_AUTOEQUIP_ITEM;
        case CMSG_AUTOSTORE_BAG_ITEM: return BUILD5875_CMSG_AUTOSTORE_BAG_ITEM;
        case CMSG_SWAP_ITEM: return BUILD5875_CMSG_SWAP_ITEM;
        case CMSG_SWAP_INV_ITEM: return BUILD5875_CMSG_SWAP_INV_ITEM;
        case CMSG_SPLIT_ITEM: return BUILD5875_CMSG_SPLIT_ITEM;
        case CMSG_AUTOEQUIP_ITEM_SLOT: return BUILD5875_CMSG_AUTOEQUIP_ITEM_SLOT;
        case OBSOLETE_DROP_ITEM: return BUILD5875_OBSOLETE_DROP_ITEM;
        case CMSG_DESTROYITEM: return BUILD5875_CMSG_DESTROYITEM;
        case SMSG_INVENTORY_CHANGE_FAILURE: return BUILD5875_SMSG_INVENTORY_CHANGE_FAILURE;
        case SMSG_OPEN_CONTAINER: return BUILD5875_SMSG_OPEN_CONTAINER;
        case CMSG_INSPECT: return BUILD5875_CMSG_INSPECT;
        case SMSG_INSPECT: return BUILD5875_SMSG_INSPECT;
        case CMSG_INITIATE_TRADE: return BUILD5875_CMSG_INITIATE_TRADE;
        case CMSG_BEGIN_TRADE: return BUILD5875_CMSG_BEGIN_TRADE;
        case CMSG_BUSY_TRADE: return BUILD5875_CMSG_BUSY_TRADE;
        case CMSG_IGNORE_TRADE: return BUILD5875_CMSG_IGNORE_TRADE;
        case CMSG_ACCEPT_TRADE: return BUILD5875_CMSG_ACCEPT_TRADE;
        case CMSG_UNACCEPT_TRADE: return BUILD5875_CMSG_UNACCEPT_TRADE;
        case CMSG_CANCEL_TRADE: return BUILD5875_CMSG_CANCEL_TRADE;
        case CMSG_SET_TRADE_ITEM: return BUILD5875_CMSG_SET_TRADE_ITEM;
        case CMSG_CLEAR_TRADE_ITEM: return BUILD5875_CMSG_CLEAR_TRADE_ITEM;
        case CMSG_SET_TRADE_GOLD: return BUILD5875_CMSG_SET_TRADE_GOLD;
        case SMSG_TRADE_STATUS: return BUILD5875_SMSG_TRADE_STATUS;
        case SMSG_TRADE_STATUS_EXTENDED: return BUILD5875_SMSG_TRADE_STATUS_EXTENDED;
        case SMSG_INITIALIZE_FACTIONS: return BUILD5875_SMSG_INITIALIZE_FACTIONS;
        case SMSG_SET_FACTION_VISIBLE: return BUILD5875_SMSG_SET_FACTION_VISIBLE;
        case SMSG_SET_FACTION_STANDING: return BUILD5875_SMSG_SET_FACTION_STANDING;
        case CMSG_SET_FACTION_ATWAR: return BUILD5875_CMSG_SET_FACTION_ATWAR;
        case CMSG_SET_FACTION_CHEAT: return BUILD5875_CMSG_SET_FACTION_CHEAT;
        case SMSG_SET_PROFICIENCY: return BUILD5875_SMSG_SET_PROFICIENCY;
        case CMSG_SET_ACTION_BUTTON: return BUILD5875_CMSG_SET_ACTION_BUTTON;
        case SMSG_ACTION_BUTTONS: return BUILD5875_SMSG_ACTION_BUTTONS;
        case SMSG_INITIAL_SPELLS: return BUILD5875_SMSG_INITIAL_SPELLS;
        case SMSG_LEARNED_SPELL: return BUILD5875_SMSG_LEARNED_SPELL;
        case SMSG_SUPERCEDED_SPELL: return BUILD5875_SMSG_SUPERCEDED_SPELL;
        case CMSG_NEW_SPELL_SLOT: return BUILD5875_CMSG_NEW_SPELL_SLOT;
        case CMSG_CAST_SPELL: return BUILD5875_CMSG_CAST_SPELL;
        case CMSG_CANCEL_CAST: return BUILD5875_CMSG_CANCEL_CAST;
        case SMSG_CAST_RESULT: return BUILD5875_SMSG_CAST_RESULT;
        case SMSG_SPELL_START: return BUILD5875_SMSG_SPELL_START;
        case SMSG_SPELL_GO: return BUILD5875_SMSG_SPELL_GO;
        case SMSG_SPELL_FAILURE: return BUILD5875_SMSG_SPELL_FAILURE;
        case SMSG_SPELL_COOLDOWN: return BUILD5875_SMSG_SPELL_COOLDOWN;
        case SMSG_COOLDOWN_EVENT: return BUILD5875_SMSG_COOLDOWN_EVENT;
        case CMSG_CANCEL_AURA: return BUILD5875_CMSG_CANCEL_AURA;
        case SMSG_UPDATE_AURA_DURATION: return BUILD5875_SMSG_UPDATE_AURA_DURATION;
        case SMSG_PET_CAST_FAILED: return BUILD5875_SMSG_PET_CAST_FAILED;
        case MSG_CHANNEL_START: return BUILD5875_MSG_CHANNEL_START;
        case MSG_CHANNEL_UPDATE: return BUILD5875_MSG_CHANNEL_UPDATE;
        case CMSG_CANCEL_CHANNELLING: return BUILD5875_CMSG_CANCEL_CHANNELLING;
        case SMSG_AI_REACTION: return BUILD5875_SMSG_AI_REACTION;
        case CMSG_SET_SELECTION: return BUILD5875_CMSG_SET_SELECTION;
        case CMSG_SET_TARGET_OBSOLETE: return BUILD5875_CMSG_SET_TARGET_OBSOLETE;
        case CMSG_UNUSED: return BUILD5875_CMSG_UNUSED;
        case CMSG_UNUSED2: return BUILD5875_CMSG_UNUSED2;
        case CMSG_ATTACKSWING: return BUILD5875_CMSG_ATTACKSWING;
        case CMSG_ATTACKSTOP: return BUILD5875_CMSG_ATTACKSTOP;
        case SMSG_ATTACKSTART: return BUILD5875_SMSG_ATTACKSTART;
        case SMSG_ATTACKSTOP: return BUILD5875_SMSG_ATTACKSTOP;
        case SMSG_ATTACKSWING_NOTINRANGE: return BUILD5875_SMSG_ATTACKSWING_NOTINRANGE;
        case SMSG_ATTACKSWING_BADFACING: return BUILD5875_SMSG_ATTACKSWING_BADFACING;
        case SMSG_ATTACKSWING_NOTSTANDING: return BUILD5875_SMSG_ATTACKSWING_NOTSTANDING;
        case SMSG_ATTACKSWING_DEADTARGET: return BUILD5875_SMSG_ATTACKSWING_DEADTARGET;
        case SMSG_ATTACKSWING_CANT_ATTACK: return BUILD5875_SMSG_ATTACKSWING_CANT_ATTACK;
        case SMSG_ATTACKERSTATEUPDATE: return BUILD5875_SMSG_ATTACKERSTATEUPDATE;
        case SMSG_VICTIMSTATEUPDATE_OBSOLETE: return BUILD5875_SMSG_VICTIMSTATEUPDATE_OBSOLETE;
        case SMSG_DAMAGE_DONE_OBSOLETE: return BUILD5875_SMSG_DAMAGE_DONE_OBSOLETE;
        case SMSG_DAMAGE_TAKEN_OBSOLETE: return BUILD5875_SMSG_DAMAGE_TAKEN_OBSOLETE;
        case SMSG_CANCEL_COMBAT: return BUILD5875_SMSG_CANCEL_COMBAT;
        case SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE: return BUILD5875_SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE;
        case SMSG_SPELLHEALLOG: return BUILD5875_SMSG_SPELLHEALLOG;
        case SMSG_SPELLENERGIZELOG: return BUILD5875_SMSG_SPELLENERGIZELOG;
        case CMSG_SHEATHE_OBSOLETE: return BUILD5875_CMSG_SHEATHE_OBSOLETE;
        case CMSG_SAVE_PLAYER: return BUILD5875_CMSG_SAVE_PLAYER;
        case CMSG_SETDEATHBINDPOINT: return BUILD5875_CMSG_SETDEATHBINDPOINT;
        case SMSG_BINDPOINTUPDATE: return BUILD5875_SMSG_BINDPOINTUPDATE;
        case CMSG_GETDEATHBINDZONE: return BUILD5875_CMSG_GETDEATHBINDZONE;
        case SMSG_BINDZONEREPLY: return BUILD5875_SMSG_BINDZONEREPLY;
        case SMSG_PLAYERBOUND: return BUILD5875_SMSG_PLAYERBOUND;
        case SMSG_CLIENT_CONTROL_UPDATE: return BUILD5875_SMSG_CLIENT_CONTROL_UPDATE;
        case CMSG_REPOP_REQUEST: return BUILD5875_CMSG_REPOP_REQUEST;
        case SMSG_RESURRECT_REQUEST: return BUILD5875_SMSG_RESURRECT_REQUEST;
        case CMSG_RESURRECT_RESPONSE: return BUILD5875_CMSG_RESURRECT_RESPONSE;
        case CMSG_LOOT: return BUILD5875_CMSG_LOOT;
        case CMSG_LOOT_MONEY: return BUILD5875_CMSG_LOOT_MONEY;
        case CMSG_LOOT_RELEASE: return BUILD5875_CMSG_LOOT_RELEASE;
        case SMSG_LOOT_RESPONSE: return BUILD5875_SMSG_LOOT_RESPONSE;
        case SMSG_LOOT_RELEASE_RESPONSE: return BUILD5875_SMSG_LOOT_RELEASE_RESPONSE;
        case SMSG_LOOT_REMOVED: return BUILD5875_SMSG_LOOT_REMOVED;
        case SMSG_LOOT_MONEY_NOTIFY: return BUILD5875_SMSG_LOOT_MONEY_NOTIFY;
        case SMSG_LOOT_ITEM_NOTIFY: return BUILD5875_SMSG_LOOT_ITEM_NOTIFY;
        case SMSG_LOOT_CLEAR_MONEY: return BUILD5875_SMSG_LOOT_CLEAR_MONEY;
        case SMSG_ITEM_PUSH_RESULT: return BUILD5875_SMSG_ITEM_PUSH_RESULT;
        case SMSG_DUEL_REQUESTED: return BUILD5875_SMSG_DUEL_REQUESTED;
        case SMSG_DUEL_OUTOFBOUNDS: return BUILD5875_SMSG_DUEL_OUTOFBOUNDS;
        case SMSG_DUEL_INBOUNDS: return BUILD5875_SMSG_DUEL_INBOUNDS;
        case SMSG_DUEL_COMPLETE: return BUILD5875_SMSG_DUEL_COMPLETE;
        case SMSG_DUEL_WINNER: return BUILD5875_SMSG_DUEL_WINNER;
        case CMSG_DUEL_ACCEPTED: return BUILD5875_CMSG_DUEL_ACCEPTED;
        case CMSG_DUEL_CANCELLED: return BUILD5875_CMSG_DUEL_CANCELLED;
        case SMSG_MOUNTRESULT: return BUILD5875_SMSG_MOUNTRESULT;
        case SMSG_DISMOUNTRESULT: return BUILD5875_SMSG_DISMOUNTRESULT;
        case SMSG_PUREMOUNT_CANCELLED_OBSOLETE: return BUILD5875_SMSG_PUREMOUNT_CANCELLED_OBSOLETE;
        case CMSG_MOUNTSPECIAL_ANIM: return BUILD5875_CMSG_MOUNTSPECIAL_ANIM;
        case SMSG_MOUNTSPECIAL_ANIM: return BUILD5875_SMSG_MOUNTSPECIAL_ANIM;
        case SMSG_PET_TAME_FAILURE: return BUILD5875_SMSG_PET_TAME_FAILURE;
        case CMSG_PET_SET_ACTION: return BUILD5875_CMSG_PET_SET_ACTION;
        case CMSG_PET_ACTION: return BUILD5875_CMSG_PET_ACTION;
        case CMSG_PET_ABANDON: return BUILD5875_CMSG_PET_ABANDON;
        case CMSG_PET_RENAME: return BUILD5875_CMSG_PET_RENAME;
        case SMSG_PET_NAME_INVALID: return BUILD5875_SMSG_PET_NAME_INVALID;
        case SMSG_PET_SPELLS: return BUILD5875_SMSG_PET_SPELLS;
        case SMSG_PET_MODE: return BUILD5875_SMSG_PET_MODE;
        case CMSG_GOSSIP_HELLO: return BUILD5875_CMSG_GOSSIP_HELLO;
        case CMSG_GOSSIP_SELECT_OPTION: return BUILD5875_CMSG_GOSSIP_SELECT_OPTION;
        case SMSG_GOSSIP_MESSAGE: return BUILD5875_SMSG_GOSSIP_MESSAGE;
        case SMSG_GOSSIP_COMPLETE: return BUILD5875_SMSG_GOSSIP_COMPLETE;
        case CMSG_NPC_TEXT_QUERY: return BUILD5875_CMSG_NPC_TEXT_QUERY;
        case SMSG_NPC_TEXT_UPDATE: return BUILD5875_SMSG_NPC_TEXT_UPDATE;
        case SMSG_NPC_WONT_TALK: return BUILD5875_SMSG_NPC_WONT_TALK;
        case CMSG_QUESTGIVER_STATUS_QUERY: return BUILD5875_CMSG_QUESTGIVER_STATUS_QUERY;
        case SMSG_QUESTGIVER_STATUS: return BUILD5875_SMSG_QUESTGIVER_STATUS;
        case CMSG_QUESTGIVER_HELLO: return BUILD5875_CMSG_QUESTGIVER_HELLO;
        case SMSG_QUESTGIVER_QUEST_LIST: return BUILD5875_SMSG_QUESTGIVER_QUEST_LIST;
        case CMSG_QUESTGIVER_QUERY_QUEST: return BUILD5875_CMSG_QUESTGIVER_QUERY_QUEST;
        case CMSG_QUESTGIVER_QUEST_AUTOLAUNCH: return BUILD5875_CMSG_QUESTGIVER_QUEST_AUTOLAUNCH;
        case SMSG_QUESTGIVER_QUEST_DETAILS: return BUILD5875_SMSG_QUESTGIVER_QUEST_DETAILS;
        case CMSG_QUESTGIVER_ACCEPT_QUEST: return BUILD5875_CMSG_QUESTGIVER_ACCEPT_QUEST;
        case CMSG_QUESTGIVER_COMPLETE_QUEST: return BUILD5875_CMSG_QUESTGIVER_COMPLETE_QUEST;
        case SMSG_QUESTGIVER_REQUEST_ITEMS: return BUILD5875_SMSG_QUESTGIVER_REQUEST_ITEMS;
        case CMSG_QUESTGIVER_REQUEST_REWARD: return BUILD5875_CMSG_QUESTGIVER_REQUEST_REWARD;
        case SMSG_QUESTGIVER_OFFER_REWARD: return BUILD5875_SMSG_QUESTGIVER_OFFER_REWARD;
        case CMSG_QUESTGIVER_CHOOSE_REWARD: return BUILD5875_CMSG_QUESTGIVER_CHOOSE_REWARD;
        case SMSG_QUESTGIVER_QUEST_INVALID: return BUILD5875_SMSG_QUESTGIVER_QUEST_INVALID;
        case CMSG_QUESTGIVER_CANCEL: return BUILD5875_CMSG_QUESTGIVER_CANCEL;
        case SMSG_QUESTGIVER_QUEST_COMPLETE: return BUILD5875_SMSG_QUESTGIVER_QUEST_COMPLETE;
        case SMSG_QUESTGIVER_QUEST_FAILED: return BUILD5875_SMSG_QUESTGIVER_QUEST_FAILED;
        case CMSG_QUESTLOG_SWAP_QUEST: return BUILD5875_CMSG_QUESTLOG_SWAP_QUEST;
        case CMSG_QUESTLOG_REMOVE_QUEST: return BUILD5875_CMSG_QUESTLOG_REMOVE_QUEST;
        case SMSG_QUESTLOG_FULL: return BUILD5875_SMSG_QUESTLOG_FULL;
        case SMSG_QUESTUPDATE_FAILED: return BUILD5875_SMSG_QUESTUPDATE_FAILED;
        case SMSG_QUESTUPDATE_FAILEDTIMER: return BUILD5875_SMSG_QUESTUPDATE_FAILEDTIMER;
        case SMSG_QUESTUPDATE_COMPLETE: return BUILD5875_SMSG_QUESTUPDATE_COMPLETE;
        case SMSG_QUESTUPDATE_ADD_KILL: return BUILD5875_SMSG_QUESTUPDATE_ADD_KILL;
        case SMSG_QUESTUPDATE_ADD_ITEM: return BUILD5875_SMSG_QUESTUPDATE_ADD_ITEM;
        case CMSG_QUEST_CONFIRM_ACCEPT: return BUILD5875_CMSG_QUEST_CONFIRM_ACCEPT;
        case SMSG_QUEST_CONFIRM_ACCEPT: return BUILD5875_SMSG_QUEST_CONFIRM_ACCEPT;
        case CMSG_PUSHQUESTTOPARTY: return BUILD5875_CMSG_PUSHQUESTTOPARTY;
        case CMSG_LIST_INVENTORY: return BUILD5875_CMSG_LIST_INVENTORY;
        case SMSG_LIST_INVENTORY: return BUILD5875_SMSG_LIST_INVENTORY;
        case CMSG_SELL_ITEM: return BUILD5875_CMSG_SELL_ITEM;
        case SMSG_SELL_ITEM: return BUILD5875_SMSG_SELL_ITEM;
        case CMSG_BUY_ITEM: return BUILD5875_CMSG_BUY_ITEM;
        case CMSG_BUY_ITEM_IN_SLOT: return BUILD5875_CMSG_BUY_ITEM_IN_SLOT;
        case SMSG_BUY_ITEM: return BUILD5875_SMSG_BUY_ITEM;
        case SMSG_BUY_FAILED: return BUILD5875_SMSG_BUY_FAILED;
        case CMSG_TAXICLEARALLNODES: return BUILD5875_CMSG_TAXICLEARALLNODES;
        case CMSG_TAXIENABLEALLNODES: return BUILD5875_CMSG_TAXIENABLEALLNODES;
        case CMSG_TAXISHOWNODES: return BUILD5875_CMSG_TAXISHOWNODES;
        case SMSG_SHOWTAXINODES: return BUILD5875_SMSG_SHOWTAXINODES;
        case CMSG_TAXINODE_STATUS_QUERY: return BUILD5875_CMSG_TAXINODE_STATUS_QUERY;
        case SMSG_TAXINODE_STATUS: return BUILD5875_SMSG_TAXINODE_STATUS;
        case CMSG_TAXIQUERYAVAILABLENODES: return BUILD5875_CMSG_TAXIQUERYAVAILABLENODES;
        case CMSG_ACTIVATETAXI: return BUILD5875_CMSG_ACTIVATETAXI;
        case SMSG_ACTIVATETAXIREPLY: return BUILD5875_SMSG_ACTIVATETAXIREPLY;
        case SMSG_NEW_TAXI_PATH: return BUILD5875_SMSG_NEW_TAXI_PATH;
        case CMSG_TRAINER_LIST: return BUILD5875_CMSG_TRAINER_LIST;
        case SMSG_TRAINER_LIST: return BUILD5875_SMSG_TRAINER_LIST;
        case CMSG_TRAINER_BUY_SPELL: return BUILD5875_CMSG_TRAINER_BUY_SPELL;
        case SMSG_TRAINER_BUY_SUCCEEDED: return BUILD5875_SMSG_TRAINER_BUY_SUCCEEDED;
        case SMSG_TRAINER_BUY_FAILED: return BUILD5875_SMSG_TRAINER_BUY_FAILED; // uint64, uint32, uint32 (0...2);
        case CMSG_BINDER_ACTIVATE: return BUILD5875_CMSG_BINDER_ACTIVATE;
        case SMSG_PLAYERBINDERROR: return BUILD5875_SMSG_PLAYERBINDERROR;
        case CMSG_BANKER_ACTIVATE: return BUILD5875_CMSG_BANKER_ACTIVATE;
        case SMSG_SHOW_BANK: return BUILD5875_SMSG_SHOW_BANK;
        case CMSG_BUY_BANK_SLOT: return BUILD5875_CMSG_BUY_BANK_SLOT;
        case SMSG_BUY_BANK_SLOT_RESULT: return BUILD5875_SMSG_BUY_BANK_SLOT_RESULT;
        case CMSG_PETITION_SHOWLIST: return BUILD5875_CMSG_PETITION_SHOWLIST;
        case SMSG_PETITION_SHOWLIST: return BUILD5875_SMSG_PETITION_SHOWLIST;
        case CMSG_PETITION_BUY: return BUILD5875_CMSG_PETITION_BUY;
        case CMSG_PETITION_SHOW_SIGNATURES: return BUILD5875_CMSG_PETITION_SHOW_SIGNATURES;
        case SMSG_PETITION_SHOW_SIGNATURES: return BUILD5875_SMSG_PETITION_SHOW_SIGNATURES;
        case CMSG_PETITION_SIGN: return BUILD5875_CMSG_PETITION_SIGN;
        case SMSG_PETITION_SIGN_RESULTS: return BUILD5875_SMSG_PETITION_SIGN_RESULTS;
        case MSG_PETITION_DECLINE: return BUILD5875_MSG_PETITION_DECLINE;
        case CMSG_OFFER_PETITION: return BUILD5875_CMSG_OFFER_PETITION;
        case CMSG_TURN_IN_PETITION: return BUILD5875_CMSG_TURN_IN_PETITION;
        case SMSG_TURN_IN_PETITION_RESULTS: return BUILD5875_SMSG_TURN_IN_PETITION_RESULTS;
        case CMSG_PETITION_QUERY: return BUILD5875_CMSG_PETITION_QUERY;
        case SMSG_PETITION_QUERY_RESPONSE: return BUILD5875_SMSG_PETITION_QUERY_RESPONSE;
        case SMSG_FISH_NOT_HOOKED: return BUILD5875_SMSG_FISH_NOT_HOOKED;
        case SMSG_FISH_ESCAPED: return BUILD5875_SMSG_FISH_ESCAPED;
        case CMSG_BUG: return BUILD5875_CMSG_BUG;
        case SMSG_NOTIFICATION: return BUILD5875_SMSG_NOTIFICATION;
        case CMSG_PLAYED_TIME: return BUILD5875_CMSG_PLAYED_TIME;
        case SMSG_PLAYED_TIME: return BUILD5875_SMSG_PLAYED_TIME;
        case CMSG_QUERY_TIME: return BUILD5875_CMSG_QUERY_TIME;
        case SMSG_QUERY_TIME_RESPONSE: return BUILD5875_SMSG_QUERY_TIME_RESPONSE;
        case SMSG_LOG_XPGAIN: return BUILD5875_SMSG_LOG_XPGAIN;
        case SMSG_AURACASTLOG: return BUILD5875_SMSG_AURACASTLOG;
        case CMSG_RECLAIM_CORPSE: return BUILD5875_CMSG_RECLAIM_CORPSE;
        case CMSG_WRAP_ITEM: return BUILD5875_CMSG_WRAP_ITEM;
        case SMSG_LEVELUP_INFO: return BUILD5875_SMSG_LEVELUP_INFO;
        case MSG_MINIMAP_PING: return BUILD5875_MSG_MINIMAP_PING;
        case SMSG_RESISTLOG: return BUILD5875_SMSG_RESISTLOG;
        case SMSG_ENCHANTMENTLOG: return BUILD5875_SMSG_ENCHANTMENTLOG;
        case CMSG_SET_SKILL_CHEAT: return BUILD5875_CMSG_SET_SKILL_CHEAT;
        case SMSG_START_MIRROR_TIMER: return BUILD5875_SMSG_START_MIRROR_TIMER;
        case SMSG_PAUSE_MIRROR_TIMER: return BUILD5875_SMSG_PAUSE_MIRROR_TIMER;
        case SMSG_STOP_MIRROR_TIMER: return BUILD5875_SMSG_STOP_MIRROR_TIMER;
        case CMSG_PING: return BUILD5875_CMSG_PING;
        case SMSG_PONG: return BUILD5875_SMSG_PONG;
        case SMSG_CLEAR_COOLDOWN: return BUILD5875_SMSG_CLEAR_COOLDOWN;
        case SMSG_GAMEOBJECT_PAGETEXT: return BUILD5875_SMSG_GAMEOBJECT_PAGETEXT;
        case CMSG_SETSHEATHED: return BUILD5875_CMSG_SETSHEATHED;
        case SMSG_COOLDOWN_CHEAT: return BUILD5875_SMSG_COOLDOWN_CHEAT;
        case SMSG_SPELL_DELAYED: return BUILD5875_SMSG_SPELL_DELAYED;
        case CMSG_PLAYER_MACRO_OBSOLETE: return BUILD5875_CMSG_PLAYER_MACRO_OBSOLETE;
        case SMSG_PLAYER_MACRO_OBSOLETE: return BUILD5875_SMSG_PLAYER_MACRO_OBSOLETE;
        case CMSG_GHOST: return BUILD5875_CMSG_GHOST;
        case CMSG_GM_INVIS: return BUILD5875_CMSG_GM_INVIS;
        case SMSG_INVALID_PROMOTION_CODE: return BUILD5875_SMSG_INVALID_PROMOTION_CODE;
        case MSG_GM_BIND_OTHER: return BUILD5875_MSG_GM_BIND_OTHER;
        case MSG_GM_SUMMON: return BUILD5875_MSG_GM_SUMMON;
        case SMSG_ITEM_TIME_UPDATE: return BUILD5875_SMSG_ITEM_TIME_UPDATE;
        case SMSG_ITEM_ENCHANT_TIME_UPDATE: return BUILD5875_SMSG_ITEM_ENCHANT_TIME_UPDATE;
        case SMSG_AUTH_CHALLENGE: return BUILD5875_SMSG_AUTH_CHALLENGE;
        case CMSG_AUTH_SESSION: return BUILD5875_CMSG_AUTH_SESSION;
        case SMSG_AUTH_RESPONSE: return BUILD5875_SMSG_AUTH_RESPONSE;
        case MSG_GM_SHOWLABEL: return BUILD5875_MSG_GM_SHOWLABEL;
        case CMSG_PET_CAST_SPELL: return BUILD5875_CMSG_PET_CAST_SPELL;
        case MSG_SAVE_GUILD_EMBLEM: return BUILD5875_MSG_SAVE_GUILD_EMBLEM;
        case MSG_TABARDVENDOR_ACTIVATE: return BUILD5875_MSG_TABARDVENDOR_ACTIVATE;
        case SMSG_PLAY_SPELL_VISUAL: return BUILD5875_SMSG_PLAY_SPELL_VISUAL;
        case CMSG_ZONEUPDATE: return BUILD5875_CMSG_ZONEUPDATE;
        case SMSG_PARTYKILLLOG: return BUILD5875_SMSG_PARTYKILLLOG;
        case SMSG_COMPRESSED_UPDATE_OBJECT: return BUILD5875_SMSG_COMPRESSED_UPDATE_OBJECT;
        case SMSG_PLAY_SPELL_IMPACT: return BUILD5875_SMSG_PLAY_SPELL_IMPACT;
        case SMSG_EXPLORATION_EXPERIENCE: return BUILD5875_SMSG_EXPLORATION_EXPERIENCE;
        case CMSG_GM_SET_SECURITY_GROUP: return BUILD5875_CMSG_GM_SET_SECURITY_GROUP;
        case CMSG_GM_NUKE: return BUILD5875_CMSG_GM_NUKE;
        case MSG_RANDOM_ROLL: return BUILD5875_MSG_RANDOM_ROLL;
        case SMSG_ENVIRONMENTALDAMAGELOG: return BUILD5875_SMSG_ENVIRONMENTALDAMAGELOG;
        case CMSG_RWHOIS_OBSOLETE: return BUILD5875_CMSG_RWHOIS_OBSOLETE;
        case SMSG_RWHOIS: return BUILD5875_SMSG_RWHOIS;
        case MSG_LOOKING_FOR_GROUP: return BUILD5875_MSG_LOOKING_FOR_GROUP;
        case CMSG_SET_LOOKING_FOR_GROUP: return BUILD5875_CMSG_SET_LOOKING_FOR_GROUP;
        case CMSG_UNLEARN_SPELL: return BUILD5875_CMSG_UNLEARN_SPELL;
        case CMSG_UNLEARN_SKILL: return BUILD5875_CMSG_UNLEARN_SKILL;
        case SMSG_REMOVED_SPELL: return BUILD5875_SMSG_REMOVED_SPELL;
        case CMSG_DECHARGE: return BUILD5875_CMSG_DECHARGE;
        case CMSG_GMTICKET_CREATE: return BUILD5875_CMSG_GMTICKET_CREATE;
        case SMSG_GMTICKET_CREATE: return BUILD5875_SMSG_GMTICKET_CREATE;
        case CMSG_GMTICKET_UPDATETEXT: return BUILD5875_CMSG_GMTICKET_UPDATETEXT;
        case SMSG_GMTICKET_UPDATETEXT: return BUILD5875_SMSG_GMTICKET_UPDATETEXT;
        case SMSG_ACCOUNT_DATA_TIMES: return BUILD5875_SMSG_ACCOUNT_DATA_TIMES;
        case CMSG_REQUEST_ACCOUNT_DATA: return BUILD5875_CMSG_REQUEST_ACCOUNT_DATA;
        case CMSG_UPDATE_ACCOUNT_DATA: return BUILD5875_CMSG_UPDATE_ACCOUNT_DATA;
        case SMSG_UPDATE_ACCOUNT_DATA: return BUILD5875_SMSG_UPDATE_ACCOUNT_DATA;
        case SMSG_CLEAR_FAR_SIGHT_IMMEDIATE: return BUILD5875_SMSG_CLEAR_FAR_SIGHT_IMMEDIATE;
        case SMSG_POWERGAINLOG_OBSOLETE: return BUILD5875_SMSG_POWERGAINLOG_OBSOLETE;
        case CMSG_GM_TEACH: return BUILD5875_CMSG_GM_TEACH;
        case CMSG_GM_CREATE_ITEM_TARGET: return BUILD5875_CMSG_GM_CREATE_ITEM_TARGET;
        case CMSG_GMTICKET_GETTICKET: return BUILD5875_CMSG_GMTICKET_GETTICKET;
        case SMSG_GMTICKET_GETTICKET: return BUILD5875_SMSG_GMTICKET_GETTICKET;
        case CMSG_UNLEARN_TALENTS: return BUILD5875_CMSG_UNLEARN_TALENTS;
        case SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE: return BUILD5875_SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE;
        case SMSG_GAMEOBJECT_DESPAWN_ANIM: return BUILD5875_SMSG_GAMEOBJECT_DESPAWN_ANIM;
        case MSG_CORPSE_QUERY: return BUILD5875_MSG_CORPSE_QUERY;
        case CMSG_GMTICKET_DELETETICKET: return BUILD5875_CMSG_GMTICKET_DELETETICKET;
        case SMSG_GMTICKET_DELETETICKET: return BUILD5875_SMSG_GMTICKET_DELETETICKET;
        case SMSG_CHAT_WRONG_FACTION: return BUILD5875_SMSG_CHAT_WRONG_FACTION;
        case CMSG_GMTICKET_SYSTEMSTATUS: return BUILD5875_CMSG_GMTICKET_SYSTEMSTATUS;
        case SMSG_GMTICKET_SYSTEMSTATUS: return BUILD5875_SMSG_GMTICKET_SYSTEMSTATUS;
        case CMSG_SPIRIT_HEALER_ACTIVATE: return BUILD5875_CMSG_SPIRIT_HEALER_ACTIVATE;
        case CMSG_SET_STAT_CHEAT: return BUILD5875_CMSG_SET_STAT_CHEAT;
        case SMSG_SET_REST_START: return BUILD5875_SMSG_SET_REST_START;
        case CMSG_SKILL_BUY_STEP: return BUILD5875_CMSG_SKILL_BUY_STEP;
        case CMSG_SKILL_BUY_RANK: return BUILD5875_CMSG_SKILL_BUY_RANK;
        case CMSG_XP_CHEAT: return BUILD5875_CMSG_XP_CHEAT;
        case SMSG_SPIRIT_HEALER_CONFIRM: return BUILD5875_SMSG_SPIRIT_HEALER_CONFIRM;
        case CMSG_CHARACTER_POINT_CHEAT: return BUILD5875_CMSG_CHARACTER_POINT_CHEAT;
        case SMSG_GOSSIP_POI: return BUILD5875_SMSG_GOSSIP_POI;
        case CMSG_CHAT_IGNORED: return BUILD5875_CMSG_CHAT_IGNORED;
        case CMSG_GM_VISION: return BUILD5875_CMSG_GM_VISION;
        case CMSG_SERVER_COMMAND: return BUILD5875_CMSG_SERVER_COMMAND;
        case CMSG_GM_SILENCE: return BUILD5875_CMSG_GM_SILENCE;
        case CMSG_GM_REVEALTO: return BUILD5875_CMSG_GM_REVEALTO;
        case CMSG_GM_RESURRECT: return BUILD5875_CMSG_GM_RESURRECT;
        case CMSG_GM_SUMMONMOB: return BUILD5875_CMSG_GM_SUMMONMOB;
        case CMSG_GM_MOVECORPSE: return BUILD5875_CMSG_GM_MOVECORPSE;
        case CMSG_GM_FREEZE: return BUILD5875_CMSG_GM_FREEZE;
        case CMSG_GM_UBERINVIS: return BUILD5875_CMSG_GM_UBERINVIS;
        case CMSG_GM_REQUEST_PLAYER_INFO: return BUILD5875_CMSG_GM_REQUEST_PLAYER_INFO;
        case SMSG_GM_PLAYER_INFO: return BUILD5875_SMSG_GM_PLAYER_INFO;
        case CMSG_GUILD_RANK: return BUILD5875_CMSG_GUILD_RANK;
        case CMSG_GUILD_ADD_RANK: return BUILD5875_CMSG_GUILD_ADD_RANK;
        case CMSG_GUILD_DEL_RANK: return BUILD5875_CMSG_GUILD_DEL_RANK;
        case CMSG_GUILD_SET_PUBLIC_NOTE: return BUILD5875_CMSG_GUILD_SET_PUBLIC_NOTE;
        case CMSG_GUILD_SET_OFFICER_NOTE: return BUILD5875_CMSG_GUILD_SET_OFFICER_NOTE;
        case SMSG_LOGIN_VERIFY_WORLD: return BUILD5875_SMSG_LOGIN_VERIFY_WORLD;
        case CMSG_CLEAR_EXPLORATION: return BUILD5875_CMSG_CLEAR_EXPLORATION;
        case CMSG_SEND_MAIL: return BUILD5875_CMSG_SEND_MAIL;
        case SMSG_SEND_MAIL_RESULT: return BUILD5875_SMSG_SEND_MAIL_RESULT;
        case CMSG_GET_MAIL_LIST: return BUILD5875_CMSG_GET_MAIL_LIST;
        case SMSG_MAIL_LIST_RESULT: return BUILD5875_SMSG_MAIL_LIST_RESULT;
        case CMSG_BATTLEFIELD_LIST: return BUILD5875_CMSG_BATTLEFIELD_LIST;
        case SMSG_BATTLEFIELD_LIST: return BUILD5875_SMSG_BATTLEFIELD_LIST;
        case CMSG_BATTLEFIELD_JOIN: return BUILD5875_CMSG_BATTLEFIELD_JOIN;
        case SMSG_BATTLEFIELD_WIN_OBSOLETE: return BUILD5875_SMSG_BATTLEFIELD_WIN_OBSOLETE;
        case SMSG_BATTLEFIELD_LOSE_OBSOLETE: return BUILD5875_SMSG_BATTLEFIELD_LOSE_OBSOLETE;
        case CMSG_TAXICLEARNODE: return BUILD5875_CMSG_TAXICLEARNODE;
        case CMSG_TAXIENABLENODE: return BUILD5875_CMSG_TAXIENABLENODE;
        case CMSG_ITEM_TEXT_QUERY: return BUILD5875_CMSG_ITEM_TEXT_QUERY;
        case SMSG_ITEM_TEXT_QUERY_RESPONSE: return BUILD5875_SMSG_ITEM_TEXT_QUERY_RESPONSE;
        case CMSG_MAIL_TAKE_MONEY: return BUILD5875_CMSG_MAIL_TAKE_MONEY;
        case CMSG_MAIL_TAKE_ITEM: return BUILD5875_CMSG_MAIL_TAKE_ITEM;
        case CMSG_MAIL_MARK_AS_READ: return BUILD5875_CMSG_MAIL_MARK_AS_READ;
        case CMSG_MAIL_RETURN_TO_SENDER: return BUILD5875_CMSG_MAIL_RETURN_TO_SENDER;
        case CMSG_MAIL_DELETE: return BUILD5875_CMSG_MAIL_DELETE;
        case CMSG_MAIL_CREATE_TEXT_ITEM: return BUILD5875_CMSG_MAIL_CREATE_TEXT_ITEM;
        case SMSG_SPELLLOGMISS: return BUILD5875_SMSG_SPELLLOGMISS;
        case SMSG_SPELLLOGEXECUTE: return BUILD5875_SMSG_SPELLLOGEXECUTE;
        case SMSG_DEBUGAURAPROC: return BUILD5875_SMSG_DEBUGAURAPROC;
        case SMSG_PERIODICAURALOG: return BUILD5875_SMSG_PERIODICAURALOG;
        case SMSG_SPELLDAMAGESHIELD: return BUILD5875_SMSG_SPELLDAMAGESHIELD;
        case SMSG_SPELLNONMELEEDAMAGELOG: return BUILD5875_SMSG_SPELLNONMELEEDAMAGELOG;
        case CMSG_LEARN_TALENT: return BUILD5875_CMSG_LEARN_TALENT;
        case SMSG_RESURRECT_FAILED: return BUILD5875_SMSG_RESURRECT_FAILED;
        case CMSG_TOGGLE_PVP: return BUILD5875_CMSG_TOGGLE_PVP;
        case SMSG_ZONE_UNDER_ATTACK: return BUILD5875_SMSG_ZONE_UNDER_ATTACK;
        case MSG_AUCTION_HELLO: return BUILD5875_MSG_AUCTION_HELLO;
        case CMSG_AUCTION_SELL_ITEM: return BUILD5875_CMSG_AUCTION_SELL_ITEM;
        case CMSG_AUCTION_REMOVE_ITEM: return BUILD5875_CMSG_AUCTION_REMOVE_ITEM;
        case CMSG_AUCTION_LIST_ITEMS: return BUILD5875_CMSG_AUCTION_LIST_ITEMS;
        case CMSG_AUCTION_LIST_OWNER_ITEMS: return BUILD5875_CMSG_AUCTION_LIST_OWNER_ITEMS;
        case CMSG_AUCTION_PLACE_BID: return BUILD5875_CMSG_AUCTION_PLACE_BID;
        case SMSG_AUCTION_COMMAND_RESULT: return BUILD5875_SMSG_AUCTION_COMMAND_RESULT;
        case SMSG_AUCTION_LIST_RESULT: return BUILD5875_SMSG_AUCTION_LIST_RESULT;
        case SMSG_AUCTION_OWNER_LIST_RESULT: return BUILD5875_SMSG_AUCTION_OWNER_LIST_RESULT;
        case SMSG_AUCTION_BIDDER_NOTIFICATION: return BUILD5875_SMSG_AUCTION_BIDDER_NOTIFICATION;
        case SMSG_AUCTION_OWNER_NOTIFICATION: return BUILD5875_SMSG_AUCTION_OWNER_NOTIFICATION;
        case SMSG_PROCRESIST: return BUILD5875_SMSG_PROCRESIST;
        case SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE: return BUILD5875_SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE;
        case SMSG_DISPEL_FAILED: return BUILD5875_SMSG_DISPEL_FAILED;
        case SMSG_SPELLORDAMAGE_IMMUNE: return BUILD5875_SMSG_SPELLORDAMAGE_IMMUNE;
        case CMSG_AUCTION_LIST_BIDDER_ITEMS: return BUILD5875_CMSG_AUCTION_LIST_BIDDER_ITEMS;
        case SMSG_AUCTION_BIDDER_LIST_RESULT: return BUILD5875_SMSG_AUCTION_BIDDER_LIST_RESULT;
        case SMSG_SET_FLAT_SPELL_MODIFIER: return BUILD5875_SMSG_SET_FLAT_SPELL_MODIFIER;
        case SMSG_SET_PCT_SPELL_MODIFIER: return BUILD5875_SMSG_SET_PCT_SPELL_MODIFIER;
        case CMSG_SET_AMMO: return BUILD5875_CMSG_SET_AMMO;
        case SMSG_CORPSE_RECLAIM_DELAY: return BUILD5875_SMSG_CORPSE_RECLAIM_DELAY;
        case CMSG_SET_ACTIVE_MOVER: return BUILD5875_CMSG_SET_ACTIVE_MOVER;
        case CMSG_PET_CANCEL_AURA: return BUILD5875_CMSG_PET_CANCEL_AURA;
        case CMSG_PLAYER_AI_CHEAT: return BUILD5875_CMSG_PLAYER_AI_CHEAT;
        case CMSG_CANCEL_AUTO_REPEAT_SPELL: return BUILD5875_CMSG_CANCEL_AUTO_REPEAT_SPELL;
        case MSG_GM_ACCOUNT_ONLINE: return BUILD5875_MSG_GM_ACCOUNT_ONLINE;
        case MSG_LIST_STABLED_PETS: return BUILD5875_MSG_LIST_STABLED_PETS;
        case CMSG_STABLE_PET: return BUILD5875_CMSG_STABLE_PET;
        case CMSG_UNSTABLE_PET: return BUILD5875_CMSG_UNSTABLE_PET;
        case CMSG_BUY_STABLE_SLOT: return BUILD5875_CMSG_BUY_STABLE_SLOT;
        case SMSG_STABLE_RESULT: return BUILD5875_SMSG_STABLE_RESULT;
        case CMSG_STABLE_REVIVE_PET: return BUILD5875_CMSG_STABLE_REVIVE_PET;
        case CMSG_STABLE_SWAP_PET: return BUILD5875_CMSG_STABLE_SWAP_PET;
        case MSG_QUEST_PUSH_RESULT: return BUILD5875_MSG_QUEST_PUSH_RESULT;
        case SMSG_PLAY_MUSIC: return BUILD5875_SMSG_PLAY_MUSIC;
        case SMSG_PLAY_OBJECT_SOUND: return BUILD5875_SMSG_PLAY_OBJECT_SOUND;
        case CMSG_REQUEST_PET_INFO: return BUILD5875_CMSG_REQUEST_PET_INFO;
        case CMSG_FAR_SIGHT: return BUILD5875_CMSG_FAR_SIGHT;
        case SMSG_SPELLDISPELLOG: return BUILD5875_SMSG_SPELLDISPELLOG;
        case SMSG_DAMAGE_CALC_LOG: return BUILD5875_SMSG_DAMAGE_CALC_LOG;
        case CMSG_ENABLE_DAMAGE_LOG: return BUILD5875_CMSG_ENABLE_DAMAGE_LOG;
        case CMSG_GROUP_CHANGE_SUB_GROUP: return BUILD5875_CMSG_GROUP_CHANGE_SUB_GROUP;
        case CMSG_REQUEST_PARTY_MEMBER_STATS: return BUILD5875_CMSG_REQUEST_PARTY_MEMBER_STATS;
        case CMSG_GROUP_SWAP_SUB_GROUP: return BUILD5875_CMSG_GROUP_SWAP_SUB_GROUP;
        case CMSG_RESET_FACTION_CHEAT: return BUILD5875_CMSG_RESET_FACTION_CHEAT;
        case CMSG_AUTOSTORE_BANK_ITEM: return BUILD5875_CMSG_AUTOSTORE_BANK_ITEM;
        case CMSG_AUTOBANK_ITEM: return BUILD5875_CMSG_AUTOBANK_ITEM;
        case MSG_QUERY_NEXT_MAIL_TIME: return BUILD5875_MSG_QUERY_NEXT_MAIL_TIME;
        case SMSG_RECEIVED_MAIL: return BUILD5875_SMSG_RECEIVED_MAIL;
        case SMSG_RAID_GROUP_ONLY: return BUILD5875_SMSG_RAID_GROUP_ONLY;
        case CMSG_SET_DURABILITY_CHEAT: return BUILD5875_CMSG_SET_DURABILITY_CHEAT;
        case CMSG_SET_PVP_RANK_CHEAT: return BUILD5875_CMSG_SET_PVP_RANK_CHEAT;
        case CMSG_ADD_PVP_MEDAL_CHEAT: return BUILD5875_CMSG_ADD_PVP_MEDAL_CHEAT;
        case CMSG_DEL_PVP_MEDAL_CHEAT: return BUILD5875_CMSG_DEL_PVP_MEDAL_CHEAT;
        case CMSG_SET_PVP_TITLE: return BUILD5875_CMSG_SET_PVP_TITLE;
        case SMSG_PVP_CREDIT: return BUILD5875_SMSG_PVP_CREDIT;
        case SMSG_AUCTION_REMOVED_NOTIFICATION: return BUILD5875_SMSG_AUCTION_REMOVED_NOTIFICATION;
        case CMSG_GROUP_RAID_CONVERT: return BUILD5875_CMSG_GROUP_RAID_CONVERT;
        case CMSG_GROUP_ASSISTANT_LEADER: return BUILD5875_CMSG_GROUP_ASSISTANT_LEADER;
        case CMSG_BUYBACK_ITEM: return BUILD5875_CMSG_BUYBACK_ITEM;
        case SMSG_SERVER_MESSAGE: return BUILD5875_SMSG_SERVER_MESSAGE;
        case CMSG_MEETINGSTONE_JOIN: return BUILD5875_CMSG_MEETINGSTONE_JOIN; // lua: SetSavedInstanceExtend;
        case CMSG_MEETINGSTONE_LEAVE: return BUILD5875_CMSG_MEETINGSTONE_LEAVE;
        case CMSG_MEETINGSTONE_CHEAT: return BUILD5875_CMSG_MEETINGSTONE_CHEAT;
        case SMSG_MEETINGSTONE_SETQUEUE: return BUILD5875_SMSG_MEETINGSTONE_SETQUEUE;
        case CMSG_MEETINGSTONE_INFO: return BUILD5875_CMSG_MEETINGSTONE_INFO;
        case SMSG_MEETINGSTONE_COMPLETE: return BUILD5875_SMSG_MEETINGSTONE_COMPLETE;
        case SMSG_MEETINGSTONE_IN_PROGRESS: return BUILD5875_SMSG_MEETINGSTONE_IN_PROGRESS;
        case SMSG_MEETINGSTONE_MEMBER_ADDED: return BUILD5875_SMSG_MEETINGSTONE_MEMBER_ADDED;
        case CMSG_GMTICKETSYSTEM_TOGGLE: return BUILD5875_CMSG_GMTICKETSYSTEM_TOGGLE;
        case CMSG_CANCEL_GROWTH_AURA: return BUILD5875_CMSG_CANCEL_GROWTH_AURA;
        case SMSG_CANCEL_AUTO_REPEAT: return BUILD5875_SMSG_CANCEL_AUTO_REPEAT;
        case SMSG_STANDSTATE_UPDATE: return BUILD5875_SMSG_STANDSTATE_UPDATE;
        case SMSG_LOOT_ALL_PASSED: return BUILD5875_SMSG_LOOT_ALL_PASSED;
        case SMSG_LOOT_ROLL_WON: return BUILD5875_SMSG_LOOT_ROLL_WON;
        case CMSG_LOOT_ROLL: return BUILD5875_CMSG_LOOT_ROLL;
        case SMSG_LOOT_START_ROLL: return BUILD5875_SMSG_LOOT_START_ROLL;
        case SMSG_LOOT_ROLL: return BUILD5875_SMSG_LOOT_ROLL;
        case CMSG_LOOT_MASTER_GIVE: return BUILD5875_CMSG_LOOT_MASTER_GIVE;
        case SMSG_LOOT_MASTER_LIST: return BUILD5875_SMSG_LOOT_MASTER_LIST;
        case SMSG_SET_FORCED_REACTIONS: return BUILD5875_SMSG_SET_FORCED_REACTIONS;
        case SMSG_SPELL_FAILED_OTHER: return BUILD5875_SMSG_SPELL_FAILED_OTHER;
        case SMSG_GAMEOBJECT_RESET_STATE: return BUILD5875_SMSG_GAMEOBJECT_RESET_STATE;
        case CMSG_REPAIR_ITEM: return BUILD5875_CMSG_REPAIR_ITEM;
        case SMSG_CHAT_PLAYER_NOT_FOUND: return BUILD5875_SMSG_CHAT_PLAYER_NOT_FOUND;
        case MSG_TALENT_WIPE_CONFIRM: return BUILD5875_MSG_TALENT_WIPE_CONFIRM;
        case SMSG_SUMMON_REQUEST: return BUILD5875_SMSG_SUMMON_REQUEST;
        case CMSG_SUMMON_RESPONSE: return BUILD5875_CMSG_SUMMON_RESPONSE;
        case MSG_MOVE_TOGGLE_GRAVITY_CHEAT: return BUILD5875_MSG_MOVE_TOGGLE_GRAVITY_CHEAT;
        case SMSG_MONSTER_MOVE_TRANSPORT: return BUILD5875_SMSG_MONSTER_MOVE_TRANSPORT;
        case SMSG_PET_BROKEN: return BUILD5875_SMSG_PET_BROKEN;
        case MSG_MOVE_FEATHER_FALL: return BUILD5875_MSG_MOVE_FEATHER_FALL;
        case MSG_MOVE_WATER_WALK: return BUILD5875_MSG_MOVE_WATER_WALK;
        case CMSG_SERVER_BROADCAST: return BUILD5875_CMSG_SERVER_BROADCAST;
        case CMSG_SELF_RES: return BUILD5875_CMSG_SELF_RES;
        case SMSG_FEIGN_DEATH_RESISTED: return BUILD5875_SMSG_FEIGN_DEATH_RESISTED;
        case CMSG_RUN_SCRIPT: return BUILD5875_CMSG_RUN_SCRIPT;
        case SMSG_SCRIPT_MESSAGE: return BUILD5875_SMSG_SCRIPT_MESSAGE;
        case SMSG_DUEL_COUNTDOWN: return BUILD5875_SMSG_DUEL_COUNTDOWN;
        case SMSG_AREA_TRIGGER_MESSAGE: return BUILD5875_SMSG_AREA_TRIGGER_MESSAGE;
        case CMSG_TOGGLE_HELM: return BUILD5875_CMSG_TOGGLE_HELM;
        case CMSG_TOGGLE_CLOAK: return BUILD5875_CMSG_TOGGLE_CLOAK;
        case SMSG_MEETINGSTONE_JOINFAILED: return BUILD5875_SMSG_MEETINGSTONE_JOINFAILED;
        case SMSG_PLAYER_SKINNED: return BUILD5875_SMSG_PLAYER_SKINNED;
        case SMSG_DURABILITY_DAMAGE_DEATH: return BUILD5875_SMSG_DURABILITY_DAMAGE_DEATH;
        case CMSG_SET_EXPLORATION: return BUILD5875_CMSG_SET_EXPLORATION;
        case CMSG_SET_ACTIONBAR_TOGGLES: return BUILD5875_CMSG_SET_ACTIONBAR_TOGGLES;
        case UMSG_DELETE_GUILD_CHARTER: return BUILD5875_UMSG_DELETE_GUILD_CHARTER;
        case MSG_PETITION_RENAME: return BUILD5875_MSG_PETITION_RENAME;
        case SMSG_INIT_WORLD_STATES: return BUILD5875_SMSG_INIT_WORLD_STATES;
        case SMSG_UPDATE_WORLD_STATE: return BUILD5875_SMSG_UPDATE_WORLD_STATE;
        case CMSG_ITEM_NAME_QUERY: return BUILD5875_CMSG_ITEM_NAME_QUERY;
        case SMSG_ITEM_NAME_QUERY_RESPONSE: return BUILD5875_SMSG_ITEM_NAME_QUERY_RESPONSE;
        case SMSG_PET_ACTION_FEEDBACK: return BUILD5875_SMSG_PET_ACTION_FEEDBACK;
        case CMSG_CHAR_RENAME: return BUILD5875_CMSG_CHAR_RENAME;
        case SMSG_CHAR_RENAME: return BUILD5875_SMSG_CHAR_RENAME;
        case CMSG_MOVE_SPLINE_DONE: return BUILD5875_CMSG_MOVE_SPLINE_DONE;
        case CMSG_MOVE_FALL_RESET: return BUILD5875_CMSG_MOVE_FALL_RESET;
        case SMSG_INSTANCE_SAVE_CREATED: return BUILD5875_SMSG_INSTANCE_SAVE_CREATED;
        case SMSG_RAID_INSTANCE_INFO: return BUILD5875_SMSG_RAID_INSTANCE_INFO;
        case CMSG_REQUEST_RAID_INFO: return BUILD5875_CMSG_REQUEST_RAID_INFO;
        case CMSG_MOVE_TIME_SKIPPED: return BUILD5875_CMSG_MOVE_TIME_SKIPPED;
        case CMSG_MOVE_FEATHER_FALL_ACK: return BUILD5875_CMSG_MOVE_FEATHER_FALL_ACK;
        case CMSG_MOVE_WATER_WALK_ACK: return BUILD5875_CMSG_MOVE_WATER_WALK_ACK;
        case CMSG_MOVE_NOT_ACTIVE_MOVER: return BUILD5875_CMSG_MOVE_NOT_ACTIVE_MOVER;
        case SMSG_PLAY_SOUND: return BUILD5875_SMSG_PLAY_SOUND;
        case CMSG_BATTLEFIELD_STATUS: return BUILD5875_CMSG_BATTLEFIELD_STATUS;
        case SMSG_BATTLEFIELD_STATUS: return BUILD5875_SMSG_BATTLEFIELD_STATUS;
        case CMSG_BATTLEFIELD_PORT: return BUILD5875_CMSG_BATTLEFIELD_PORT;
        case MSG_INSPECT_HONOR_STATS: return BUILD5875_MSG_INSPECT_HONOR_STATS;
        case CMSG_BATTLEMASTER_HELLO: return BUILD5875_CMSG_BATTLEMASTER_HELLO;
        case CMSG_MOVE_START_SWIM_CHEAT: return BUILD5875_CMSG_MOVE_START_SWIM_CHEAT;
        case CMSG_MOVE_STOP_SWIM_CHEAT: return BUILD5875_CMSG_MOVE_STOP_SWIM_CHEAT;
        case SMSG_FORCE_WALK_SPEED_CHANGE: return BUILD5875_SMSG_FORCE_WALK_SPEED_CHANGE;
        case CMSG_FORCE_WALK_SPEED_CHANGE_ACK: return BUILD5875_CMSG_FORCE_WALK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_SWIM_BACK_SPEED_CHANGE: return BUILD5875_SMSG_FORCE_SWIM_BACK_SPEED_CHANGE;
        case CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK: return BUILD5875_CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_TURN_RATE_CHANGE: return BUILD5875_SMSG_FORCE_TURN_RATE_CHANGE;
        case CMSG_FORCE_TURN_RATE_CHANGE_ACK: return BUILD5875_CMSG_FORCE_TURN_RATE_CHANGE_ACK;
        case MSG_PVP_LOG_DATA: return BUILD5875_MSG_PVP_LOG_DATA;
        case CMSG_LEAVE_BATTLEFIELD: return BUILD5875_CMSG_LEAVE_BATTLEFIELD;
        case CMSG_AREA_SPIRIT_HEALER_QUERY: return BUILD5875_CMSG_AREA_SPIRIT_HEALER_QUERY;
        case CMSG_AREA_SPIRIT_HEALER_QUEUE: return BUILD5875_CMSG_AREA_SPIRIT_HEALER_QUEUE;
        case SMSG_AREA_SPIRIT_HEALER_TIME: return BUILD5875_SMSG_AREA_SPIRIT_HEALER_TIME;
        case CMSG_GM_UNTEACH: return BUILD5875_CMSG_GM_UNTEACH;
        case SMSG_WARDEN_DATA: return BUILD5875_SMSG_WARDEN_DATA;
        case CMSG_WARDEN_DATA: return BUILD5875_CMSG_WARDEN_DATA;
        case SMSG_GROUP_JOINED_BATTLEGROUND: return BUILD5875_SMSG_GROUP_JOINED_BATTLEGROUND;
        case MSG_BATTLEGROUND_PLAYER_POSITIONS: return BUILD5875_MSG_BATTLEGROUND_PLAYER_POSITIONS;
        case CMSG_PET_STOP_ATTACK: return BUILD5875_CMSG_PET_STOP_ATTACK;
        case SMSG_BINDER_CONFIRM: return BUILD5875_SMSG_BINDER_CONFIRM;
        case SMSG_BATTLEGROUND_PLAYER_JOINED: return BUILD5875_SMSG_BATTLEGROUND_PLAYER_JOINED;
        case SMSG_BATTLEGROUND_PLAYER_LEFT: return BUILD5875_SMSG_BATTLEGROUND_PLAYER_LEFT;
        case CMSG_BATTLEMASTER_JOIN: return BUILD5875_CMSG_BATTLEMASTER_JOIN;
        case SMSG_ADDON_INFO: return BUILD5875_SMSG_ADDON_INFO;
        case CMSG_PET_UNLEARN: return BUILD5875_CMSG_PET_UNLEARN;
        case SMSG_PET_UNLEARN_CONFIRM: return BUILD5875_SMSG_PET_UNLEARN_CONFIRM;
        case SMSG_PARTY_MEMBER_STATS_FULL: return BUILD5875_SMSG_PARTY_MEMBER_STATS_FULL;
        case CMSG_PET_SPELL_AUTOCAST: return BUILD5875_CMSG_PET_SPELL_AUTOCAST;
        case SMSG_WEATHER: return BUILD5875_SMSG_WEATHER;
        case SMSG_PLAY_TIME_WARNING: return BUILD5875_SMSG_PLAY_TIME_WARNING;
        case SMSG_MINIGAME_SETUP: return BUILD5875_SMSG_MINIGAME_SETUP;
        case SMSG_MINIGAME_STATE: return BUILD5875_SMSG_MINIGAME_STATE;
        case CMSG_MINIGAME_MOVE: return BUILD5875_CMSG_MINIGAME_MOVE;
        case SMSG_MINIGAME_MOVE_FAILED: return BUILD5875_SMSG_MINIGAME_MOVE_FAILED;
        case SMSG_RAID_INSTANCE_MESSAGE: return BUILD5875_SMSG_RAID_INSTANCE_MESSAGE;
        case SMSG_COMPRESSED_MOVES: return BUILD5875_SMSG_COMPRESSED_MOVES;
        case CMSG_GUILD_INFO_TEXT: return BUILD5875_CMSG_GUILD_INFO_TEXT;
        case SMSG_CHAT_RESTRICTED: return BUILD5875_SMSG_CHAT_RESTRICTED;
        case SMSG_SPLINE_SET_RUN_SPEED: return BUILD5875_SMSG_SPLINE_SET_RUN_SPEED;
        case SMSG_SPLINE_SET_RUN_BACK_SPEED: return BUILD5875_SMSG_SPLINE_SET_RUN_BACK_SPEED;
        case SMSG_SPLINE_SET_SWIM_SPEED: return BUILD5875_SMSG_SPLINE_SET_SWIM_SPEED;
        case SMSG_SPLINE_SET_WALK_SPEED: return BUILD5875_SMSG_SPLINE_SET_WALK_SPEED;
        case SMSG_SPLINE_SET_SWIM_BACK_SPEED: return BUILD5875_SMSG_SPLINE_SET_SWIM_BACK_SPEED;
        case SMSG_SPLINE_SET_TURN_RATE: return BUILD5875_SMSG_SPLINE_SET_TURN_RATE;
        case SMSG_SPLINE_MOVE_UNROOT: return BUILD5875_SMSG_SPLINE_MOVE_UNROOT;
        case SMSG_SPLINE_MOVE_FEATHER_FALL: return BUILD5875_SMSG_SPLINE_MOVE_FEATHER_FALL;
        case SMSG_SPLINE_MOVE_NORMAL_FALL: return BUILD5875_SMSG_SPLINE_MOVE_NORMAL_FALL;
        case SMSG_SPLINE_MOVE_SET_HOVER: return BUILD5875_SMSG_SPLINE_MOVE_SET_HOVER;
        case SMSG_SPLINE_MOVE_UNSET_HOVER: return BUILD5875_SMSG_SPLINE_MOVE_UNSET_HOVER;
        case SMSG_SPLINE_MOVE_WATER_WALK: return BUILD5875_SMSG_SPLINE_MOVE_WATER_WALK;
        case SMSG_SPLINE_MOVE_LAND_WALK: return BUILD5875_SMSG_SPLINE_MOVE_LAND_WALK;
        case SMSG_SPLINE_MOVE_START_SWIM: return BUILD5875_SMSG_SPLINE_MOVE_START_SWIM;
        case SMSG_SPLINE_MOVE_STOP_SWIM: return BUILD5875_SMSG_SPLINE_MOVE_STOP_SWIM;
        case SMSG_SPLINE_MOVE_SET_RUN_MODE: return BUILD5875_SMSG_SPLINE_MOVE_SET_RUN_MODE;
        case SMSG_SPLINE_MOVE_SET_WALK_MODE: return BUILD5875_SMSG_SPLINE_MOVE_SET_WALK_MODE;
        case CMSG_GM_NUKE_ACCOUNT: return BUILD5875_CMSG_GM_NUKE_ACCOUNT;
        case MSG_GM_DESTROY_CORPSE: return BUILD5875_MSG_GM_DESTROY_CORPSE;
        case CMSG_GM_DESTROY_ONLINE_CORPSE: return BUILD5875_CMSG_GM_DESTROY_ONLINE_CORPSE;
        case CMSG_ACTIVATETAXIEXPRESS: return BUILD5875_CMSG_ACTIVATETAXIEXPRESS;
        case SMSG_SET_FACTION_ATWAR: return BUILD5875_SMSG_SET_FACTION_ATWAR;
        case SMSG_GAMETIMEBIAS_SET: return BUILD5875_SMSG_GAMETIMEBIAS_SET;
        case CMSG_DEBUG_ACTIONS_START: return BUILD5875_CMSG_DEBUG_ACTIONS_START;
        case CMSG_DEBUG_ACTIONS_STOP: return BUILD5875_CMSG_DEBUG_ACTIONS_STOP;
        case CMSG_SET_FACTION_INACTIVE: return BUILD5875_CMSG_SET_FACTION_INACTIVE;
        case CMSG_SET_WATCHED_FACTION: return BUILD5875_CMSG_SET_WATCHED_FACTION;
        case MSG_MOVE_TIME_SKIPPED: return BUILD5875_MSG_MOVE_TIME_SKIPPED;
        case SMSG_SPLINE_MOVE_ROOT: return BUILD5875_SMSG_SPLINE_MOVE_ROOT;
        case CMSG_SET_EXPLORATION_ALL: return BUILD5875_CMSG_SET_EXPLORATION_ALL;
        case SMSG_INVALIDATE_PLAYER: return BUILD5875_SMSG_INVALIDATE_PLAYER;
        case CMSG_RESET_INSTANCES: return BUILD5875_CMSG_RESET_INSTANCES;
        case SMSG_INSTANCE_RESET: return BUILD5875_SMSG_INSTANCE_RESET;
        case SMSG_INSTANCE_RESET_FAILED: return BUILD5875_SMSG_INSTANCE_RESET_FAILED;
        case SMSG_UPDATE_LAST_INSTANCE: return BUILD5875_SMSG_UPDATE_LAST_INSTANCE;
        case MSG_RAID_TARGET_UPDATE: return BUILD5875_MSG_RAID_TARGET_UPDATE;
        case MSG_RAID_READY_CHECK: return BUILD5875_MSG_RAID_READY_CHECK;
        case CMSG_LUA_USAGE: return BUILD5875_CMSG_LUA_USAGE;
        case SMSG_PET_ACTION_SOUND: return BUILD5875_SMSG_PET_ACTION_SOUND;
        case SMSG_PET_DISMISS_SOUND: return BUILD5875_SMSG_PET_DISMISS_SOUND;
        case SMSG_GHOSTEE_GONE: return BUILD5875_SMSG_GHOSTEE_GONE;
        case CMSG_GM_UPDATE_TICKET_STATUS: return BUILD5875_CMSG_GM_UPDATE_TICKET_STATUS;
        case SMSG_GM_TICKET_STATUS_UPDATE: return BUILD5875_SMSG_GM_TICKET_STATUS_UPDATE;
        case MSG_SET_DUNGEON_DIFFICULTY: return BUILD5875_MSG_SET_DUNGEON_DIFFICULTY;
        case CMSG_GMSURVEY_SUBMIT: return BUILD5875_CMSG_GMSURVEY_SUBMIT;
        case SMSG_UPDATE_INSTANCE_OWNERSHIP: return BUILD5875_SMSG_UPDATE_INSTANCE_OWNERSHIP;
        case CMSG_IGNORE_KNOCKBACK_CHEAT: return BUILD5875_CMSG_IGNORE_KNOCKBACK_CHEAT;
        case SMSG_CHAT_PLAYER_AMBIGUOUS: return BUILD5875_SMSG_CHAT_PLAYER_AMBIGUOUS;
        case MSG_DELAY_GHOST_TELEPORT: return BUILD5875_MSG_DELAY_GHOST_TELEPORT;
        case SMSG_SPELLINSTAKILLLOG: return BUILD5875_SMSG_SPELLINSTAKILLLOG;
        case SMSG_SPELL_UPDATE_CHAIN_TARGETS: return BUILD5875_SMSG_SPELL_UPDATE_CHAIN_TARGETS;
        case CMSG_CHAT_FILTERED: return BUILD5875_CMSG_CHAT_FILTERED;
        case SMSG_EXPECTED_SPAM_RECORDS: return BUILD5875_SMSG_EXPECTED_SPAM_RECORDS;
        case SMSG_SPELLSTEALLOG: return BUILD5875_SMSG_SPELLSTEALLOG;
        case CMSG_LOTTERY_QUERY_OBSOLETE: return BUILD5875_CMSG_LOTTERY_QUERY_OBSOLETE;
        case SMSG_LOTTERY_QUERY_RESULT_OBSOLETE: return BUILD5875_SMSG_LOTTERY_QUERY_RESULT_OBSOLETE;
        case CMSG_BUY_LOTTERY_TICKET_OBSOLETE: return BUILD5875_CMSG_BUY_LOTTERY_TICKET_OBSOLETE;
        case SMSG_LOTTERY_RESULT_OBSOLETE: return BUILD5875_SMSG_LOTTERY_RESULT_OBSOLETE;
        case SMSG_CHARACTER_PROFILE: return BUILD5875_SMSG_CHARACTER_PROFILE;
        case SMSG_CHARACTER_PROFILE_REALM_CONNECTED: return BUILD5875_SMSG_CHARACTER_PROFILE_REALM_CONNECTED;
        case SMSG_UNK: return BUILD5875_SMSG_UNK;
        case SMSG_DEFENSE_MESSAGE: return BUILD5875_SMSG_DEFENSE_MESSAGE;
        default: return 0xFFFF;
        }
    case 6005:
        switch (logicalOpcode)
        {
        case MSG_NULL_ACTION: return BUILD6005_MSG_NULL_ACTION;
        case CMSG_BOOTME: return BUILD6005_CMSG_BOOTME;
        case CMSG_DBLOOKUP: return BUILD6005_CMSG_DBLOOKUP;
        case SMSG_DBLOOKUP: return BUILD6005_SMSG_DBLOOKUP;
        case CMSG_QUERY_OBJECT_POSITION: return BUILD6005_CMSG_QUERY_OBJECT_POSITION;
        case SMSG_QUERY_OBJECT_POSITION: return BUILD6005_SMSG_QUERY_OBJECT_POSITION;
        case CMSG_QUERY_OBJECT_ROTATION: return BUILD6005_CMSG_QUERY_OBJECT_ROTATION;
        case SMSG_QUERY_OBJECT_ROTATION: return BUILD6005_SMSG_QUERY_OBJECT_ROTATION;
        case CMSG_WORLD_TELEPORT: return BUILD6005_CMSG_WORLD_TELEPORT;
        case CMSG_TELEPORT_TO_UNIT: return BUILD6005_CMSG_TELEPORT_TO_UNIT;
        case CMSG_ZONE_MAP: return BUILD6005_CMSG_ZONE_MAP;
        case SMSG_ZONE_MAP: return BUILD6005_SMSG_ZONE_MAP;
        case CMSG_DEBUG_CHANGECELLZONE: return BUILD6005_CMSG_DEBUG_CHANGECELLZONE;
        case CMSG_EMBLAZON_TABARD_OBSOLETE: return BUILD6005_CMSG_EMBLAZON_TABARD_OBSOLETE;
        case CMSG_UNEMBLAZON_TABARD_OBSOLETE: return BUILD6005_CMSG_UNEMBLAZON_TABARD_OBSOLETE;
        case CMSG_RECHARGE: return BUILD6005_CMSG_RECHARGE;
        case CMSG_LEARN_SPELL: return BUILD6005_CMSG_LEARN_SPELL;
        case CMSG_CREATEMONSTER: return BUILD6005_CMSG_CREATEMONSTER;
        case CMSG_DESTROYMONSTER: return BUILD6005_CMSG_DESTROYMONSTER;
        case CMSG_CREATEITEM: return BUILD6005_CMSG_CREATEITEM;
        case CMSG_CREATEGAMEOBJECT: return BUILD6005_CMSG_CREATEGAMEOBJECT;
        case SMSG_CHECK_FOR_BOTS: return BUILD6005_SMSG_CHECK_FOR_BOTS;
        case CMSG_MAKEMONSTERATTACKGUID: return BUILD6005_CMSG_MAKEMONSTERATTACKGUID;
        case CMSG_BOT_DETECTED2: return BUILD6005_CMSG_BOT_DETECTED2;
        case CMSG_FORCEACTION: return BUILD6005_CMSG_FORCEACTION;
        case CMSG_FORCEACTIONONOTHER: return BUILD6005_CMSG_FORCEACTIONONOTHER;
        case CMSG_FORCEACTIONSHOW: return BUILD6005_CMSG_FORCEACTIONSHOW;
        case SMSG_FORCEACTIONSHOW: return BUILD6005_SMSG_FORCEACTIONSHOW;
        case CMSG_PETGODMODE: return BUILD6005_CMSG_PETGODMODE;
        case SMSG_PETGODMODE: return BUILD6005_SMSG_PETGODMODE;
        case SMSG_DEBUGINFOSPELLMISS_OBSOLETE: return BUILD6005_SMSG_DEBUGINFOSPELLMISS_OBSOLETE;
        case CMSG_WEATHER_SPEED_CHEAT: return BUILD6005_CMSG_WEATHER_SPEED_CHEAT;
        case CMSG_UNDRESSPLAYER: return BUILD6005_CMSG_UNDRESSPLAYER;
        case CMSG_BEASTMASTER: return BUILD6005_CMSG_BEASTMASTER;
        case CMSG_GODMODE: return BUILD6005_CMSG_GODMODE;
        case SMSG_GODMODE: return BUILD6005_SMSG_GODMODE;
        case CMSG_CHEAT_SETMONEY: return BUILD6005_CMSG_CHEAT_SETMONEY;
        case CMSG_LEVEL_CHEAT: return BUILD6005_CMSG_LEVEL_CHEAT;
        case CMSG_PET_LEVEL_CHEAT: return BUILD6005_CMSG_PET_LEVEL_CHEAT;
        case CMSG_SET_WORLDSTATE: return BUILD6005_CMSG_SET_WORLDSTATE;
        case CMSG_COOLDOWN_CHEAT: return BUILD6005_CMSG_COOLDOWN_CHEAT;
        case CMSG_USE_SKILL_CHEAT: return BUILD6005_CMSG_USE_SKILL_CHEAT;
        case CMSG_FLAG_QUEST: return BUILD6005_CMSG_FLAG_QUEST;
        case CMSG_FLAG_QUEST_FINISH: return BUILD6005_CMSG_FLAG_QUEST_FINISH;
        case CMSG_CLEAR_QUEST: return BUILD6005_CMSG_CLEAR_QUEST;
        case CMSG_SEND_EVENT: return BUILD6005_CMSG_SEND_EVENT;
        case CMSG_DEBUG_AISTATE: return BUILD6005_CMSG_DEBUG_AISTATE;
        case SMSG_DEBUG_AISTATE: return BUILD6005_SMSG_DEBUG_AISTATE;
        case CMSG_DISABLE_PVP_CHEAT: return BUILD6005_CMSG_DISABLE_PVP_CHEAT;
        case CMSG_ADVANCE_SPAWN_TIME: return BUILD6005_CMSG_ADVANCE_SPAWN_TIME;
        case CMSG_PVP_PORT_OBSOLETE: return BUILD6005_CMSG_PVP_PORT_OBSOLETE;
        case CMSG_AUTH_SRP6_BEGIN: return BUILD6005_CMSG_AUTH_SRP6_BEGIN;
        case CMSG_AUTH_SRP6_PROOF: return BUILD6005_CMSG_AUTH_SRP6_PROOF;
        case CMSG_AUTH_SRP6_RECODE: return BUILD6005_CMSG_AUTH_SRP6_RECODE;
        case CMSG_CHAR_CREATE: return BUILD6005_CMSG_CHAR_CREATE;
        case CMSG_CHAR_ENUM: return BUILD6005_CMSG_CHAR_ENUM;
        case CMSG_CHAR_DELETE: return BUILD6005_CMSG_CHAR_DELETE;
        case SMSG_AUTH_SRP6_RESPONSE: return BUILD6005_SMSG_AUTH_SRP6_RESPONSE;
        case SMSG_CHAR_CREATE: return BUILD6005_SMSG_CHAR_CREATE;
        case SMSG_CHAR_ENUM: return BUILD6005_SMSG_CHAR_ENUM;
        case SMSG_CHAR_DELETE: return BUILD6005_SMSG_CHAR_DELETE;
        case CMSG_PLAYER_LOGIN: return BUILD6005_CMSG_PLAYER_LOGIN;
        case SMSG_NEW_WORLD: return BUILD6005_SMSG_NEW_WORLD;
        case SMSG_TRANSFER_PENDING: return BUILD6005_SMSG_TRANSFER_PENDING;
        case SMSG_TRANSFER_ABORTED: return BUILD6005_SMSG_TRANSFER_ABORTED;
        case SMSG_CHARACTER_LOGIN_FAILED: return BUILD6005_SMSG_CHARACTER_LOGIN_FAILED;
        case SMSG_LOGIN_SETTIMESPEED: return BUILD6005_SMSG_LOGIN_SETTIMESPEED;
        case SMSG_GAMETIME_UPDATE: return BUILD6005_SMSG_GAMETIME_UPDATE;
        case CMSG_GAMETIME_SET: return BUILD6005_CMSG_GAMETIME_SET;
        case SMSG_GAMETIME_SET: return BUILD6005_SMSG_GAMETIME_SET;
        case CMSG_GAMESPEED_SET: return BUILD6005_CMSG_GAMESPEED_SET;
        case SMSG_GAMESPEED_SET: return BUILD6005_SMSG_GAMESPEED_SET;
        case CMSG_SERVERTIME: return BUILD6005_CMSG_SERVERTIME;
        case SMSG_SERVERTIME: return BUILD6005_SMSG_SERVERTIME;
        case CMSG_PLAYER_LOGOUT: return BUILD6005_CMSG_PLAYER_LOGOUT;
        case CMSG_LOGOUT_REQUEST: return BUILD6005_CMSG_LOGOUT_REQUEST;
        case SMSG_LOGOUT_RESPONSE: return BUILD6005_SMSG_LOGOUT_RESPONSE;
        case SMSG_LOGOUT_COMPLETE: return BUILD6005_SMSG_LOGOUT_COMPLETE;
        case CMSG_LOGOUT_CANCEL: return BUILD6005_CMSG_LOGOUT_CANCEL;
        case SMSG_LOGOUT_CANCEL_ACK: return BUILD6005_SMSG_LOGOUT_CANCEL_ACK;
        case CMSG_NAME_QUERY: return BUILD6005_CMSG_NAME_QUERY;
        case SMSG_NAME_QUERY_RESPONSE: return BUILD6005_SMSG_NAME_QUERY_RESPONSE;
        case CMSG_PET_NAME_QUERY: return BUILD6005_CMSG_PET_NAME_QUERY;
        case SMSG_PET_NAME_QUERY_RESPONSE: return BUILD6005_SMSG_PET_NAME_QUERY_RESPONSE;
        case CMSG_GUILD_QUERY: return BUILD6005_CMSG_GUILD_QUERY;
        case SMSG_GUILD_QUERY_RESPONSE: return BUILD6005_SMSG_GUILD_QUERY_RESPONSE;
        case CMSG_ITEM_QUERY_SINGLE: return BUILD6005_CMSG_ITEM_QUERY_SINGLE;
        case CMSG_ITEM_QUERY_MULTIPLE: return BUILD6005_CMSG_ITEM_QUERY_MULTIPLE;
        case SMSG_ITEM_QUERY_SINGLE_RESPONSE: return BUILD6005_SMSG_ITEM_QUERY_SINGLE_RESPONSE;
        case SMSG_ITEM_QUERY_MULTIPLE_RESPONSE: return BUILD6005_SMSG_ITEM_QUERY_MULTIPLE_RESPONSE;
        case CMSG_PAGE_TEXT_QUERY: return BUILD6005_CMSG_PAGE_TEXT_QUERY;
        case SMSG_PAGE_TEXT_QUERY_RESPONSE: return BUILD6005_SMSG_PAGE_TEXT_QUERY_RESPONSE;
        case CMSG_QUEST_QUERY: return BUILD6005_CMSG_QUEST_QUERY;
        case SMSG_QUEST_QUERY_RESPONSE: return BUILD6005_SMSG_QUEST_QUERY_RESPONSE;
        case CMSG_GAMEOBJECT_QUERY: return BUILD6005_CMSG_GAMEOBJECT_QUERY;
        case SMSG_GAMEOBJECT_QUERY_RESPONSE: return BUILD6005_SMSG_GAMEOBJECT_QUERY_RESPONSE;
        case CMSG_CREATURE_QUERY: return BUILD6005_CMSG_CREATURE_QUERY;
        case SMSG_CREATURE_QUERY_RESPONSE: return BUILD6005_SMSG_CREATURE_QUERY_RESPONSE;
        case CMSG_WHO: return BUILD6005_CMSG_WHO;
        case SMSG_WHO: return BUILD6005_SMSG_WHO;
        case CMSG_WHOIS: return BUILD6005_CMSG_WHOIS;
        case SMSG_WHOIS: return BUILD6005_SMSG_WHOIS;
        case CMSG_FRIEND_LIST: return BUILD6005_CMSG_FRIEND_LIST;
        case SMSG_FRIEND_LIST: return BUILD6005_SMSG_FRIEND_LIST;
        case SMSG_FRIEND_STATUS: return BUILD6005_SMSG_FRIEND_STATUS;
        case CMSG_ADD_FRIEND: return BUILD6005_CMSG_ADD_FRIEND;
        case CMSG_DEL_FRIEND: return BUILD6005_CMSG_DEL_FRIEND;
        case SMSG_IGNORE_LIST: return BUILD6005_SMSG_IGNORE_LIST;
        case CMSG_ADD_IGNORE: return BUILD6005_CMSG_ADD_IGNORE;
        case CMSG_DEL_IGNORE: return BUILD6005_CMSG_DEL_IGNORE;
        case CMSG_GROUP_INVITE: return BUILD6005_CMSG_GROUP_INVITE;
        case SMSG_GROUP_INVITE: return BUILD6005_SMSG_GROUP_INVITE;
        case CMSG_GROUP_CANCEL: return BUILD6005_CMSG_GROUP_CANCEL;
        case SMSG_GROUP_CANCEL: return BUILD6005_SMSG_GROUP_CANCEL;
        case CMSG_GROUP_ACCEPT: return BUILD6005_CMSG_GROUP_ACCEPT;
        case CMSG_GROUP_DECLINE: return BUILD6005_CMSG_GROUP_DECLINE;
        case SMSG_GROUP_DECLINE: return BUILD6005_SMSG_GROUP_DECLINE;
        case CMSG_GROUP_UNINVITE: return BUILD6005_CMSG_GROUP_UNINVITE;
        case CMSG_GROUP_UNINVITE_GUID: return BUILD6005_CMSG_GROUP_UNINVITE_GUID;
        case SMSG_GROUP_UNINVITE: return BUILD6005_SMSG_GROUP_UNINVITE;
        case CMSG_GROUP_SET_LEADER: return BUILD6005_CMSG_GROUP_SET_LEADER;
        case SMSG_GROUP_SET_LEADER: return BUILD6005_SMSG_GROUP_SET_LEADER;
        case CMSG_LOOT_METHOD: return BUILD6005_CMSG_LOOT_METHOD;
        case CMSG_GROUP_DISBAND: return BUILD6005_CMSG_GROUP_DISBAND;
        case SMSG_GROUP_DESTROYED: return BUILD6005_SMSG_GROUP_DESTROYED;
        case SMSG_GROUP_LIST: return BUILD6005_SMSG_GROUP_LIST;
        case SMSG_PARTY_MEMBER_STATS: return BUILD6005_SMSG_PARTY_MEMBER_STATS;
        case SMSG_PARTY_COMMAND_RESULT: return BUILD6005_SMSG_PARTY_COMMAND_RESULT;
        case UMSG_UPDATE_GROUP_MEMBERS: return BUILD6005_UMSG_UPDATE_GROUP_MEMBERS;
        case CMSG_GUILD_CREATE: return BUILD6005_CMSG_GUILD_CREATE;
        case CMSG_GUILD_INVITE: return BUILD6005_CMSG_GUILD_INVITE;
        case SMSG_GUILD_INVITE: return BUILD6005_SMSG_GUILD_INVITE;
        case CMSG_GUILD_ACCEPT: return BUILD6005_CMSG_GUILD_ACCEPT;
        case CMSG_GUILD_DECLINE: return BUILD6005_CMSG_GUILD_DECLINE;
        case SMSG_GUILD_DECLINE: return BUILD6005_SMSG_GUILD_DECLINE;
        case CMSG_GUILD_INFO: return BUILD6005_CMSG_GUILD_INFO;
        case SMSG_GUILD_INFO: return BUILD6005_SMSG_GUILD_INFO;
        case CMSG_GUILD_ROSTER: return BUILD6005_CMSG_GUILD_ROSTER;
        case SMSG_GUILD_ROSTER: return BUILD6005_SMSG_GUILD_ROSTER;
        case CMSG_GUILD_PROMOTE: return BUILD6005_CMSG_GUILD_PROMOTE;
        case CMSG_GUILD_DEMOTE: return BUILD6005_CMSG_GUILD_DEMOTE;
        case CMSG_GUILD_LEAVE: return BUILD6005_CMSG_GUILD_LEAVE;
        case CMSG_GUILD_REMOVE: return BUILD6005_CMSG_GUILD_REMOVE;
        case CMSG_GUILD_DISBAND: return BUILD6005_CMSG_GUILD_DISBAND;
        case CMSG_GUILD_LEADER: return BUILD6005_CMSG_GUILD_LEADER;
        case CMSG_GUILD_MOTD: return BUILD6005_CMSG_GUILD_MOTD;
        case SMSG_GUILD_EVENT: return BUILD6005_SMSG_GUILD_EVENT;
        case SMSG_GUILD_COMMAND_RESULT: return BUILD6005_SMSG_GUILD_COMMAND_RESULT;
        case UMSG_UPDATE_GUILD: return BUILD6005_UMSG_UPDATE_GUILD;
        case CMSG_MESSAGECHAT: return BUILD6005_CMSG_MESSAGECHAT;
        case SMSG_MESSAGECHAT: return BUILD6005_SMSG_MESSAGECHAT;
        case CMSG_JOIN_CHANNEL: return BUILD6005_CMSG_JOIN_CHANNEL;
        case CMSG_LEAVE_CHANNEL: return BUILD6005_CMSG_LEAVE_CHANNEL;
        case SMSG_CHANNEL_NOTIFY: return BUILD6005_SMSG_CHANNEL_NOTIFY;
        case CMSG_CHANNEL_LIST: return BUILD6005_CMSG_CHANNEL_LIST;
        case SMSG_CHANNEL_LIST: return BUILD6005_SMSG_CHANNEL_LIST;
        case CMSG_CHANNEL_PASSWORD: return BUILD6005_CMSG_CHANNEL_PASSWORD;
        case CMSG_CHANNEL_SET_OWNER: return BUILD6005_CMSG_CHANNEL_SET_OWNER;
        case CMSG_CHANNEL_OWNER: return BUILD6005_CMSG_CHANNEL_OWNER;
        case CMSG_CHANNEL_MODERATOR: return BUILD6005_CMSG_CHANNEL_MODERATOR;
        case CMSG_CHANNEL_UNMODERATOR: return BUILD6005_CMSG_CHANNEL_UNMODERATOR;
        case CMSG_CHANNEL_MUTE: return BUILD6005_CMSG_CHANNEL_MUTE;
        case CMSG_CHANNEL_UNMUTE: return BUILD6005_CMSG_CHANNEL_UNMUTE;
        case CMSG_CHANNEL_INVITE: return BUILD6005_CMSG_CHANNEL_INVITE;
        case CMSG_CHANNEL_KICK: return BUILD6005_CMSG_CHANNEL_KICK;
        case CMSG_CHANNEL_BAN: return BUILD6005_CMSG_CHANNEL_BAN;
        case CMSG_CHANNEL_UNBAN: return BUILD6005_CMSG_CHANNEL_UNBAN;
        case CMSG_CHANNEL_ANNOUNCEMENTS: return BUILD6005_CMSG_CHANNEL_ANNOUNCEMENTS;
        case CMSG_CHANNEL_MODERATE: return BUILD6005_CMSG_CHANNEL_MODERATE;
        case SMSG_UPDATE_OBJECT: return BUILD6005_SMSG_UPDATE_OBJECT;
        case SMSG_DESTROY_OBJECT: return BUILD6005_SMSG_DESTROY_OBJECT;
        case CMSG_USE_ITEM: return BUILD6005_CMSG_USE_ITEM;
        case CMSG_OPEN_ITEM: return BUILD6005_CMSG_OPEN_ITEM;
        case CMSG_READ_ITEM: return BUILD6005_CMSG_READ_ITEM;
        case SMSG_READ_ITEM_OK: return BUILD6005_SMSG_READ_ITEM_OK;
        case SMSG_READ_ITEM_FAILED: return BUILD6005_SMSG_READ_ITEM_FAILED;
        case SMSG_ITEM_COOLDOWN: return BUILD6005_SMSG_ITEM_COOLDOWN;
        case CMSG_GAMEOBJ_USE: return BUILD6005_CMSG_GAMEOBJ_USE;
        case CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE: return BUILD6005_CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE;
        case SMSG_GAMEOBJECT_CUSTOM_ANIM: return BUILD6005_SMSG_GAMEOBJECT_CUSTOM_ANIM;
        case CMSG_AREATRIGGER: return BUILD6005_CMSG_AREATRIGGER;
        case MSG_MOVE_START_FORWARD: return BUILD6005_MSG_MOVE_START_FORWARD;
        case MSG_MOVE_START_BACKWARD: return BUILD6005_MSG_MOVE_START_BACKWARD;
        case MSG_MOVE_STOP: return BUILD6005_MSG_MOVE_STOP;
        case MSG_MOVE_START_STRAFE_LEFT: return BUILD6005_MSG_MOVE_START_STRAFE_LEFT;
        case MSG_MOVE_START_STRAFE_RIGHT: return BUILD6005_MSG_MOVE_START_STRAFE_RIGHT;
        case MSG_MOVE_STOP_STRAFE: return BUILD6005_MSG_MOVE_STOP_STRAFE;
        case MSG_MOVE_JUMP: return BUILD6005_MSG_MOVE_JUMP;
        case MSG_MOVE_START_TURN_LEFT: return BUILD6005_MSG_MOVE_START_TURN_LEFT;
        case MSG_MOVE_START_TURN_RIGHT: return BUILD6005_MSG_MOVE_START_TURN_RIGHT;
        case MSG_MOVE_STOP_TURN: return BUILD6005_MSG_MOVE_STOP_TURN;
        case MSG_MOVE_START_PITCH_UP: return BUILD6005_MSG_MOVE_START_PITCH_UP;
        case MSG_MOVE_START_PITCH_DOWN: return BUILD6005_MSG_MOVE_START_PITCH_DOWN;
        case MSG_MOVE_STOP_PITCH: return BUILD6005_MSG_MOVE_STOP_PITCH;
        case MSG_MOVE_SET_RUN_MODE: return BUILD6005_MSG_MOVE_SET_RUN_MODE;
        case MSG_MOVE_SET_WALK_MODE: return BUILD6005_MSG_MOVE_SET_WALK_MODE;
        case MSG_MOVE_TOGGLE_LOGGING: return BUILD6005_MSG_MOVE_TOGGLE_LOGGING;
        case MSG_MOVE_TELEPORT: return BUILD6005_MSG_MOVE_TELEPORT;
        case MSG_MOVE_TELEPORT_CHEAT: return BUILD6005_MSG_MOVE_TELEPORT_CHEAT;
        case MSG_MOVE_TELEPORT_ACK: return BUILD6005_MSG_MOVE_TELEPORT_ACK;
        case MSG_MOVE_TOGGLE_FALL_LOGGING: return BUILD6005_MSG_MOVE_TOGGLE_FALL_LOGGING;
        case MSG_MOVE_FALL_LAND: return BUILD6005_MSG_MOVE_FALL_LAND;
        case MSG_MOVE_START_SWIM: return BUILD6005_MSG_MOVE_START_SWIM;
        case MSG_MOVE_STOP_SWIM: return BUILD6005_MSG_MOVE_STOP_SWIM;
        case MSG_MOVE_SET_RUN_SPEED_CHEAT: return BUILD6005_MSG_MOVE_SET_RUN_SPEED_CHEAT;
        case MSG_MOVE_SET_RUN_SPEED: return BUILD6005_MSG_MOVE_SET_RUN_SPEED;
        case MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT: return BUILD6005_MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT;
        case MSG_MOVE_SET_RUN_BACK_SPEED: return BUILD6005_MSG_MOVE_SET_RUN_BACK_SPEED;
        case MSG_MOVE_SET_WALK_SPEED_CHEAT: return BUILD6005_MSG_MOVE_SET_WALK_SPEED_CHEAT;
        case MSG_MOVE_SET_WALK_SPEED: return BUILD6005_MSG_MOVE_SET_WALK_SPEED;
        case MSG_MOVE_SET_SWIM_SPEED_CHEAT: return BUILD6005_MSG_MOVE_SET_SWIM_SPEED_CHEAT;
        case MSG_MOVE_SET_SWIM_SPEED: return BUILD6005_MSG_MOVE_SET_SWIM_SPEED;
        case MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT: return BUILD6005_MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT;
        case MSG_MOVE_SET_SWIM_BACK_SPEED: return BUILD6005_MSG_MOVE_SET_SWIM_BACK_SPEED;
        case MSG_MOVE_SET_ALL_SPEED_CHEAT: return BUILD6005_MSG_MOVE_SET_ALL_SPEED_CHEAT;
        case MSG_MOVE_SET_TURN_RATE_CHEAT: return BUILD6005_MSG_MOVE_SET_TURN_RATE_CHEAT;
        case MSG_MOVE_SET_TURN_RATE: return BUILD6005_MSG_MOVE_SET_TURN_RATE;
        case MSG_MOVE_TOGGLE_COLLISION_CHEAT: return BUILD6005_MSG_MOVE_TOGGLE_COLLISION_CHEAT;
        case MSG_MOVE_SET_FACING: return BUILD6005_MSG_MOVE_SET_FACING;
        case MSG_MOVE_SET_PITCH: return BUILD6005_MSG_MOVE_SET_PITCH;
        case MSG_MOVE_WORLDPORT_ACK: return BUILD6005_MSG_MOVE_WORLDPORT_ACK;
        case SMSG_MONSTER_MOVE: return BUILD6005_SMSG_MONSTER_MOVE;
        case SMSG_MOVE_WATER_WALK: return BUILD6005_SMSG_MOVE_WATER_WALK;
        case SMSG_MOVE_LAND_WALK: return BUILD6005_SMSG_MOVE_LAND_WALK;
        case MSG_MOVE_SET_RAW_POSITION_ACK: return BUILD6005_MSG_MOVE_SET_RAW_POSITION_ACK;
        case CMSG_MOVE_SET_RAW_POSITION: return BUILD6005_CMSG_MOVE_SET_RAW_POSITION;
        case SMSG_FORCE_RUN_SPEED_CHANGE: return BUILD6005_SMSG_FORCE_RUN_SPEED_CHANGE;
        case CMSG_FORCE_RUN_SPEED_CHANGE_ACK: return BUILD6005_CMSG_FORCE_RUN_SPEED_CHANGE_ACK;
        case SMSG_FORCE_RUN_BACK_SPEED_CHANGE: return BUILD6005_SMSG_FORCE_RUN_BACK_SPEED_CHANGE;
        case CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK: return BUILD6005_CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_SWIM_SPEED_CHANGE: return BUILD6005_SMSG_FORCE_SWIM_SPEED_CHANGE;
        case CMSG_FORCE_SWIM_SPEED_CHANGE_ACK: return BUILD6005_CMSG_FORCE_SWIM_SPEED_CHANGE_ACK;
        case SMSG_FORCE_MOVE_ROOT: return BUILD6005_SMSG_FORCE_MOVE_ROOT;
        case CMSG_FORCE_MOVE_ROOT_ACK: return BUILD6005_CMSG_FORCE_MOVE_ROOT_ACK;
        case SMSG_FORCE_MOVE_UNROOT: return BUILD6005_SMSG_FORCE_MOVE_UNROOT;
        case CMSG_FORCE_MOVE_UNROOT_ACK: return BUILD6005_CMSG_FORCE_MOVE_UNROOT_ACK;
        case MSG_MOVE_ROOT: return BUILD6005_MSG_MOVE_ROOT;
        case MSG_MOVE_UNROOT: return BUILD6005_MSG_MOVE_UNROOT;
        case MSG_MOVE_HEARTBEAT: return BUILD6005_MSG_MOVE_HEARTBEAT;
        case SMSG_MOVE_KNOCK_BACK: return BUILD6005_SMSG_MOVE_KNOCK_BACK;
        case CMSG_MOVE_KNOCK_BACK_ACK: return BUILD6005_CMSG_MOVE_KNOCK_BACK_ACK;
        case MSG_MOVE_KNOCK_BACK: return BUILD6005_MSG_MOVE_KNOCK_BACK;
        case SMSG_MOVE_FEATHER_FALL: return BUILD6005_SMSG_MOVE_FEATHER_FALL;
        case SMSG_MOVE_NORMAL_FALL: return BUILD6005_SMSG_MOVE_NORMAL_FALL;
        case SMSG_MOVE_SET_HOVER: return BUILD6005_SMSG_MOVE_SET_HOVER;
        case SMSG_MOVE_UNSET_HOVER: return BUILD6005_SMSG_MOVE_UNSET_HOVER;
        case CMSG_MOVE_HOVER_ACK: return BUILD6005_CMSG_MOVE_HOVER_ACK;
        case MSG_MOVE_HOVER: return BUILD6005_MSG_MOVE_HOVER;
        case CMSG_TRIGGER_CINEMATIC_CHEAT: return BUILD6005_CMSG_TRIGGER_CINEMATIC_CHEAT;
        case CMSG_OPENING_CINEMATIC: return BUILD6005_CMSG_OPENING_CINEMATIC;
        case SMSG_TRIGGER_CINEMATIC: return BUILD6005_SMSG_TRIGGER_CINEMATIC;
        case CMSG_NEXT_CINEMATIC_CAMERA: return BUILD6005_CMSG_NEXT_CINEMATIC_CAMERA;
        case CMSG_COMPLETE_CINEMATIC: return BUILD6005_CMSG_COMPLETE_CINEMATIC;
        case SMSG_TUTORIAL_FLAGS: return BUILD6005_SMSG_TUTORIAL_FLAGS;
        case CMSG_TUTORIAL_FLAG: return BUILD6005_CMSG_TUTORIAL_FLAG;
        case CMSG_TUTORIAL_CLEAR: return BUILD6005_CMSG_TUTORIAL_CLEAR;
        case CMSG_TUTORIAL_RESET: return BUILD6005_CMSG_TUTORIAL_RESET;
        case CMSG_STANDSTATECHANGE: return BUILD6005_CMSG_STANDSTATECHANGE;
        case CMSG_EMOTE: return BUILD6005_CMSG_EMOTE;
        case SMSG_EMOTE: return BUILD6005_SMSG_EMOTE;
        case CMSG_TEXT_EMOTE: return BUILD6005_CMSG_TEXT_EMOTE;
        case SMSG_TEXT_EMOTE: return BUILD6005_SMSG_TEXT_EMOTE;
        case CMSG_AUTOEQUIP_GROUND_ITEM: return BUILD6005_CMSG_AUTOEQUIP_GROUND_ITEM;
        case CMSG_AUTOSTORE_GROUND_ITEM: return BUILD6005_CMSG_AUTOSTORE_GROUND_ITEM;
        case CMSG_AUTOSTORE_LOOT_ITEM: return BUILD6005_CMSG_AUTOSTORE_LOOT_ITEM;
        case CMSG_STORE_LOOT_IN_SLOT: return BUILD6005_CMSG_STORE_LOOT_IN_SLOT;
        case CMSG_AUTOEQUIP_ITEM: return BUILD6005_CMSG_AUTOEQUIP_ITEM;
        case CMSG_AUTOSTORE_BAG_ITEM: return BUILD6005_CMSG_AUTOSTORE_BAG_ITEM;
        case CMSG_SWAP_ITEM: return BUILD6005_CMSG_SWAP_ITEM;
        case CMSG_SWAP_INV_ITEM: return BUILD6005_CMSG_SWAP_INV_ITEM;
        case CMSG_SPLIT_ITEM: return BUILD6005_CMSG_SPLIT_ITEM;
        case CMSG_AUTOEQUIP_ITEM_SLOT: return BUILD6005_CMSG_AUTOEQUIP_ITEM_SLOT;
        case OBSOLETE_DROP_ITEM: return BUILD6005_OBSOLETE_DROP_ITEM;
        case CMSG_DESTROYITEM: return BUILD6005_CMSG_DESTROYITEM;
        case SMSG_INVENTORY_CHANGE_FAILURE: return BUILD6005_SMSG_INVENTORY_CHANGE_FAILURE;
        case SMSG_OPEN_CONTAINER: return BUILD6005_SMSG_OPEN_CONTAINER;
        case CMSG_INSPECT: return BUILD6005_CMSG_INSPECT;
        case SMSG_INSPECT: return BUILD6005_SMSG_INSPECT;
        case CMSG_INITIATE_TRADE: return BUILD6005_CMSG_INITIATE_TRADE;
        case CMSG_BEGIN_TRADE: return BUILD6005_CMSG_BEGIN_TRADE;
        case CMSG_BUSY_TRADE: return BUILD6005_CMSG_BUSY_TRADE;
        case CMSG_IGNORE_TRADE: return BUILD6005_CMSG_IGNORE_TRADE;
        case CMSG_ACCEPT_TRADE: return BUILD6005_CMSG_ACCEPT_TRADE;
        case CMSG_UNACCEPT_TRADE: return BUILD6005_CMSG_UNACCEPT_TRADE;
        case CMSG_CANCEL_TRADE: return BUILD6005_CMSG_CANCEL_TRADE;
        case CMSG_SET_TRADE_ITEM: return BUILD6005_CMSG_SET_TRADE_ITEM;
        case CMSG_CLEAR_TRADE_ITEM: return BUILD6005_CMSG_CLEAR_TRADE_ITEM;
        case CMSG_SET_TRADE_GOLD: return BUILD6005_CMSG_SET_TRADE_GOLD;
        case SMSG_TRADE_STATUS: return BUILD6005_SMSG_TRADE_STATUS;
        case SMSG_TRADE_STATUS_EXTENDED: return BUILD6005_SMSG_TRADE_STATUS_EXTENDED;
        case SMSG_INITIALIZE_FACTIONS: return BUILD6005_SMSG_INITIALIZE_FACTIONS;
        case SMSG_SET_FACTION_VISIBLE: return BUILD6005_SMSG_SET_FACTION_VISIBLE;
        case SMSG_SET_FACTION_STANDING: return BUILD6005_SMSG_SET_FACTION_STANDING;
        case CMSG_SET_FACTION_ATWAR: return BUILD6005_CMSG_SET_FACTION_ATWAR;
        case CMSG_SET_FACTION_CHEAT: return BUILD6005_CMSG_SET_FACTION_CHEAT;
        case SMSG_SET_PROFICIENCY: return BUILD6005_SMSG_SET_PROFICIENCY;
        case CMSG_SET_ACTION_BUTTON: return BUILD6005_CMSG_SET_ACTION_BUTTON;
        case SMSG_ACTION_BUTTONS: return BUILD6005_SMSG_ACTION_BUTTONS;
        case SMSG_INITIAL_SPELLS: return BUILD6005_SMSG_INITIAL_SPELLS;
        case SMSG_LEARNED_SPELL: return BUILD6005_SMSG_LEARNED_SPELL;
        case SMSG_SUPERCEDED_SPELL: return BUILD6005_SMSG_SUPERCEDED_SPELL;
        case CMSG_NEW_SPELL_SLOT: return BUILD6005_CMSG_NEW_SPELL_SLOT;
        case CMSG_CAST_SPELL: return BUILD6005_CMSG_CAST_SPELL;
        case CMSG_CANCEL_CAST: return BUILD6005_CMSG_CANCEL_CAST;
        case SMSG_CAST_RESULT: return BUILD6005_SMSG_CAST_RESULT;
        case SMSG_SPELL_START: return BUILD6005_SMSG_SPELL_START;
        case SMSG_SPELL_GO: return BUILD6005_SMSG_SPELL_GO;
        case SMSG_SPELL_FAILURE: return BUILD6005_SMSG_SPELL_FAILURE;
        case SMSG_SPELL_COOLDOWN: return BUILD6005_SMSG_SPELL_COOLDOWN;
        case SMSG_COOLDOWN_EVENT: return BUILD6005_SMSG_COOLDOWN_EVENT;
        case CMSG_CANCEL_AURA: return BUILD6005_CMSG_CANCEL_AURA;
        case SMSG_UPDATE_AURA_DURATION: return BUILD6005_SMSG_UPDATE_AURA_DURATION;
        case SMSG_PET_CAST_FAILED: return BUILD6005_SMSG_PET_CAST_FAILED;
        case MSG_CHANNEL_START: return BUILD6005_MSG_CHANNEL_START;
        case MSG_CHANNEL_UPDATE: return BUILD6005_MSG_CHANNEL_UPDATE;
        case CMSG_CANCEL_CHANNELLING: return BUILD6005_CMSG_CANCEL_CHANNELLING;
        case SMSG_AI_REACTION: return BUILD6005_SMSG_AI_REACTION;
        case CMSG_SET_SELECTION: return BUILD6005_CMSG_SET_SELECTION;
        case CMSG_SET_TARGET_OBSOLETE: return BUILD6005_CMSG_SET_TARGET_OBSOLETE;
        case CMSG_UNUSED: return BUILD6005_CMSG_UNUSED;
        case CMSG_UNUSED2: return BUILD6005_CMSG_UNUSED2;
        case CMSG_ATTACKSWING: return BUILD6005_CMSG_ATTACKSWING;
        case CMSG_ATTACKSTOP: return BUILD6005_CMSG_ATTACKSTOP;
        case SMSG_ATTACKSTART: return BUILD6005_SMSG_ATTACKSTART;
        case SMSG_ATTACKSTOP: return BUILD6005_SMSG_ATTACKSTOP;
        case SMSG_ATTACKSWING_NOTINRANGE: return BUILD6005_SMSG_ATTACKSWING_NOTINRANGE;
        case SMSG_ATTACKSWING_BADFACING: return BUILD6005_SMSG_ATTACKSWING_BADFACING;
        case SMSG_ATTACKSWING_NOTSTANDING: return BUILD6005_SMSG_ATTACKSWING_NOTSTANDING;
        case SMSG_ATTACKSWING_DEADTARGET: return BUILD6005_SMSG_ATTACKSWING_DEADTARGET;
        case SMSG_ATTACKSWING_CANT_ATTACK: return BUILD6005_SMSG_ATTACKSWING_CANT_ATTACK;
        case SMSG_ATTACKERSTATEUPDATE: return BUILD6005_SMSG_ATTACKERSTATEUPDATE;
        case SMSG_VICTIMSTATEUPDATE_OBSOLETE: return BUILD6005_SMSG_VICTIMSTATEUPDATE_OBSOLETE;
        case SMSG_DAMAGE_DONE_OBSOLETE: return BUILD6005_SMSG_DAMAGE_DONE_OBSOLETE;
        case SMSG_DAMAGE_TAKEN_OBSOLETE: return BUILD6005_SMSG_DAMAGE_TAKEN_OBSOLETE;
        case SMSG_CANCEL_COMBAT: return BUILD6005_SMSG_CANCEL_COMBAT;
        case SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE: return BUILD6005_SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE;
        case SMSG_SPELLHEALLOG: return BUILD6005_SMSG_SPELLHEALLOG;
        case SMSG_SPELLENERGIZELOG: return BUILD6005_SMSG_SPELLENERGIZELOG;
        case CMSG_SHEATHE_OBSOLETE: return BUILD6005_CMSG_SHEATHE_OBSOLETE;
        case CMSG_SAVE_PLAYER: return BUILD6005_CMSG_SAVE_PLAYER;
        case CMSG_SETDEATHBINDPOINT: return BUILD6005_CMSG_SETDEATHBINDPOINT;
        case SMSG_BINDPOINTUPDATE: return BUILD6005_SMSG_BINDPOINTUPDATE;
        case CMSG_GETDEATHBINDZONE: return BUILD6005_CMSG_GETDEATHBINDZONE;
        case SMSG_BINDZONEREPLY: return BUILD6005_SMSG_BINDZONEREPLY;
        case SMSG_PLAYERBOUND: return BUILD6005_SMSG_PLAYERBOUND;
        case SMSG_CLIENT_CONTROL_UPDATE: return BUILD6005_SMSG_CLIENT_CONTROL_UPDATE;
        case CMSG_REPOP_REQUEST: return BUILD6005_CMSG_REPOP_REQUEST;
        case SMSG_RESURRECT_REQUEST: return BUILD6005_SMSG_RESURRECT_REQUEST;
        case CMSG_RESURRECT_RESPONSE: return BUILD6005_CMSG_RESURRECT_RESPONSE;
        case CMSG_LOOT: return BUILD6005_CMSG_LOOT;
        case CMSG_LOOT_MONEY: return BUILD6005_CMSG_LOOT_MONEY;
        case CMSG_LOOT_RELEASE: return BUILD6005_CMSG_LOOT_RELEASE;
        case SMSG_LOOT_RESPONSE: return BUILD6005_SMSG_LOOT_RESPONSE;
        case SMSG_LOOT_RELEASE_RESPONSE: return BUILD6005_SMSG_LOOT_RELEASE_RESPONSE;
        case SMSG_LOOT_REMOVED: return BUILD6005_SMSG_LOOT_REMOVED;
        case SMSG_LOOT_MONEY_NOTIFY: return BUILD6005_SMSG_LOOT_MONEY_NOTIFY;
        case SMSG_LOOT_ITEM_NOTIFY: return BUILD6005_SMSG_LOOT_ITEM_NOTIFY;
        case SMSG_LOOT_CLEAR_MONEY: return BUILD6005_SMSG_LOOT_CLEAR_MONEY;
        case SMSG_ITEM_PUSH_RESULT: return BUILD6005_SMSG_ITEM_PUSH_RESULT;
        case SMSG_DUEL_REQUESTED: return BUILD6005_SMSG_DUEL_REQUESTED;
        case SMSG_DUEL_OUTOFBOUNDS: return BUILD6005_SMSG_DUEL_OUTOFBOUNDS;
        case SMSG_DUEL_INBOUNDS: return BUILD6005_SMSG_DUEL_INBOUNDS;
        case SMSG_DUEL_COMPLETE: return BUILD6005_SMSG_DUEL_COMPLETE;
        case SMSG_DUEL_WINNER: return BUILD6005_SMSG_DUEL_WINNER;
        case CMSG_DUEL_ACCEPTED: return BUILD6005_CMSG_DUEL_ACCEPTED;
        case CMSG_DUEL_CANCELLED: return BUILD6005_CMSG_DUEL_CANCELLED;
        case SMSG_MOUNTRESULT: return BUILD6005_SMSG_MOUNTRESULT;
        case SMSG_DISMOUNTRESULT: return BUILD6005_SMSG_DISMOUNTRESULT;
        case SMSG_PUREMOUNT_CANCELLED_OBSOLETE: return BUILD6005_SMSG_PUREMOUNT_CANCELLED_OBSOLETE;
        case CMSG_MOUNTSPECIAL_ANIM: return BUILD6005_CMSG_MOUNTSPECIAL_ANIM;
        case SMSG_MOUNTSPECIAL_ANIM: return BUILD6005_SMSG_MOUNTSPECIAL_ANIM;
        case SMSG_PET_TAME_FAILURE: return BUILD6005_SMSG_PET_TAME_FAILURE;
        case CMSG_PET_SET_ACTION: return BUILD6005_CMSG_PET_SET_ACTION;
        case CMSG_PET_ACTION: return BUILD6005_CMSG_PET_ACTION;
        case CMSG_PET_ABANDON: return BUILD6005_CMSG_PET_ABANDON;
        case CMSG_PET_RENAME: return BUILD6005_CMSG_PET_RENAME;
        case SMSG_PET_NAME_INVALID: return BUILD6005_SMSG_PET_NAME_INVALID;
        case SMSG_PET_SPELLS: return BUILD6005_SMSG_PET_SPELLS;
        case SMSG_PET_MODE: return BUILD6005_SMSG_PET_MODE;
        case CMSG_GOSSIP_HELLO: return BUILD6005_CMSG_GOSSIP_HELLO;
        case CMSG_GOSSIP_SELECT_OPTION: return BUILD6005_CMSG_GOSSIP_SELECT_OPTION;
        case SMSG_GOSSIP_MESSAGE: return BUILD6005_SMSG_GOSSIP_MESSAGE;
        case SMSG_GOSSIP_COMPLETE: return BUILD6005_SMSG_GOSSIP_COMPLETE;
        case CMSG_NPC_TEXT_QUERY: return BUILD6005_CMSG_NPC_TEXT_QUERY;
        case SMSG_NPC_TEXT_UPDATE: return BUILD6005_SMSG_NPC_TEXT_UPDATE;
        case SMSG_NPC_WONT_TALK: return BUILD6005_SMSG_NPC_WONT_TALK;
        case CMSG_QUESTGIVER_STATUS_QUERY: return BUILD6005_CMSG_QUESTGIVER_STATUS_QUERY;
        case SMSG_QUESTGIVER_STATUS: return BUILD6005_SMSG_QUESTGIVER_STATUS;
        case CMSG_QUESTGIVER_HELLO: return BUILD6005_CMSG_QUESTGIVER_HELLO;
        case SMSG_QUESTGIVER_QUEST_LIST: return BUILD6005_SMSG_QUESTGIVER_QUEST_LIST;
        case CMSG_QUESTGIVER_QUERY_QUEST: return BUILD6005_CMSG_QUESTGIVER_QUERY_QUEST;
        case CMSG_QUESTGIVER_QUEST_AUTOLAUNCH: return BUILD6005_CMSG_QUESTGIVER_QUEST_AUTOLAUNCH;
        case SMSG_QUESTGIVER_QUEST_DETAILS: return BUILD6005_SMSG_QUESTGIVER_QUEST_DETAILS;
        case CMSG_QUESTGIVER_ACCEPT_QUEST: return BUILD6005_CMSG_QUESTGIVER_ACCEPT_QUEST;
        case CMSG_QUESTGIVER_COMPLETE_QUEST: return BUILD6005_CMSG_QUESTGIVER_COMPLETE_QUEST;
        case SMSG_QUESTGIVER_REQUEST_ITEMS: return BUILD6005_SMSG_QUESTGIVER_REQUEST_ITEMS;
        case CMSG_QUESTGIVER_REQUEST_REWARD: return BUILD6005_CMSG_QUESTGIVER_REQUEST_REWARD;
        case SMSG_QUESTGIVER_OFFER_REWARD: return BUILD6005_SMSG_QUESTGIVER_OFFER_REWARD;
        case CMSG_QUESTGIVER_CHOOSE_REWARD: return BUILD6005_CMSG_QUESTGIVER_CHOOSE_REWARD;
        case SMSG_QUESTGIVER_QUEST_INVALID: return BUILD6005_SMSG_QUESTGIVER_QUEST_INVALID;
        case CMSG_QUESTGIVER_CANCEL: return BUILD6005_CMSG_QUESTGIVER_CANCEL;
        case SMSG_QUESTGIVER_QUEST_COMPLETE: return BUILD6005_SMSG_QUESTGIVER_QUEST_COMPLETE;
        case SMSG_QUESTGIVER_QUEST_FAILED: return BUILD6005_SMSG_QUESTGIVER_QUEST_FAILED;
        case CMSG_QUESTLOG_SWAP_QUEST: return BUILD6005_CMSG_QUESTLOG_SWAP_QUEST;
        case CMSG_QUESTLOG_REMOVE_QUEST: return BUILD6005_CMSG_QUESTLOG_REMOVE_QUEST;
        case SMSG_QUESTLOG_FULL: return BUILD6005_SMSG_QUESTLOG_FULL;
        case SMSG_QUESTUPDATE_FAILED: return BUILD6005_SMSG_QUESTUPDATE_FAILED;
        case SMSG_QUESTUPDATE_FAILEDTIMER: return BUILD6005_SMSG_QUESTUPDATE_FAILEDTIMER;
        case SMSG_QUESTUPDATE_COMPLETE: return BUILD6005_SMSG_QUESTUPDATE_COMPLETE;
        case SMSG_QUESTUPDATE_ADD_KILL: return BUILD6005_SMSG_QUESTUPDATE_ADD_KILL;
        case SMSG_QUESTUPDATE_ADD_ITEM: return BUILD6005_SMSG_QUESTUPDATE_ADD_ITEM;
        case CMSG_QUEST_CONFIRM_ACCEPT: return BUILD6005_CMSG_QUEST_CONFIRM_ACCEPT;
        case SMSG_QUEST_CONFIRM_ACCEPT: return BUILD6005_SMSG_QUEST_CONFIRM_ACCEPT;
        case CMSG_PUSHQUESTTOPARTY: return BUILD6005_CMSG_PUSHQUESTTOPARTY;
        case CMSG_LIST_INVENTORY: return BUILD6005_CMSG_LIST_INVENTORY;
        case SMSG_LIST_INVENTORY: return BUILD6005_SMSG_LIST_INVENTORY;
        case CMSG_SELL_ITEM: return BUILD6005_CMSG_SELL_ITEM;
        case SMSG_SELL_ITEM: return BUILD6005_SMSG_SELL_ITEM;
        case CMSG_BUY_ITEM: return BUILD6005_CMSG_BUY_ITEM;
        case CMSG_BUY_ITEM_IN_SLOT: return BUILD6005_CMSG_BUY_ITEM_IN_SLOT;
        case SMSG_BUY_ITEM: return BUILD6005_SMSG_BUY_ITEM;
        case SMSG_BUY_FAILED: return BUILD6005_SMSG_BUY_FAILED;
        case CMSG_TAXICLEARALLNODES: return BUILD6005_CMSG_TAXICLEARALLNODES;
        case CMSG_TAXIENABLEALLNODES: return BUILD6005_CMSG_TAXIENABLEALLNODES;
        case CMSG_TAXISHOWNODES: return BUILD6005_CMSG_TAXISHOWNODES;
        case SMSG_SHOWTAXINODES: return BUILD6005_SMSG_SHOWTAXINODES;
        case CMSG_TAXINODE_STATUS_QUERY: return BUILD6005_CMSG_TAXINODE_STATUS_QUERY;
        case SMSG_TAXINODE_STATUS: return BUILD6005_SMSG_TAXINODE_STATUS;
        case CMSG_TAXIQUERYAVAILABLENODES: return BUILD6005_CMSG_TAXIQUERYAVAILABLENODES;
        case CMSG_ACTIVATETAXI: return BUILD6005_CMSG_ACTIVATETAXI;
        case SMSG_ACTIVATETAXIREPLY: return BUILD6005_SMSG_ACTIVATETAXIREPLY;
        case SMSG_NEW_TAXI_PATH: return BUILD6005_SMSG_NEW_TAXI_PATH;
        case CMSG_TRAINER_LIST: return BUILD6005_CMSG_TRAINER_LIST;
        case SMSG_TRAINER_LIST: return BUILD6005_SMSG_TRAINER_LIST;
        case CMSG_TRAINER_BUY_SPELL: return BUILD6005_CMSG_TRAINER_BUY_SPELL;
        case SMSG_TRAINER_BUY_SUCCEEDED: return BUILD6005_SMSG_TRAINER_BUY_SUCCEEDED;
        case SMSG_TRAINER_BUY_FAILED: return BUILD6005_SMSG_TRAINER_BUY_FAILED; // uint64, uint32, uint32 (0...2);
        case CMSG_BINDER_ACTIVATE: return BUILD6005_CMSG_BINDER_ACTIVATE;
        case SMSG_PLAYERBINDERROR: return BUILD6005_SMSG_PLAYERBINDERROR;
        case CMSG_BANKER_ACTIVATE: return BUILD6005_CMSG_BANKER_ACTIVATE;
        case SMSG_SHOW_BANK: return BUILD6005_SMSG_SHOW_BANK;
        case CMSG_BUY_BANK_SLOT: return BUILD6005_CMSG_BUY_BANK_SLOT;
        case SMSG_BUY_BANK_SLOT_RESULT: return BUILD6005_SMSG_BUY_BANK_SLOT_RESULT;
        case CMSG_PETITION_SHOWLIST: return BUILD6005_CMSG_PETITION_SHOWLIST;
        case SMSG_PETITION_SHOWLIST: return BUILD6005_SMSG_PETITION_SHOWLIST;
        case CMSG_PETITION_BUY: return BUILD6005_CMSG_PETITION_BUY;
        case CMSG_PETITION_SHOW_SIGNATURES: return BUILD6005_CMSG_PETITION_SHOW_SIGNATURES;
        case SMSG_PETITION_SHOW_SIGNATURES: return BUILD6005_SMSG_PETITION_SHOW_SIGNATURES;
        case CMSG_PETITION_SIGN: return BUILD6005_CMSG_PETITION_SIGN;
        case SMSG_PETITION_SIGN_RESULTS: return BUILD6005_SMSG_PETITION_SIGN_RESULTS;
        case MSG_PETITION_DECLINE: return BUILD6005_MSG_PETITION_DECLINE;
        case CMSG_OFFER_PETITION: return BUILD6005_CMSG_OFFER_PETITION;
        case CMSG_TURN_IN_PETITION: return BUILD6005_CMSG_TURN_IN_PETITION;
        case SMSG_TURN_IN_PETITION_RESULTS: return BUILD6005_SMSG_TURN_IN_PETITION_RESULTS;
        case CMSG_PETITION_QUERY: return BUILD6005_CMSG_PETITION_QUERY;
        case SMSG_PETITION_QUERY_RESPONSE: return BUILD6005_SMSG_PETITION_QUERY_RESPONSE;
        case SMSG_FISH_NOT_HOOKED: return BUILD6005_SMSG_FISH_NOT_HOOKED;
        case SMSG_FISH_ESCAPED: return BUILD6005_SMSG_FISH_ESCAPED;
        case CMSG_BUG: return BUILD6005_CMSG_BUG;
        case SMSG_NOTIFICATION: return BUILD6005_SMSG_NOTIFICATION;
        case CMSG_PLAYED_TIME: return BUILD6005_CMSG_PLAYED_TIME;
        case SMSG_PLAYED_TIME: return BUILD6005_SMSG_PLAYED_TIME;
        case CMSG_QUERY_TIME: return BUILD6005_CMSG_QUERY_TIME;
        case SMSG_QUERY_TIME_RESPONSE: return BUILD6005_SMSG_QUERY_TIME_RESPONSE;
        case SMSG_LOG_XPGAIN: return BUILD6005_SMSG_LOG_XPGAIN;
        case SMSG_AURACASTLOG: return BUILD6005_SMSG_AURACASTLOG;
        case CMSG_RECLAIM_CORPSE: return BUILD6005_CMSG_RECLAIM_CORPSE;
        case CMSG_WRAP_ITEM: return BUILD6005_CMSG_WRAP_ITEM;
        case SMSG_LEVELUP_INFO: return BUILD6005_SMSG_LEVELUP_INFO;
        case MSG_MINIMAP_PING: return BUILD6005_MSG_MINIMAP_PING;
        case SMSG_RESISTLOG: return BUILD6005_SMSG_RESISTLOG;
        case SMSG_ENCHANTMENTLOG: return BUILD6005_SMSG_ENCHANTMENTLOG;
        case CMSG_SET_SKILL_CHEAT: return BUILD6005_CMSG_SET_SKILL_CHEAT;
        case SMSG_START_MIRROR_TIMER: return BUILD6005_SMSG_START_MIRROR_TIMER;
        case SMSG_PAUSE_MIRROR_TIMER: return BUILD6005_SMSG_PAUSE_MIRROR_TIMER;
        case SMSG_STOP_MIRROR_TIMER: return BUILD6005_SMSG_STOP_MIRROR_TIMER;
        case CMSG_PING: return BUILD6005_CMSG_PING;
        case SMSG_PONG: return BUILD6005_SMSG_PONG;
        case SMSG_CLEAR_COOLDOWN: return BUILD6005_SMSG_CLEAR_COOLDOWN;
        case SMSG_GAMEOBJECT_PAGETEXT: return BUILD6005_SMSG_GAMEOBJECT_PAGETEXT;
        case CMSG_SETSHEATHED: return BUILD6005_CMSG_SETSHEATHED;
        case SMSG_COOLDOWN_CHEAT: return BUILD6005_SMSG_COOLDOWN_CHEAT;
        case SMSG_SPELL_DELAYED: return BUILD6005_SMSG_SPELL_DELAYED;
        case CMSG_PLAYER_MACRO_OBSOLETE: return BUILD6005_CMSG_PLAYER_MACRO_OBSOLETE;
        case SMSG_PLAYER_MACRO_OBSOLETE: return BUILD6005_SMSG_PLAYER_MACRO_OBSOLETE;
        case CMSG_GHOST: return BUILD6005_CMSG_GHOST;
        case CMSG_GM_INVIS: return BUILD6005_CMSG_GM_INVIS;
        case SMSG_INVALID_PROMOTION_CODE: return BUILD6005_SMSG_INVALID_PROMOTION_CODE;
        case MSG_GM_BIND_OTHER: return BUILD6005_MSG_GM_BIND_OTHER;
        case MSG_GM_SUMMON: return BUILD6005_MSG_GM_SUMMON;
        case SMSG_ITEM_TIME_UPDATE: return BUILD6005_SMSG_ITEM_TIME_UPDATE;
        case SMSG_ITEM_ENCHANT_TIME_UPDATE: return BUILD6005_SMSG_ITEM_ENCHANT_TIME_UPDATE;
        case SMSG_AUTH_CHALLENGE: return BUILD6005_SMSG_AUTH_CHALLENGE;
        case CMSG_AUTH_SESSION: return BUILD6005_CMSG_AUTH_SESSION;
        case SMSG_AUTH_RESPONSE: return BUILD6005_SMSG_AUTH_RESPONSE;
        case MSG_GM_SHOWLABEL: return BUILD6005_MSG_GM_SHOWLABEL;
        case CMSG_PET_CAST_SPELL: return BUILD6005_CMSG_PET_CAST_SPELL;
        case MSG_SAVE_GUILD_EMBLEM: return BUILD6005_MSG_SAVE_GUILD_EMBLEM;
        case MSG_TABARDVENDOR_ACTIVATE: return BUILD6005_MSG_TABARDVENDOR_ACTIVATE;
        case SMSG_PLAY_SPELL_VISUAL: return BUILD6005_SMSG_PLAY_SPELL_VISUAL;
        case CMSG_ZONEUPDATE: return BUILD6005_CMSG_ZONEUPDATE;
        case SMSG_PARTYKILLLOG: return BUILD6005_SMSG_PARTYKILLLOG;
        case SMSG_COMPRESSED_UPDATE_OBJECT: return BUILD6005_SMSG_COMPRESSED_UPDATE_OBJECT;
        case SMSG_PLAY_SPELL_IMPACT: return BUILD6005_SMSG_PLAY_SPELL_IMPACT;
        case SMSG_EXPLORATION_EXPERIENCE: return BUILD6005_SMSG_EXPLORATION_EXPERIENCE;
        case CMSG_GM_SET_SECURITY_GROUP: return BUILD6005_CMSG_GM_SET_SECURITY_GROUP;
        case CMSG_GM_NUKE: return BUILD6005_CMSG_GM_NUKE;
        case MSG_RANDOM_ROLL: return BUILD6005_MSG_RANDOM_ROLL;
        case SMSG_ENVIRONMENTALDAMAGELOG: return BUILD6005_SMSG_ENVIRONMENTALDAMAGELOG;
        case CMSG_RWHOIS_OBSOLETE: return BUILD6005_CMSG_RWHOIS_OBSOLETE;
        case SMSG_RWHOIS: return BUILD6005_SMSG_RWHOIS;
        case MSG_LOOKING_FOR_GROUP: return BUILD6005_MSG_LOOKING_FOR_GROUP;
        case CMSG_SET_LOOKING_FOR_GROUP: return BUILD6005_CMSG_SET_LOOKING_FOR_GROUP;
        case CMSG_UNLEARN_SPELL: return BUILD6005_CMSG_UNLEARN_SPELL;
        case CMSG_UNLEARN_SKILL: return BUILD6005_CMSG_UNLEARN_SKILL;
        case SMSG_REMOVED_SPELL: return BUILD6005_SMSG_REMOVED_SPELL;
        case CMSG_DECHARGE: return BUILD6005_CMSG_DECHARGE;
        case CMSG_GMTICKET_CREATE: return BUILD6005_CMSG_GMTICKET_CREATE;
        case SMSG_GMTICKET_CREATE: return BUILD6005_SMSG_GMTICKET_CREATE;
        case CMSG_GMTICKET_UPDATETEXT: return BUILD6005_CMSG_GMTICKET_UPDATETEXT;
        case SMSG_GMTICKET_UPDATETEXT: return BUILD6005_SMSG_GMTICKET_UPDATETEXT;
        case SMSG_ACCOUNT_DATA_TIMES: return BUILD6005_SMSG_ACCOUNT_DATA_TIMES;
        case CMSG_REQUEST_ACCOUNT_DATA: return BUILD6005_CMSG_REQUEST_ACCOUNT_DATA;
        case CMSG_UPDATE_ACCOUNT_DATA: return BUILD6005_CMSG_UPDATE_ACCOUNT_DATA;
        case SMSG_UPDATE_ACCOUNT_DATA: return BUILD6005_SMSG_UPDATE_ACCOUNT_DATA;
        case SMSG_CLEAR_FAR_SIGHT_IMMEDIATE: return BUILD6005_SMSG_CLEAR_FAR_SIGHT_IMMEDIATE;
        case SMSG_POWERGAINLOG_OBSOLETE: return BUILD6005_SMSG_POWERGAINLOG_OBSOLETE;
        case CMSG_GM_TEACH: return BUILD6005_CMSG_GM_TEACH;
        case CMSG_GM_CREATE_ITEM_TARGET: return BUILD6005_CMSG_GM_CREATE_ITEM_TARGET;
        case CMSG_GMTICKET_GETTICKET: return BUILD6005_CMSG_GMTICKET_GETTICKET;
        case SMSG_GMTICKET_GETTICKET: return BUILD6005_SMSG_GMTICKET_GETTICKET;
        case CMSG_UNLEARN_TALENTS: return BUILD6005_CMSG_UNLEARN_TALENTS;
        case SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE: return BUILD6005_SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE;
        case SMSG_GAMEOBJECT_DESPAWN_ANIM: return BUILD6005_SMSG_GAMEOBJECT_DESPAWN_ANIM;
        case MSG_CORPSE_QUERY: return BUILD6005_MSG_CORPSE_QUERY;
        case CMSG_GMTICKET_DELETETICKET: return BUILD6005_CMSG_GMTICKET_DELETETICKET;
        case SMSG_GMTICKET_DELETETICKET: return BUILD6005_SMSG_GMTICKET_DELETETICKET;
        case SMSG_CHAT_WRONG_FACTION: return BUILD6005_SMSG_CHAT_WRONG_FACTION;
        case CMSG_GMTICKET_SYSTEMSTATUS: return BUILD6005_CMSG_GMTICKET_SYSTEMSTATUS;
        case SMSG_GMTICKET_SYSTEMSTATUS: return BUILD6005_SMSG_GMTICKET_SYSTEMSTATUS;
        case CMSG_SPIRIT_HEALER_ACTIVATE: return BUILD6005_CMSG_SPIRIT_HEALER_ACTIVATE;
        case CMSG_SET_STAT_CHEAT: return BUILD6005_CMSG_SET_STAT_CHEAT;
        case SMSG_SET_REST_START: return BUILD6005_SMSG_SET_REST_START;
        case CMSG_SKILL_BUY_STEP: return BUILD6005_CMSG_SKILL_BUY_STEP;
        case CMSG_SKILL_BUY_RANK: return BUILD6005_CMSG_SKILL_BUY_RANK;
        case CMSG_XP_CHEAT: return BUILD6005_CMSG_XP_CHEAT;
        case SMSG_SPIRIT_HEALER_CONFIRM: return BUILD6005_SMSG_SPIRIT_HEALER_CONFIRM;
        case CMSG_CHARACTER_POINT_CHEAT: return BUILD6005_CMSG_CHARACTER_POINT_CHEAT;
        case SMSG_GOSSIP_POI: return BUILD6005_SMSG_GOSSIP_POI;
        case CMSG_CHAT_IGNORED: return BUILD6005_CMSG_CHAT_IGNORED;
        case CMSG_GM_VISION: return BUILD6005_CMSG_GM_VISION;
        case CMSG_SERVER_COMMAND: return BUILD6005_CMSG_SERVER_COMMAND;
        case CMSG_GM_SILENCE: return BUILD6005_CMSG_GM_SILENCE;
        case CMSG_GM_REVEALTO: return BUILD6005_CMSG_GM_REVEALTO;
        case CMSG_GM_RESURRECT: return BUILD6005_CMSG_GM_RESURRECT;
        case CMSG_GM_SUMMONMOB: return BUILD6005_CMSG_GM_SUMMONMOB;
        case CMSG_GM_MOVECORPSE: return BUILD6005_CMSG_GM_MOVECORPSE;
        case CMSG_GM_FREEZE: return BUILD6005_CMSG_GM_FREEZE;
        case CMSG_GM_UBERINVIS: return BUILD6005_CMSG_GM_UBERINVIS;
        case CMSG_GM_REQUEST_PLAYER_INFO: return BUILD6005_CMSG_GM_REQUEST_PLAYER_INFO;
        case SMSG_GM_PLAYER_INFO: return BUILD6005_SMSG_GM_PLAYER_INFO;
        case CMSG_GUILD_RANK: return BUILD6005_CMSG_GUILD_RANK;
        case CMSG_GUILD_ADD_RANK: return BUILD6005_CMSG_GUILD_ADD_RANK;
        case CMSG_GUILD_DEL_RANK: return BUILD6005_CMSG_GUILD_DEL_RANK;
        case CMSG_GUILD_SET_PUBLIC_NOTE: return BUILD6005_CMSG_GUILD_SET_PUBLIC_NOTE;
        case CMSG_GUILD_SET_OFFICER_NOTE: return BUILD6005_CMSG_GUILD_SET_OFFICER_NOTE;
        case SMSG_LOGIN_VERIFY_WORLD: return BUILD6005_SMSG_LOGIN_VERIFY_WORLD;
        case CMSG_CLEAR_EXPLORATION: return BUILD6005_CMSG_CLEAR_EXPLORATION;
        case CMSG_SEND_MAIL: return BUILD6005_CMSG_SEND_MAIL;
        case SMSG_SEND_MAIL_RESULT: return BUILD6005_SMSG_SEND_MAIL_RESULT;
        case CMSG_GET_MAIL_LIST: return BUILD6005_CMSG_GET_MAIL_LIST;
        case SMSG_MAIL_LIST_RESULT: return BUILD6005_SMSG_MAIL_LIST_RESULT;
        case CMSG_BATTLEFIELD_LIST: return BUILD6005_CMSG_BATTLEFIELD_LIST;
        case SMSG_BATTLEFIELD_LIST: return BUILD6005_SMSG_BATTLEFIELD_LIST;
        case CMSG_BATTLEFIELD_JOIN: return BUILD6005_CMSG_BATTLEFIELD_JOIN;
        case SMSG_BATTLEFIELD_WIN_OBSOLETE: return BUILD6005_SMSG_BATTLEFIELD_WIN_OBSOLETE;
        case SMSG_BATTLEFIELD_LOSE_OBSOLETE: return BUILD6005_SMSG_BATTLEFIELD_LOSE_OBSOLETE;
        case CMSG_TAXICLEARNODE: return BUILD6005_CMSG_TAXICLEARNODE;
        case CMSG_TAXIENABLENODE: return BUILD6005_CMSG_TAXIENABLENODE;
        case CMSG_ITEM_TEXT_QUERY: return BUILD6005_CMSG_ITEM_TEXT_QUERY;
        case SMSG_ITEM_TEXT_QUERY_RESPONSE: return BUILD6005_SMSG_ITEM_TEXT_QUERY_RESPONSE;
        case CMSG_MAIL_TAKE_MONEY: return BUILD6005_CMSG_MAIL_TAKE_MONEY;
        case CMSG_MAIL_TAKE_ITEM: return BUILD6005_CMSG_MAIL_TAKE_ITEM;
        case CMSG_MAIL_MARK_AS_READ: return BUILD6005_CMSG_MAIL_MARK_AS_READ;
        case CMSG_MAIL_RETURN_TO_SENDER: return BUILD6005_CMSG_MAIL_RETURN_TO_SENDER;
        case CMSG_MAIL_DELETE: return BUILD6005_CMSG_MAIL_DELETE;
        case CMSG_MAIL_CREATE_TEXT_ITEM: return BUILD6005_CMSG_MAIL_CREATE_TEXT_ITEM;
        case SMSG_SPELLLOGMISS: return BUILD6005_SMSG_SPELLLOGMISS;
        case SMSG_SPELLLOGEXECUTE: return BUILD6005_SMSG_SPELLLOGEXECUTE;
        case SMSG_DEBUGAURAPROC: return BUILD6005_SMSG_DEBUGAURAPROC;
        case SMSG_PERIODICAURALOG: return BUILD6005_SMSG_PERIODICAURALOG;
        case SMSG_SPELLDAMAGESHIELD: return BUILD6005_SMSG_SPELLDAMAGESHIELD;
        case SMSG_SPELLNONMELEEDAMAGELOG: return BUILD6005_SMSG_SPELLNONMELEEDAMAGELOG;
        case CMSG_LEARN_TALENT: return BUILD6005_CMSG_LEARN_TALENT;
        case SMSG_RESURRECT_FAILED: return BUILD6005_SMSG_RESURRECT_FAILED;
        case CMSG_TOGGLE_PVP: return BUILD6005_CMSG_TOGGLE_PVP;
        case SMSG_ZONE_UNDER_ATTACK: return BUILD6005_SMSG_ZONE_UNDER_ATTACK;
        case MSG_AUCTION_HELLO: return BUILD6005_MSG_AUCTION_HELLO;
        case CMSG_AUCTION_SELL_ITEM: return BUILD6005_CMSG_AUCTION_SELL_ITEM;
        case CMSG_AUCTION_REMOVE_ITEM: return BUILD6005_CMSG_AUCTION_REMOVE_ITEM;
        case CMSG_AUCTION_LIST_ITEMS: return BUILD6005_CMSG_AUCTION_LIST_ITEMS;
        case CMSG_AUCTION_LIST_OWNER_ITEMS: return BUILD6005_CMSG_AUCTION_LIST_OWNER_ITEMS;
        case CMSG_AUCTION_PLACE_BID: return BUILD6005_CMSG_AUCTION_PLACE_BID;
        case SMSG_AUCTION_COMMAND_RESULT: return BUILD6005_SMSG_AUCTION_COMMAND_RESULT;
        case SMSG_AUCTION_LIST_RESULT: return BUILD6005_SMSG_AUCTION_LIST_RESULT;
        case SMSG_AUCTION_OWNER_LIST_RESULT: return BUILD6005_SMSG_AUCTION_OWNER_LIST_RESULT;
        case SMSG_AUCTION_BIDDER_NOTIFICATION: return BUILD6005_SMSG_AUCTION_BIDDER_NOTIFICATION;
        case SMSG_AUCTION_OWNER_NOTIFICATION: return BUILD6005_SMSG_AUCTION_OWNER_NOTIFICATION;
        case SMSG_PROCRESIST: return BUILD6005_SMSG_PROCRESIST;
        case SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE: return BUILD6005_SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE;
        case SMSG_DISPEL_FAILED: return BUILD6005_SMSG_DISPEL_FAILED;
        case SMSG_SPELLORDAMAGE_IMMUNE: return BUILD6005_SMSG_SPELLORDAMAGE_IMMUNE;
        case CMSG_AUCTION_LIST_BIDDER_ITEMS: return BUILD6005_CMSG_AUCTION_LIST_BIDDER_ITEMS;
        case SMSG_AUCTION_BIDDER_LIST_RESULT: return BUILD6005_SMSG_AUCTION_BIDDER_LIST_RESULT;
        case SMSG_SET_FLAT_SPELL_MODIFIER: return BUILD6005_SMSG_SET_FLAT_SPELL_MODIFIER;
        case SMSG_SET_PCT_SPELL_MODIFIER: return BUILD6005_SMSG_SET_PCT_SPELL_MODIFIER;
        case CMSG_SET_AMMO: return BUILD6005_CMSG_SET_AMMO;
        case SMSG_CORPSE_RECLAIM_DELAY: return BUILD6005_SMSG_CORPSE_RECLAIM_DELAY;
        case CMSG_SET_ACTIVE_MOVER: return BUILD6005_CMSG_SET_ACTIVE_MOVER;
        case CMSG_PET_CANCEL_AURA: return BUILD6005_CMSG_PET_CANCEL_AURA;
        case CMSG_PLAYER_AI_CHEAT: return BUILD6005_CMSG_PLAYER_AI_CHEAT;
        case CMSG_CANCEL_AUTO_REPEAT_SPELL: return BUILD6005_CMSG_CANCEL_AUTO_REPEAT_SPELL;
        case MSG_GM_ACCOUNT_ONLINE: return BUILD6005_MSG_GM_ACCOUNT_ONLINE;
        case MSG_LIST_STABLED_PETS: return BUILD6005_MSG_LIST_STABLED_PETS;
        case CMSG_STABLE_PET: return BUILD6005_CMSG_STABLE_PET;
        case CMSG_UNSTABLE_PET: return BUILD6005_CMSG_UNSTABLE_PET;
        case CMSG_BUY_STABLE_SLOT: return BUILD6005_CMSG_BUY_STABLE_SLOT;
        case SMSG_STABLE_RESULT: return BUILD6005_SMSG_STABLE_RESULT;
        case CMSG_STABLE_REVIVE_PET: return BUILD6005_CMSG_STABLE_REVIVE_PET;
        case CMSG_STABLE_SWAP_PET: return BUILD6005_CMSG_STABLE_SWAP_PET;
        case MSG_QUEST_PUSH_RESULT: return BUILD6005_MSG_QUEST_PUSH_RESULT;
        case SMSG_PLAY_MUSIC: return BUILD6005_SMSG_PLAY_MUSIC;
        case SMSG_PLAY_OBJECT_SOUND: return BUILD6005_SMSG_PLAY_OBJECT_SOUND;
        case CMSG_REQUEST_PET_INFO: return BUILD6005_CMSG_REQUEST_PET_INFO;
        case CMSG_FAR_SIGHT: return BUILD6005_CMSG_FAR_SIGHT;
        case SMSG_SPELLDISPELLOG: return BUILD6005_SMSG_SPELLDISPELLOG;
        case SMSG_DAMAGE_CALC_LOG: return BUILD6005_SMSG_DAMAGE_CALC_LOG;
        case CMSG_ENABLE_DAMAGE_LOG: return BUILD6005_CMSG_ENABLE_DAMAGE_LOG;
        case CMSG_GROUP_CHANGE_SUB_GROUP: return BUILD6005_CMSG_GROUP_CHANGE_SUB_GROUP;
        case CMSG_REQUEST_PARTY_MEMBER_STATS: return BUILD6005_CMSG_REQUEST_PARTY_MEMBER_STATS;
        case CMSG_GROUP_SWAP_SUB_GROUP: return BUILD6005_CMSG_GROUP_SWAP_SUB_GROUP;
        case CMSG_RESET_FACTION_CHEAT: return BUILD6005_CMSG_RESET_FACTION_CHEAT;
        case CMSG_AUTOSTORE_BANK_ITEM: return BUILD6005_CMSG_AUTOSTORE_BANK_ITEM;
        case CMSG_AUTOBANK_ITEM: return BUILD6005_CMSG_AUTOBANK_ITEM;
        case MSG_QUERY_NEXT_MAIL_TIME: return BUILD6005_MSG_QUERY_NEXT_MAIL_TIME;
        case SMSG_RECEIVED_MAIL: return BUILD6005_SMSG_RECEIVED_MAIL;
        case SMSG_RAID_GROUP_ONLY: return BUILD6005_SMSG_RAID_GROUP_ONLY;
        case CMSG_SET_DURABILITY_CHEAT: return BUILD6005_CMSG_SET_DURABILITY_CHEAT;
        case CMSG_SET_PVP_RANK_CHEAT: return BUILD6005_CMSG_SET_PVP_RANK_CHEAT;
        case CMSG_ADD_PVP_MEDAL_CHEAT: return BUILD6005_CMSG_ADD_PVP_MEDAL_CHEAT;
        case CMSG_DEL_PVP_MEDAL_CHEAT: return BUILD6005_CMSG_DEL_PVP_MEDAL_CHEAT;
        case CMSG_SET_PVP_TITLE: return BUILD6005_CMSG_SET_PVP_TITLE;
        case SMSG_PVP_CREDIT: return BUILD6005_SMSG_PVP_CREDIT;
        case SMSG_AUCTION_REMOVED_NOTIFICATION: return BUILD6005_SMSG_AUCTION_REMOVED_NOTIFICATION;
        case CMSG_GROUP_RAID_CONVERT: return BUILD6005_CMSG_GROUP_RAID_CONVERT;
        case CMSG_GROUP_ASSISTANT_LEADER: return BUILD6005_CMSG_GROUP_ASSISTANT_LEADER;
        case CMSG_BUYBACK_ITEM: return BUILD6005_CMSG_BUYBACK_ITEM;
        case SMSG_SERVER_MESSAGE: return BUILD6005_SMSG_SERVER_MESSAGE;
        case CMSG_MEETINGSTONE_JOIN: return BUILD6005_CMSG_MEETINGSTONE_JOIN; // lua: SetSavedInstanceExtend;
        case CMSG_MEETINGSTONE_LEAVE: return BUILD6005_CMSG_MEETINGSTONE_LEAVE;
        case CMSG_MEETINGSTONE_CHEAT: return BUILD6005_CMSG_MEETINGSTONE_CHEAT;
        case SMSG_MEETINGSTONE_SETQUEUE: return BUILD6005_SMSG_MEETINGSTONE_SETQUEUE;
        case CMSG_MEETINGSTONE_INFO: return BUILD6005_CMSG_MEETINGSTONE_INFO;
        case SMSG_MEETINGSTONE_COMPLETE: return BUILD6005_SMSG_MEETINGSTONE_COMPLETE;
        case SMSG_MEETINGSTONE_IN_PROGRESS: return BUILD6005_SMSG_MEETINGSTONE_IN_PROGRESS;
        case SMSG_MEETINGSTONE_MEMBER_ADDED: return BUILD6005_SMSG_MEETINGSTONE_MEMBER_ADDED;
        case CMSG_GMTICKETSYSTEM_TOGGLE: return BUILD6005_CMSG_GMTICKETSYSTEM_TOGGLE;
        case CMSG_CANCEL_GROWTH_AURA: return BUILD6005_CMSG_CANCEL_GROWTH_AURA;
        case SMSG_CANCEL_AUTO_REPEAT: return BUILD6005_SMSG_CANCEL_AUTO_REPEAT;
        case SMSG_STANDSTATE_UPDATE: return BUILD6005_SMSG_STANDSTATE_UPDATE;
        case SMSG_LOOT_ALL_PASSED: return BUILD6005_SMSG_LOOT_ALL_PASSED;
        case SMSG_LOOT_ROLL_WON: return BUILD6005_SMSG_LOOT_ROLL_WON;
        case CMSG_LOOT_ROLL: return BUILD6005_CMSG_LOOT_ROLL;
        case SMSG_LOOT_START_ROLL: return BUILD6005_SMSG_LOOT_START_ROLL;
        case SMSG_LOOT_ROLL: return BUILD6005_SMSG_LOOT_ROLL;
        case CMSG_LOOT_MASTER_GIVE: return BUILD6005_CMSG_LOOT_MASTER_GIVE;
        case SMSG_LOOT_MASTER_LIST: return BUILD6005_SMSG_LOOT_MASTER_LIST;
        case SMSG_SET_FORCED_REACTIONS: return BUILD6005_SMSG_SET_FORCED_REACTIONS;
        case SMSG_SPELL_FAILED_OTHER: return BUILD6005_SMSG_SPELL_FAILED_OTHER;
        case SMSG_GAMEOBJECT_RESET_STATE: return BUILD6005_SMSG_GAMEOBJECT_RESET_STATE;
        case CMSG_REPAIR_ITEM: return BUILD6005_CMSG_REPAIR_ITEM;
        case SMSG_CHAT_PLAYER_NOT_FOUND: return BUILD6005_SMSG_CHAT_PLAYER_NOT_FOUND;
        case MSG_TALENT_WIPE_CONFIRM: return BUILD6005_MSG_TALENT_WIPE_CONFIRM;
        case SMSG_SUMMON_REQUEST: return BUILD6005_SMSG_SUMMON_REQUEST;
        case CMSG_SUMMON_RESPONSE: return BUILD6005_CMSG_SUMMON_RESPONSE;
        case MSG_MOVE_TOGGLE_GRAVITY_CHEAT: return BUILD6005_MSG_MOVE_TOGGLE_GRAVITY_CHEAT;
        case SMSG_MONSTER_MOVE_TRANSPORT: return BUILD6005_SMSG_MONSTER_MOVE_TRANSPORT;
        case SMSG_PET_BROKEN: return BUILD6005_SMSG_PET_BROKEN;
        case MSG_MOVE_FEATHER_FALL: return BUILD6005_MSG_MOVE_FEATHER_FALL;
        case MSG_MOVE_WATER_WALK: return BUILD6005_MSG_MOVE_WATER_WALK;
        case CMSG_SERVER_BROADCAST: return BUILD6005_CMSG_SERVER_BROADCAST;
        case CMSG_SELF_RES: return BUILD6005_CMSG_SELF_RES;
        case SMSG_FEIGN_DEATH_RESISTED: return BUILD6005_SMSG_FEIGN_DEATH_RESISTED;
        case CMSG_RUN_SCRIPT: return BUILD6005_CMSG_RUN_SCRIPT;
        case SMSG_SCRIPT_MESSAGE: return BUILD6005_SMSG_SCRIPT_MESSAGE;
        case SMSG_DUEL_COUNTDOWN: return BUILD6005_SMSG_DUEL_COUNTDOWN;
        case SMSG_AREA_TRIGGER_MESSAGE: return BUILD6005_SMSG_AREA_TRIGGER_MESSAGE;
        case CMSG_TOGGLE_HELM: return BUILD6005_CMSG_TOGGLE_HELM;
        case CMSG_TOGGLE_CLOAK: return BUILD6005_CMSG_TOGGLE_CLOAK;
        case SMSG_MEETINGSTONE_JOINFAILED: return BUILD6005_SMSG_MEETINGSTONE_JOINFAILED;
        case SMSG_PLAYER_SKINNED: return BUILD6005_SMSG_PLAYER_SKINNED;
        case SMSG_DURABILITY_DAMAGE_DEATH: return BUILD6005_SMSG_DURABILITY_DAMAGE_DEATH;
        case CMSG_SET_EXPLORATION: return BUILD6005_CMSG_SET_EXPLORATION;
        case CMSG_SET_ACTIONBAR_TOGGLES: return BUILD6005_CMSG_SET_ACTIONBAR_TOGGLES;
        case UMSG_DELETE_GUILD_CHARTER: return BUILD6005_UMSG_DELETE_GUILD_CHARTER;
        case MSG_PETITION_RENAME: return BUILD6005_MSG_PETITION_RENAME;
        case SMSG_INIT_WORLD_STATES: return BUILD6005_SMSG_INIT_WORLD_STATES;
        case SMSG_UPDATE_WORLD_STATE: return BUILD6005_SMSG_UPDATE_WORLD_STATE;
        case CMSG_ITEM_NAME_QUERY: return BUILD6005_CMSG_ITEM_NAME_QUERY;
        case SMSG_ITEM_NAME_QUERY_RESPONSE: return BUILD6005_SMSG_ITEM_NAME_QUERY_RESPONSE;
        case SMSG_PET_ACTION_FEEDBACK: return BUILD6005_SMSG_PET_ACTION_FEEDBACK;
        case CMSG_CHAR_RENAME: return BUILD6005_CMSG_CHAR_RENAME;
        case SMSG_CHAR_RENAME: return BUILD6005_SMSG_CHAR_RENAME;
        case CMSG_MOVE_SPLINE_DONE: return BUILD6005_CMSG_MOVE_SPLINE_DONE;
        case CMSG_MOVE_FALL_RESET: return BUILD6005_CMSG_MOVE_FALL_RESET;
        case SMSG_INSTANCE_SAVE_CREATED: return BUILD6005_SMSG_INSTANCE_SAVE_CREATED;
        case SMSG_RAID_INSTANCE_INFO: return BUILD6005_SMSG_RAID_INSTANCE_INFO;
        case CMSG_REQUEST_RAID_INFO: return BUILD6005_CMSG_REQUEST_RAID_INFO;
        case CMSG_MOVE_TIME_SKIPPED: return BUILD6005_CMSG_MOVE_TIME_SKIPPED;
        case CMSG_MOVE_FEATHER_FALL_ACK: return BUILD6005_CMSG_MOVE_FEATHER_FALL_ACK;
        case CMSG_MOVE_WATER_WALK_ACK: return BUILD6005_CMSG_MOVE_WATER_WALK_ACK;
        case CMSG_MOVE_NOT_ACTIVE_MOVER: return BUILD6005_CMSG_MOVE_NOT_ACTIVE_MOVER;
        case SMSG_PLAY_SOUND: return BUILD6005_SMSG_PLAY_SOUND;
        case CMSG_BATTLEFIELD_STATUS: return BUILD6005_CMSG_BATTLEFIELD_STATUS;
        case SMSG_BATTLEFIELD_STATUS: return BUILD6005_SMSG_BATTLEFIELD_STATUS;
        case CMSG_BATTLEFIELD_PORT: return BUILD6005_CMSG_BATTLEFIELD_PORT;
        case MSG_INSPECT_HONOR_STATS: return BUILD6005_MSG_INSPECT_HONOR_STATS;
        case CMSG_BATTLEMASTER_HELLO: return BUILD6005_CMSG_BATTLEMASTER_HELLO;
        case CMSG_MOVE_START_SWIM_CHEAT: return BUILD6005_CMSG_MOVE_START_SWIM_CHEAT;
        case CMSG_MOVE_STOP_SWIM_CHEAT: return BUILD6005_CMSG_MOVE_STOP_SWIM_CHEAT;
        case SMSG_FORCE_WALK_SPEED_CHANGE: return BUILD6005_SMSG_FORCE_WALK_SPEED_CHANGE;
        case CMSG_FORCE_WALK_SPEED_CHANGE_ACK: return BUILD6005_CMSG_FORCE_WALK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_SWIM_BACK_SPEED_CHANGE: return BUILD6005_SMSG_FORCE_SWIM_BACK_SPEED_CHANGE;
        case CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK: return BUILD6005_CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_TURN_RATE_CHANGE: return BUILD6005_SMSG_FORCE_TURN_RATE_CHANGE;
        case CMSG_FORCE_TURN_RATE_CHANGE_ACK: return BUILD6005_CMSG_FORCE_TURN_RATE_CHANGE_ACK;
        case MSG_PVP_LOG_DATA: return BUILD6005_MSG_PVP_LOG_DATA;
        case CMSG_LEAVE_BATTLEFIELD: return BUILD6005_CMSG_LEAVE_BATTLEFIELD;
        case CMSG_AREA_SPIRIT_HEALER_QUERY: return BUILD6005_CMSG_AREA_SPIRIT_HEALER_QUERY;
        case CMSG_AREA_SPIRIT_HEALER_QUEUE: return BUILD6005_CMSG_AREA_SPIRIT_HEALER_QUEUE;
        case SMSG_AREA_SPIRIT_HEALER_TIME: return BUILD6005_SMSG_AREA_SPIRIT_HEALER_TIME;
        case CMSG_GM_UNTEACH: return BUILD6005_CMSG_GM_UNTEACH;
        case SMSG_WARDEN_DATA: return BUILD6005_SMSG_WARDEN_DATA;
        case CMSG_WARDEN_DATA: return BUILD6005_CMSG_WARDEN_DATA;
        case SMSG_GROUP_JOINED_BATTLEGROUND: return BUILD6005_SMSG_GROUP_JOINED_BATTLEGROUND;
        case MSG_BATTLEGROUND_PLAYER_POSITIONS: return BUILD6005_MSG_BATTLEGROUND_PLAYER_POSITIONS;
        case CMSG_PET_STOP_ATTACK: return BUILD6005_CMSG_PET_STOP_ATTACK;
        case SMSG_BINDER_CONFIRM: return BUILD6005_SMSG_BINDER_CONFIRM;
        case SMSG_BATTLEGROUND_PLAYER_JOINED: return BUILD6005_SMSG_BATTLEGROUND_PLAYER_JOINED;
        case SMSG_BATTLEGROUND_PLAYER_LEFT: return BUILD6005_SMSG_BATTLEGROUND_PLAYER_LEFT;
        case CMSG_BATTLEMASTER_JOIN: return BUILD6005_CMSG_BATTLEMASTER_JOIN;
        case SMSG_ADDON_INFO: return BUILD6005_SMSG_ADDON_INFO;
        case CMSG_PET_UNLEARN: return BUILD6005_CMSG_PET_UNLEARN;
        case SMSG_PET_UNLEARN_CONFIRM: return BUILD6005_SMSG_PET_UNLEARN_CONFIRM;
        case SMSG_PARTY_MEMBER_STATS_FULL: return BUILD6005_SMSG_PARTY_MEMBER_STATS_FULL;
        case CMSG_PET_SPELL_AUTOCAST: return BUILD6005_CMSG_PET_SPELL_AUTOCAST;
        case SMSG_WEATHER: return BUILD6005_SMSG_WEATHER;
        case SMSG_PLAY_TIME_WARNING: return BUILD6005_SMSG_PLAY_TIME_WARNING;
        case SMSG_MINIGAME_SETUP: return BUILD6005_SMSG_MINIGAME_SETUP;
        case SMSG_MINIGAME_STATE: return BUILD6005_SMSG_MINIGAME_STATE;
        case CMSG_MINIGAME_MOVE: return BUILD6005_CMSG_MINIGAME_MOVE;
        case SMSG_MINIGAME_MOVE_FAILED: return BUILD6005_SMSG_MINIGAME_MOVE_FAILED;
        case SMSG_RAID_INSTANCE_MESSAGE: return BUILD6005_SMSG_RAID_INSTANCE_MESSAGE;
        case SMSG_COMPRESSED_MOVES: return BUILD6005_SMSG_COMPRESSED_MOVES;
        case CMSG_GUILD_INFO_TEXT: return BUILD6005_CMSG_GUILD_INFO_TEXT;
        case SMSG_CHAT_RESTRICTED: return BUILD6005_SMSG_CHAT_RESTRICTED;
        case SMSG_SPLINE_SET_RUN_SPEED: return BUILD6005_SMSG_SPLINE_SET_RUN_SPEED;
        case SMSG_SPLINE_SET_RUN_BACK_SPEED: return BUILD6005_SMSG_SPLINE_SET_RUN_BACK_SPEED;
        case SMSG_SPLINE_SET_SWIM_SPEED: return BUILD6005_SMSG_SPLINE_SET_SWIM_SPEED;
        case SMSG_SPLINE_SET_WALK_SPEED: return BUILD6005_SMSG_SPLINE_SET_WALK_SPEED;
        case SMSG_SPLINE_SET_SWIM_BACK_SPEED: return BUILD6005_SMSG_SPLINE_SET_SWIM_BACK_SPEED;
        case SMSG_SPLINE_SET_TURN_RATE: return BUILD6005_SMSG_SPLINE_SET_TURN_RATE;
        case SMSG_SPLINE_MOVE_UNROOT: return BUILD6005_SMSG_SPLINE_MOVE_UNROOT;
        case SMSG_SPLINE_MOVE_FEATHER_FALL: return BUILD6005_SMSG_SPLINE_MOVE_FEATHER_FALL;
        case SMSG_SPLINE_MOVE_NORMAL_FALL: return BUILD6005_SMSG_SPLINE_MOVE_NORMAL_FALL;
        case SMSG_SPLINE_MOVE_SET_HOVER: return BUILD6005_SMSG_SPLINE_MOVE_SET_HOVER;
        case SMSG_SPLINE_MOVE_UNSET_HOVER: return BUILD6005_SMSG_SPLINE_MOVE_UNSET_HOVER;
        case SMSG_SPLINE_MOVE_WATER_WALK: return BUILD6005_SMSG_SPLINE_MOVE_WATER_WALK;
        case SMSG_SPLINE_MOVE_LAND_WALK: return BUILD6005_SMSG_SPLINE_MOVE_LAND_WALK;
        case SMSG_SPLINE_MOVE_START_SWIM: return BUILD6005_SMSG_SPLINE_MOVE_START_SWIM;
        case SMSG_SPLINE_MOVE_STOP_SWIM: return BUILD6005_SMSG_SPLINE_MOVE_STOP_SWIM;
        case SMSG_SPLINE_MOVE_SET_RUN_MODE: return BUILD6005_SMSG_SPLINE_MOVE_SET_RUN_MODE;
        case SMSG_SPLINE_MOVE_SET_WALK_MODE: return BUILD6005_SMSG_SPLINE_MOVE_SET_WALK_MODE;
        case CMSG_GM_NUKE_ACCOUNT: return BUILD6005_CMSG_GM_NUKE_ACCOUNT;
        case MSG_GM_DESTROY_CORPSE: return BUILD6005_MSG_GM_DESTROY_CORPSE;
        case CMSG_GM_DESTROY_ONLINE_CORPSE: return BUILD6005_CMSG_GM_DESTROY_ONLINE_CORPSE;
        case CMSG_ACTIVATETAXIEXPRESS: return BUILD6005_CMSG_ACTIVATETAXIEXPRESS;
        case SMSG_SET_FACTION_ATWAR: return BUILD6005_SMSG_SET_FACTION_ATWAR;
        case SMSG_GAMETIMEBIAS_SET: return BUILD6005_SMSG_GAMETIMEBIAS_SET;
        case CMSG_DEBUG_ACTIONS_START: return BUILD6005_CMSG_DEBUG_ACTIONS_START;
        case CMSG_DEBUG_ACTIONS_STOP: return BUILD6005_CMSG_DEBUG_ACTIONS_STOP;
        case CMSG_SET_FACTION_INACTIVE: return BUILD6005_CMSG_SET_FACTION_INACTIVE;
        case CMSG_SET_WATCHED_FACTION: return BUILD6005_CMSG_SET_WATCHED_FACTION;
        case MSG_MOVE_TIME_SKIPPED: return BUILD6005_MSG_MOVE_TIME_SKIPPED;
        case SMSG_SPLINE_MOVE_ROOT: return BUILD6005_SMSG_SPLINE_MOVE_ROOT;
        case CMSG_SET_EXPLORATION_ALL: return BUILD6005_CMSG_SET_EXPLORATION_ALL;
        case SMSG_INVALIDATE_PLAYER: return BUILD6005_SMSG_INVALIDATE_PLAYER;
        case CMSG_RESET_INSTANCES: return BUILD6005_CMSG_RESET_INSTANCES;
        case SMSG_INSTANCE_RESET: return BUILD6005_SMSG_INSTANCE_RESET;
        case SMSG_INSTANCE_RESET_FAILED: return BUILD6005_SMSG_INSTANCE_RESET_FAILED;
        case SMSG_UPDATE_LAST_INSTANCE: return BUILD6005_SMSG_UPDATE_LAST_INSTANCE;
        case MSG_RAID_TARGET_UPDATE: return BUILD6005_MSG_RAID_TARGET_UPDATE;
        case MSG_RAID_READY_CHECK: return BUILD6005_MSG_RAID_READY_CHECK;
        case CMSG_LUA_USAGE: return BUILD6005_CMSG_LUA_USAGE;
        case SMSG_PET_ACTION_SOUND: return BUILD6005_SMSG_PET_ACTION_SOUND;
        case SMSG_PET_DISMISS_SOUND: return BUILD6005_SMSG_PET_DISMISS_SOUND;
        case SMSG_GHOSTEE_GONE: return BUILD6005_SMSG_GHOSTEE_GONE;
        case CMSG_GM_UPDATE_TICKET_STATUS: return BUILD6005_CMSG_GM_UPDATE_TICKET_STATUS;
        case SMSG_GM_TICKET_STATUS_UPDATE: return BUILD6005_SMSG_GM_TICKET_STATUS_UPDATE;
        case MSG_SET_DUNGEON_DIFFICULTY: return BUILD6005_MSG_SET_DUNGEON_DIFFICULTY;
        case CMSG_GMSURVEY_SUBMIT: return BUILD6005_CMSG_GMSURVEY_SUBMIT;
        case SMSG_UPDATE_INSTANCE_OWNERSHIP: return BUILD6005_SMSG_UPDATE_INSTANCE_OWNERSHIP;
        case CMSG_IGNORE_KNOCKBACK_CHEAT: return BUILD6005_CMSG_IGNORE_KNOCKBACK_CHEAT;
        case SMSG_CHAT_PLAYER_AMBIGUOUS: return BUILD6005_SMSG_CHAT_PLAYER_AMBIGUOUS;
        case MSG_DELAY_GHOST_TELEPORT: return BUILD6005_MSG_DELAY_GHOST_TELEPORT;
        case SMSG_SPELLINSTAKILLLOG: return BUILD6005_SMSG_SPELLINSTAKILLLOG;
        case SMSG_SPELL_UPDATE_CHAIN_TARGETS: return BUILD6005_SMSG_SPELL_UPDATE_CHAIN_TARGETS;
        case CMSG_CHAT_FILTERED: return BUILD6005_CMSG_CHAT_FILTERED;
        case SMSG_EXPECTED_SPAM_RECORDS: return BUILD6005_SMSG_EXPECTED_SPAM_RECORDS;
        case SMSG_SPELLSTEALLOG: return BUILD6005_SMSG_SPELLSTEALLOG;
        case CMSG_LOTTERY_QUERY_OBSOLETE: return BUILD6005_CMSG_LOTTERY_QUERY_OBSOLETE;
        case SMSG_LOTTERY_QUERY_RESULT_OBSOLETE: return BUILD6005_SMSG_LOTTERY_QUERY_RESULT_OBSOLETE;
        case CMSG_BUY_LOTTERY_TICKET_OBSOLETE: return BUILD6005_CMSG_BUY_LOTTERY_TICKET_OBSOLETE;
        case SMSG_LOTTERY_RESULT_OBSOLETE: return BUILD6005_SMSG_LOTTERY_RESULT_OBSOLETE;
        case SMSG_CHARACTER_PROFILE: return BUILD6005_SMSG_CHARACTER_PROFILE;
        case SMSG_CHARACTER_PROFILE_REALM_CONNECTED: return BUILD6005_SMSG_CHARACTER_PROFILE_REALM_CONNECTED;
        case SMSG_UNK: return BUILD6005_SMSG_UNK;
        case SMSG_DEFENSE_MESSAGE: return BUILD6005_SMSG_DEFENSE_MESSAGE;
        default: return 0xFFFF;
        }
    case 6141:
        switch (logicalOpcode)
        {
        case MSG_NULL_ACTION: return BUILD6141_MSG_NULL_ACTION;
        case CMSG_BOOTME: return BUILD6141_CMSG_BOOTME;
        case CMSG_DBLOOKUP: return BUILD6141_CMSG_DBLOOKUP;
        case SMSG_DBLOOKUP: return BUILD6141_SMSG_DBLOOKUP;
        case CMSG_QUERY_OBJECT_POSITION: return BUILD6141_CMSG_QUERY_OBJECT_POSITION;
        case SMSG_QUERY_OBJECT_POSITION: return BUILD6141_SMSG_QUERY_OBJECT_POSITION;
        case CMSG_QUERY_OBJECT_ROTATION: return BUILD6141_CMSG_QUERY_OBJECT_ROTATION;
        case SMSG_QUERY_OBJECT_ROTATION: return BUILD6141_SMSG_QUERY_OBJECT_ROTATION;
        case CMSG_WORLD_TELEPORT: return BUILD6141_CMSG_WORLD_TELEPORT;
        case CMSG_TELEPORT_TO_UNIT: return BUILD6141_CMSG_TELEPORT_TO_UNIT;
        case CMSG_ZONE_MAP: return BUILD6141_CMSG_ZONE_MAP;
        case SMSG_ZONE_MAP: return BUILD6141_SMSG_ZONE_MAP;
        case CMSG_DEBUG_CHANGECELLZONE: return BUILD6141_CMSG_DEBUG_CHANGECELLZONE;
        case CMSG_EMBLAZON_TABARD_OBSOLETE: return BUILD6141_CMSG_EMBLAZON_TABARD_OBSOLETE;
        case CMSG_UNEMBLAZON_TABARD_OBSOLETE: return BUILD6141_CMSG_UNEMBLAZON_TABARD_OBSOLETE;
        case CMSG_RECHARGE: return BUILD6141_CMSG_RECHARGE;
        case CMSG_LEARN_SPELL: return BUILD6141_CMSG_LEARN_SPELL;
        case CMSG_CREATEMONSTER: return BUILD6141_CMSG_CREATEMONSTER;
        case CMSG_DESTROYMONSTER: return BUILD6141_CMSG_DESTROYMONSTER;
        case CMSG_CREATEITEM: return BUILD6141_CMSG_CREATEITEM;
        case CMSG_CREATEGAMEOBJECT: return BUILD6141_CMSG_CREATEGAMEOBJECT;
        case SMSG_CHECK_FOR_BOTS: return BUILD6141_SMSG_CHECK_FOR_BOTS;
        case CMSG_MAKEMONSTERATTACKGUID: return BUILD6141_CMSG_MAKEMONSTERATTACKGUID;
        case CMSG_BOT_DETECTED2: return BUILD6141_CMSG_BOT_DETECTED2;
        case CMSG_FORCEACTION: return BUILD6141_CMSG_FORCEACTION;
        case CMSG_FORCEACTIONONOTHER: return BUILD6141_CMSG_FORCEACTIONONOTHER;
        case CMSG_FORCEACTIONSHOW: return BUILD6141_CMSG_FORCEACTIONSHOW;
        case SMSG_FORCEACTIONSHOW: return BUILD6141_SMSG_FORCEACTIONSHOW;
        case CMSG_PETGODMODE: return BUILD6141_CMSG_PETGODMODE;
        case SMSG_PETGODMODE: return BUILD6141_SMSG_PETGODMODE;
        case SMSG_DEBUGINFOSPELLMISS_OBSOLETE: return BUILD6141_SMSG_DEBUGINFOSPELLMISS_OBSOLETE;
        case CMSG_WEATHER_SPEED_CHEAT: return BUILD6141_CMSG_WEATHER_SPEED_CHEAT;
        case CMSG_UNDRESSPLAYER: return BUILD6141_CMSG_UNDRESSPLAYER;
        case CMSG_BEASTMASTER: return BUILD6141_CMSG_BEASTMASTER;
        case CMSG_GODMODE: return BUILD6141_CMSG_GODMODE;
        case SMSG_GODMODE: return BUILD6141_SMSG_GODMODE;
        case CMSG_CHEAT_SETMONEY: return BUILD6141_CMSG_CHEAT_SETMONEY;
        case CMSG_LEVEL_CHEAT: return BUILD6141_CMSG_LEVEL_CHEAT;
        case CMSG_PET_LEVEL_CHEAT: return BUILD6141_CMSG_PET_LEVEL_CHEAT;
        case CMSG_SET_WORLDSTATE: return BUILD6141_CMSG_SET_WORLDSTATE;
        case CMSG_COOLDOWN_CHEAT: return BUILD6141_CMSG_COOLDOWN_CHEAT;
        case CMSG_USE_SKILL_CHEAT: return BUILD6141_CMSG_USE_SKILL_CHEAT;
        case CMSG_FLAG_QUEST: return BUILD6141_CMSG_FLAG_QUEST;
        case CMSG_FLAG_QUEST_FINISH: return BUILD6141_CMSG_FLAG_QUEST_FINISH;
        case CMSG_CLEAR_QUEST: return BUILD6141_CMSG_CLEAR_QUEST;
        case CMSG_SEND_EVENT: return BUILD6141_CMSG_SEND_EVENT;
        case CMSG_DEBUG_AISTATE: return BUILD6141_CMSG_DEBUG_AISTATE;
        case SMSG_DEBUG_AISTATE: return BUILD6141_SMSG_DEBUG_AISTATE;
        case CMSG_DISABLE_PVP_CHEAT: return BUILD6141_CMSG_DISABLE_PVP_CHEAT;
        case CMSG_ADVANCE_SPAWN_TIME: return BUILD6141_CMSG_ADVANCE_SPAWN_TIME;
        case CMSG_PVP_PORT_OBSOLETE: return BUILD6141_CMSG_PVP_PORT_OBSOLETE;
        case CMSG_AUTH_SRP6_BEGIN: return BUILD6141_CMSG_AUTH_SRP6_BEGIN;
        case CMSG_AUTH_SRP6_PROOF: return BUILD6141_CMSG_AUTH_SRP6_PROOF;
        case CMSG_AUTH_SRP6_RECODE: return BUILD6141_CMSG_AUTH_SRP6_RECODE;
        case CMSG_CHAR_CREATE: return BUILD6141_CMSG_CHAR_CREATE;
        case CMSG_CHAR_ENUM: return BUILD6141_CMSG_CHAR_ENUM;
        case CMSG_CHAR_DELETE: return BUILD6141_CMSG_CHAR_DELETE;
        case SMSG_AUTH_SRP6_RESPONSE: return BUILD6141_SMSG_AUTH_SRP6_RESPONSE;
        case SMSG_CHAR_CREATE: return BUILD6141_SMSG_CHAR_CREATE;
        case SMSG_CHAR_ENUM: return BUILD6141_SMSG_CHAR_ENUM;
        case SMSG_CHAR_DELETE: return BUILD6141_SMSG_CHAR_DELETE;
        case CMSG_PLAYER_LOGIN: return BUILD6141_CMSG_PLAYER_LOGIN;
        case SMSG_NEW_WORLD: return BUILD6141_SMSG_NEW_WORLD;
        case SMSG_TRANSFER_PENDING: return BUILD6141_SMSG_TRANSFER_PENDING;
        case SMSG_TRANSFER_ABORTED: return BUILD6141_SMSG_TRANSFER_ABORTED;
        case SMSG_CHARACTER_LOGIN_FAILED: return BUILD6141_SMSG_CHARACTER_LOGIN_FAILED;
        case SMSG_LOGIN_SETTIMESPEED: return BUILD6141_SMSG_LOGIN_SETTIMESPEED;
        case SMSG_GAMETIME_UPDATE: return BUILD6141_SMSG_GAMETIME_UPDATE;
        case CMSG_GAMETIME_SET: return BUILD6141_CMSG_GAMETIME_SET;
        case SMSG_GAMETIME_SET: return BUILD6141_SMSG_GAMETIME_SET;
        case CMSG_GAMESPEED_SET: return BUILD6141_CMSG_GAMESPEED_SET;
        case SMSG_GAMESPEED_SET: return BUILD6141_SMSG_GAMESPEED_SET;
        case CMSG_SERVERTIME: return BUILD6141_CMSG_SERVERTIME;
        case SMSG_SERVERTIME: return BUILD6141_SMSG_SERVERTIME;
        case CMSG_PLAYER_LOGOUT: return BUILD6141_CMSG_PLAYER_LOGOUT;
        case CMSG_LOGOUT_REQUEST: return BUILD6141_CMSG_LOGOUT_REQUEST;
        case SMSG_LOGOUT_RESPONSE: return BUILD6141_SMSG_LOGOUT_RESPONSE;
        case SMSG_LOGOUT_COMPLETE: return BUILD6141_SMSG_LOGOUT_COMPLETE;
        case CMSG_LOGOUT_CANCEL: return BUILD6141_CMSG_LOGOUT_CANCEL;
        case SMSG_LOGOUT_CANCEL_ACK: return BUILD6141_SMSG_LOGOUT_CANCEL_ACK;
        case CMSG_NAME_QUERY: return BUILD6141_CMSG_NAME_QUERY;
        case SMSG_NAME_QUERY_RESPONSE: return BUILD6141_SMSG_NAME_QUERY_RESPONSE;
        case CMSG_PET_NAME_QUERY: return BUILD6141_CMSG_PET_NAME_QUERY;
        case SMSG_PET_NAME_QUERY_RESPONSE: return BUILD6141_SMSG_PET_NAME_QUERY_RESPONSE;
        case CMSG_GUILD_QUERY: return BUILD6141_CMSG_GUILD_QUERY;
        case SMSG_GUILD_QUERY_RESPONSE: return BUILD6141_SMSG_GUILD_QUERY_RESPONSE;
        case CMSG_ITEM_QUERY_SINGLE: return BUILD6141_CMSG_ITEM_QUERY_SINGLE;
        case CMSG_ITEM_QUERY_MULTIPLE: return BUILD6141_CMSG_ITEM_QUERY_MULTIPLE;
        case SMSG_ITEM_QUERY_SINGLE_RESPONSE: return BUILD6141_SMSG_ITEM_QUERY_SINGLE_RESPONSE;
        case SMSG_ITEM_QUERY_MULTIPLE_RESPONSE: return BUILD6141_SMSG_ITEM_QUERY_MULTIPLE_RESPONSE;
        case CMSG_PAGE_TEXT_QUERY: return BUILD6141_CMSG_PAGE_TEXT_QUERY;
        case SMSG_PAGE_TEXT_QUERY_RESPONSE: return BUILD6141_SMSG_PAGE_TEXT_QUERY_RESPONSE;
        case CMSG_QUEST_QUERY: return BUILD6141_CMSG_QUEST_QUERY;
        case SMSG_QUEST_QUERY_RESPONSE: return BUILD6141_SMSG_QUEST_QUERY_RESPONSE;
        case CMSG_GAMEOBJECT_QUERY: return BUILD6141_CMSG_GAMEOBJECT_QUERY;
        case SMSG_GAMEOBJECT_QUERY_RESPONSE: return BUILD6141_SMSG_GAMEOBJECT_QUERY_RESPONSE;
        case CMSG_CREATURE_QUERY: return BUILD6141_CMSG_CREATURE_QUERY;
        case SMSG_CREATURE_QUERY_RESPONSE: return BUILD6141_SMSG_CREATURE_QUERY_RESPONSE;
        case CMSG_WHO: return BUILD6141_CMSG_WHO;
        case SMSG_WHO: return BUILD6141_SMSG_WHO;
        case CMSG_WHOIS: return BUILD6141_CMSG_WHOIS;
        case SMSG_WHOIS: return BUILD6141_SMSG_WHOIS;
        case CMSG_FRIEND_LIST: return BUILD6141_CMSG_FRIEND_LIST;
        case SMSG_FRIEND_LIST: return BUILD6141_SMSG_FRIEND_LIST;
        case SMSG_FRIEND_STATUS: return BUILD6141_SMSG_FRIEND_STATUS;
        case CMSG_ADD_FRIEND: return BUILD6141_CMSG_ADD_FRIEND;
        case CMSG_DEL_FRIEND: return BUILD6141_CMSG_DEL_FRIEND;
        case SMSG_IGNORE_LIST: return BUILD6141_SMSG_IGNORE_LIST;
        case CMSG_ADD_IGNORE: return BUILD6141_CMSG_ADD_IGNORE;
        case CMSG_DEL_IGNORE: return BUILD6141_CMSG_DEL_IGNORE;
        case CMSG_GROUP_INVITE: return BUILD6141_CMSG_GROUP_INVITE;
        case SMSG_GROUP_INVITE: return BUILD6141_SMSG_GROUP_INVITE;
        case CMSG_GROUP_CANCEL: return BUILD6141_CMSG_GROUP_CANCEL;
        case SMSG_GROUP_CANCEL: return BUILD6141_SMSG_GROUP_CANCEL;
        case CMSG_GROUP_ACCEPT: return BUILD6141_CMSG_GROUP_ACCEPT;
        case CMSG_GROUP_DECLINE: return BUILD6141_CMSG_GROUP_DECLINE;
        case SMSG_GROUP_DECLINE: return BUILD6141_SMSG_GROUP_DECLINE;
        case CMSG_GROUP_UNINVITE: return BUILD6141_CMSG_GROUP_UNINVITE;
        case CMSG_GROUP_UNINVITE_GUID: return BUILD6141_CMSG_GROUP_UNINVITE_GUID;
        case SMSG_GROUP_UNINVITE: return BUILD6141_SMSG_GROUP_UNINVITE;
        case CMSG_GROUP_SET_LEADER: return BUILD6141_CMSG_GROUP_SET_LEADER;
        case SMSG_GROUP_SET_LEADER: return BUILD6141_SMSG_GROUP_SET_LEADER;
        case CMSG_LOOT_METHOD: return BUILD6141_CMSG_LOOT_METHOD;
        case CMSG_GROUP_DISBAND: return BUILD6141_CMSG_GROUP_DISBAND;
        case SMSG_GROUP_DESTROYED: return BUILD6141_SMSG_GROUP_DESTROYED;
        case SMSG_GROUP_LIST: return BUILD6141_SMSG_GROUP_LIST;
        case SMSG_PARTY_MEMBER_STATS: return BUILD6141_SMSG_PARTY_MEMBER_STATS;
        case SMSG_PARTY_COMMAND_RESULT: return BUILD6141_SMSG_PARTY_COMMAND_RESULT;
        case UMSG_UPDATE_GROUP_MEMBERS: return BUILD6141_UMSG_UPDATE_GROUP_MEMBERS;
        case CMSG_GUILD_CREATE: return BUILD6141_CMSG_GUILD_CREATE;
        case CMSG_GUILD_INVITE: return BUILD6141_CMSG_GUILD_INVITE;
        case SMSG_GUILD_INVITE: return BUILD6141_SMSG_GUILD_INVITE;
        case CMSG_GUILD_ACCEPT: return BUILD6141_CMSG_GUILD_ACCEPT;
        case CMSG_GUILD_DECLINE: return BUILD6141_CMSG_GUILD_DECLINE;
        case SMSG_GUILD_DECLINE: return BUILD6141_SMSG_GUILD_DECLINE;
        case CMSG_GUILD_INFO: return BUILD6141_CMSG_GUILD_INFO;
        case SMSG_GUILD_INFO: return BUILD6141_SMSG_GUILD_INFO;
        case CMSG_GUILD_ROSTER: return BUILD6141_CMSG_GUILD_ROSTER;
        case SMSG_GUILD_ROSTER: return BUILD6141_SMSG_GUILD_ROSTER;
        case CMSG_GUILD_PROMOTE: return BUILD6141_CMSG_GUILD_PROMOTE;
        case CMSG_GUILD_DEMOTE: return BUILD6141_CMSG_GUILD_DEMOTE;
        case CMSG_GUILD_LEAVE: return BUILD6141_CMSG_GUILD_LEAVE;
        case CMSG_GUILD_REMOVE: return BUILD6141_CMSG_GUILD_REMOVE;
        case CMSG_GUILD_DISBAND: return BUILD6141_CMSG_GUILD_DISBAND;
        case CMSG_GUILD_LEADER: return BUILD6141_CMSG_GUILD_LEADER;
        case CMSG_GUILD_MOTD: return BUILD6141_CMSG_GUILD_MOTD;
        case SMSG_GUILD_EVENT: return BUILD6141_SMSG_GUILD_EVENT;
        case SMSG_GUILD_COMMAND_RESULT: return BUILD6141_SMSG_GUILD_COMMAND_RESULT;
        case UMSG_UPDATE_GUILD: return BUILD6141_UMSG_UPDATE_GUILD;
        case CMSG_MESSAGECHAT: return BUILD6141_CMSG_MESSAGECHAT;
        case SMSG_MESSAGECHAT: return BUILD6141_SMSG_MESSAGECHAT;
        case CMSG_JOIN_CHANNEL: return BUILD6141_CMSG_JOIN_CHANNEL;
        case CMSG_LEAVE_CHANNEL: return BUILD6141_CMSG_LEAVE_CHANNEL;
        case SMSG_CHANNEL_NOTIFY: return BUILD6141_SMSG_CHANNEL_NOTIFY;
        case CMSG_CHANNEL_LIST: return BUILD6141_CMSG_CHANNEL_LIST;
        case SMSG_CHANNEL_LIST: return BUILD6141_SMSG_CHANNEL_LIST;
        case CMSG_CHANNEL_PASSWORD: return BUILD6141_CMSG_CHANNEL_PASSWORD;
        case CMSG_CHANNEL_SET_OWNER: return BUILD6141_CMSG_CHANNEL_SET_OWNER;
        case CMSG_CHANNEL_OWNER: return BUILD6141_CMSG_CHANNEL_OWNER;
        case CMSG_CHANNEL_MODERATOR: return BUILD6141_CMSG_CHANNEL_MODERATOR;
        case CMSG_CHANNEL_UNMODERATOR: return BUILD6141_CMSG_CHANNEL_UNMODERATOR;
        case CMSG_CHANNEL_MUTE: return BUILD6141_CMSG_CHANNEL_MUTE;
        case CMSG_CHANNEL_UNMUTE: return BUILD6141_CMSG_CHANNEL_UNMUTE;
        case CMSG_CHANNEL_INVITE: return BUILD6141_CMSG_CHANNEL_INVITE;
        case CMSG_CHANNEL_KICK: return BUILD6141_CMSG_CHANNEL_KICK;
        case CMSG_CHANNEL_BAN: return BUILD6141_CMSG_CHANNEL_BAN;
        case CMSG_CHANNEL_UNBAN: return BUILD6141_CMSG_CHANNEL_UNBAN;
        case CMSG_CHANNEL_ANNOUNCEMENTS: return BUILD6141_CMSG_CHANNEL_ANNOUNCEMENTS;
        case CMSG_CHANNEL_MODERATE: return BUILD6141_CMSG_CHANNEL_MODERATE;
        case SMSG_UPDATE_OBJECT: return BUILD6141_SMSG_UPDATE_OBJECT;
        case SMSG_DESTROY_OBJECT: return BUILD6141_SMSG_DESTROY_OBJECT;
        case CMSG_USE_ITEM: return BUILD6141_CMSG_USE_ITEM;
        case CMSG_OPEN_ITEM: return BUILD6141_CMSG_OPEN_ITEM;
        case CMSG_READ_ITEM: return BUILD6141_CMSG_READ_ITEM;
        case SMSG_READ_ITEM_OK: return BUILD6141_SMSG_READ_ITEM_OK;
        case SMSG_READ_ITEM_FAILED: return BUILD6141_SMSG_READ_ITEM_FAILED;
        case SMSG_ITEM_COOLDOWN: return BUILD6141_SMSG_ITEM_COOLDOWN;
        case CMSG_GAMEOBJ_USE: return BUILD6141_CMSG_GAMEOBJ_USE;
        case CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE: return BUILD6141_CMSG_GAMEOBJ_CHAIR_USE_OBSOLETE;
        case SMSG_GAMEOBJECT_CUSTOM_ANIM: return BUILD6141_SMSG_GAMEOBJECT_CUSTOM_ANIM;
        case CMSG_AREATRIGGER: return BUILD6141_CMSG_AREATRIGGER;
        case MSG_MOVE_START_FORWARD: return BUILD6141_MSG_MOVE_START_FORWARD;
        case MSG_MOVE_START_BACKWARD: return BUILD6141_MSG_MOVE_START_BACKWARD;
        case MSG_MOVE_STOP: return BUILD6141_MSG_MOVE_STOP;
        case MSG_MOVE_START_STRAFE_LEFT: return BUILD6141_MSG_MOVE_START_STRAFE_LEFT;
        case MSG_MOVE_START_STRAFE_RIGHT: return BUILD6141_MSG_MOVE_START_STRAFE_RIGHT;
        case MSG_MOVE_STOP_STRAFE: return BUILD6141_MSG_MOVE_STOP_STRAFE;
        case MSG_MOVE_JUMP: return BUILD6141_MSG_MOVE_JUMP;
        case MSG_MOVE_START_TURN_LEFT: return BUILD6141_MSG_MOVE_START_TURN_LEFT;
        case MSG_MOVE_START_TURN_RIGHT: return BUILD6141_MSG_MOVE_START_TURN_RIGHT;
        case MSG_MOVE_STOP_TURN: return BUILD6141_MSG_MOVE_STOP_TURN;
        case MSG_MOVE_START_PITCH_UP: return BUILD6141_MSG_MOVE_START_PITCH_UP;
        case MSG_MOVE_START_PITCH_DOWN: return BUILD6141_MSG_MOVE_START_PITCH_DOWN;
        case MSG_MOVE_STOP_PITCH: return BUILD6141_MSG_MOVE_STOP_PITCH;
        case MSG_MOVE_SET_RUN_MODE: return BUILD6141_MSG_MOVE_SET_RUN_MODE;
        case MSG_MOVE_SET_WALK_MODE: return BUILD6141_MSG_MOVE_SET_WALK_MODE;
        case MSG_MOVE_TOGGLE_LOGGING: return BUILD6141_MSG_MOVE_TOGGLE_LOGGING;
        case MSG_MOVE_TELEPORT: return BUILD6141_MSG_MOVE_TELEPORT;
        case MSG_MOVE_TELEPORT_CHEAT: return BUILD6141_MSG_MOVE_TELEPORT_CHEAT;
        case MSG_MOVE_TELEPORT_ACK: return BUILD6141_MSG_MOVE_TELEPORT_ACK;
        case MSG_MOVE_TOGGLE_FALL_LOGGING: return BUILD6141_MSG_MOVE_TOGGLE_FALL_LOGGING;
        case MSG_MOVE_FALL_LAND: return BUILD6141_MSG_MOVE_FALL_LAND;
        case MSG_MOVE_START_SWIM: return BUILD6141_MSG_MOVE_START_SWIM;
        case MSG_MOVE_STOP_SWIM: return BUILD6141_MSG_MOVE_STOP_SWIM;
        case MSG_MOVE_SET_RUN_SPEED_CHEAT: return BUILD6141_MSG_MOVE_SET_RUN_SPEED_CHEAT;
        case MSG_MOVE_SET_RUN_SPEED: return BUILD6141_MSG_MOVE_SET_RUN_SPEED;
        case MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT: return BUILD6141_MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT;
        case MSG_MOVE_SET_RUN_BACK_SPEED: return BUILD6141_MSG_MOVE_SET_RUN_BACK_SPEED;
        case MSG_MOVE_SET_WALK_SPEED_CHEAT: return BUILD6141_MSG_MOVE_SET_WALK_SPEED_CHEAT;
        case MSG_MOVE_SET_WALK_SPEED: return BUILD6141_MSG_MOVE_SET_WALK_SPEED;
        case MSG_MOVE_SET_SWIM_SPEED_CHEAT: return BUILD6141_MSG_MOVE_SET_SWIM_SPEED_CHEAT;
        case MSG_MOVE_SET_SWIM_SPEED: return BUILD6141_MSG_MOVE_SET_SWIM_SPEED;
        case MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT: return BUILD6141_MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT;
        case MSG_MOVE_SET_SWIM_BACK_SPEED: return BUILD6141_MSG_MOVE_SET_SWIM_BACK_SPEED;
        case MSG_MOVE_SET_ALL_SPEED_CHEAT: return BUILD6141_MSG_MOVE_SET_ALL_SPEED_CHEAT;
        case MSG_MOVE_SET_TURN_RATE_CHEAT: return BUILD6141_MSG_MOVE_SET_TURN_RATE_CHEAT;
        case MSG_MOVE_SET_TURN_RATE: return BUILD6141_MSG_MOVE_SET_TURN_RATE;
        case MSG_MOVE_TOGGLE_COLLISION_CHEAT: return BUILD6141_MSG_MOVE_TOGGLE_COLLISION_CHEAT;
        case MSG_MOVE_SET_FACING: return BUILD6141_MSG_MOVE_SET_FACING;
        case MSG_MOVE_SET_PITCH: return BUILD6141_MSG_MOVE_SET_PITCH;
        case MSG_MOVE_WORLDPORT_ACK: return BUILD6141_MSG_MOVE_WORLDPORT_ACK;
        case SMSG_MONSTER_MOVE: return BUILD6141_SMSG_MONSTER_MOVE;
        case SMSG_MOVE_WATER_WALK: return BUILD6141_SMSG_MOVE_WATER_WALK;
        case SMSG_MOVE_LAND_WALK: return BUILD6141_SMSG_MOVE_LAND_WALK;
        case MSG_MOVE_SET_RAW_POSITION_ACK: return BUILD6141_MSG_MOVE_SET_RAW_POSITION_ACK;
        case CMSG_MOVE_SET_RAW_POSITION: return BUILD6141_CMSG_MOVE_SET_RAW_POSITION;
        case SMSG_FORCE_RUN_SPEED_CHANGE: return BUILD6141_SMSG_FORCE_RUN_SPEED_CHANGE;
        case CMSG_FORCE_RUN_SPEED_CHANGE_ACK: return BUILD6141_CMSG_FORCE_RUN_SPEED_CHANGE_ACK;
        case SMSG_FORCE_RUN_BACK_SPEED_CHANGE: return BUILD6141_SMSG_FORCE_RUN_BACK_SPEED_CHANGE;
        case CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK: return BUILD6141_CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_SWIM_SPEED_CHANGE: return BUILD6141_SMSG_FORCE_SWIM_SPEED_CHANGE;
        case CMSG_FORCE_SWIM_SPEED_CHANGE_ACK: return BUILD6141_CMSG_FORCE_SWIM_SPEED_CHANGE_ACK;
        case SMSG_FORCE_MOVE_ROOT: return BUILD6141_SMSG_FORCE_MOVE_ROOT;
        case CMSG_FORCE_MOVE_ROOT_ACK: return BUILD6141_CMSG_FORCE_MOVE_ROOT_ACK;
        case SMSG_FORCE_MOVE_UNROOT: return BUILD6141_SMSG_FORCE_MOVE_UNROOT;
        case CMSG_FORCE_MOVE_UNROOT_ACK: return BUILD6141_CMSG_FORCE_MOVE_UNROOT_ACK;
        case MSG_MOVE_ROOT: return BUILD6141_MSG_MOVE_ROOT;
        case MSG_MOVE_UNROOT: return BUILD6141_MSG_MOVE_UNROOT;
        case MSG_MOVE_HEARTBEAT: return BUILD6141_MSG_MOVE_HEARTBEAT;
        case SMSG_MOVE_KNOCK_BACK: return BUILD6141_SMSG_MOVE_KNOCK_BACK;
        case CMSG_MOVE_KNOCK_BACK_ACK: return BUILD6141_CMSG_MOVE_KNOCK_BACK_ACK;
        case MSG_MOVE_KNOCK_BACK: return BUILD6141_MSG_MOVE_KNOCK_BACK;
        case SMSG_MOVE_FEATHER_FALL: return BUILD6141_SMSG_MOVE_FEATHER_FALL;
        case SMSG_MOVE_NORMAL_FALL: return BUILD6141_SMSG_MOVE_NORMAL_FALL;
        case SMSG_MOVE_SET_HOVER: return BUILD6141_SMSG_MOVE_SET_HOVER;
        case SMSG_MOVE_UNSET_HOVER: return BUILD6141_SMSG_MOVE_UNSET_HOVER;
        case CMSG_MOVE_HOVER_ACK: return BUILD6141_CMSG_MOVE_HOVER_ACK;
        case MSG_MOVE_HOVER: return BUILD6141_MSG_MOVE_HOVER;
        case CMSG_TRIGGER_CINEMATIC_CHEAT: return BUILD6141_CMSG_TRIGGER_CINEMATIC_CHEAT;
        case CMSG_OPENING_CINEMATIC: return BUILD6141_CMSG_OPENING_CINEMATIC;
        case SMSG_TRIGGER_CINEMATIC: return BUILD6141_SMSG_TRIGGER_CINEMATIC;
        case CMSG_NEXT_CINEMATIC_CAMERA: return BUILD6141_CMSG_NEXT_CINEMATIC_CAMERA;
        case CMSG_COMPLETE_CINEMATIC: return BUILD6141_CMSG_COMPLETE_CINEMATIC;
        case SMSG_TUTORIAL_FLAGS: return BUILD6141_SMSG_TUTORIAL_FLAGS;
        case CMSG_TUTORIAL_FLAG: return BUILD6141_CMSG_TUTORIAL_FLAG;
        case CMSG_TUTORIAL_CLEAR: return BUILD6141_CMSG_TUTORIAL_CLEAR;
        case CMSG_TUTORIAL_RESET: return BUILD6141_CMSG_TUTORIAL_RESET;
        case CMSG_STANDSTATECHANGE: return BUILD6141_CMSG_STANDSTATECHANGE;
        case CMSG_EMOTE: return BUILD6141_CMSG_EMOTE;
        case SMSG_EMOTE: return BUILD6141_SMSG_EMOTE;
        case CMSG_TEXT_EMOTE: return BUILD6141_CMSG_TEXT_EMOTE;
        case SMSG_TEXT_EMOTE: return BUILD6141_SMSG_TEXT_EMOTE;
        case CMSG_AUTOEQUIP_GROUND_ITEM: return BUILD6141_CMSG_AUTOEQUIP_GROUND_ITEM;
        case CMSG_AUTOSTORE_GROUND_ITEM: return BUILD6141_CMSG_AUTOSTORE_GROUND_ITEM;
        case CMSG_AUTOSTORE_LOOT_ITEM: return BUILD6141_CMSG_AUTOSTORE_LOOT_ITEM;
        case CMSG_STORE_LOOT_IN_SLOT: return BUILD6141_CMSG_STORE_LOOT_IN_SLOT;
        case CMSG_AUTOEQUIP_ITEM: return BUILD6141_CMSG_AUTOEQUIP_ITEM;
        case CMSG_AUTOSTORE_BAG_ITEM: return BUILD6141_CMSG_AUTOSTORE_BAG_ITEM;
        case CMSG_SWAP_ITEM: return BUILD6141_CMSG_SWAP_ITEM;
        case CMSG_SWAP_INV_ITEM: return BUILD6141_CMSG_SWAP_INV_ITEM;
        case CMSG_SPLIT_ITEM: return BUILD6141_CMSG_SPLIT_ITEM;
        case CMSG_AUTOEQUIP_ITEM_SLOT: return BUILD6141_CMSG_AUTOEQUIP_ITEM_SLOT;
        case OBSOLETE_DROP_ITEM: return BUILD6141_OBSOLETE_DROP_ITEM;
        case CMSG_DESTROYITEM: return BUILD6141_CMSG_DESTROYITEM;
        case SMSG_INVENTORY_CHANGE_FAILURE: return BUILD6141_SMSG_INVENTORY_CHANGE_FAILURE;
        case SMSG_OPEN_CONTAINER: return BUILD6141_SMSG_OPEN_CONTAINER;
        case CMSG_INSPECT: return BUILD6141_CMSG_INSPECT;
        case SMSG_INSPECT: return BUILD6141_SMSG_INSPECT;
        case CMSG_INITIATE_TRADE: return BUILD6141_CMSG_INITIATE_TRADE;
        case CMSG_BEGIN_TRADE: return BUILD6141_CMSG_BEGIN_TRADE;
        case CMSG_BUSY_TRADE: return BUILD6141_CMSG_BUSY_TRADE;
        case CMSG_IGNORE_TRADE: return BUILD6141_CMSG_IGNORE_TRADE;
        case CMSG_ACCEPT_TRADE: return BUILD6141_CMSG_ACCEPT_TRADE;
        case CMSG_UNACCEPT_TRADE: return BUILD6141_CMSG_UNACCEPT_TRADE;
        case CMSG_CANCEL_TRADE: return BUILD6141_CMSG_CANCEL_TRADE;
        case CMSG_SET_TRADE_ITEM: return BUILD6141_CMSG_SET_TRADE_ITEM;
        case CMSG_CLEAR_TRADE_ITEM: return BUILD6141_CMSG_CLEAR_TRADE_ITEM;
        case CMSG_SET_TRADE_GOLD: return BUILD6141_CMSG_SET_TRADE_GOLD;
        case SMSG_TRADE_STATUS: return BUILD6141_SMSG_TRADE_STATUS;
        case SMSG_TRADE_STATUS_EXTENDED: return BUILD6141_SMSG_TRADE_STATUS_EXTENDED;
        case SMSG_INITIALIZE_FACTIONS: return BUILD6141_SMSG_INITIALIZE_FACTIONS;
        case SMSG_SET_FACTION_VISIBLE: return BUILD6141_SMSG_SET_FACTION_VISIBLE;
        case SMSG_SET_FACTION_STANDING: return BUILD6141_SMSG_SET_FACTION_STANDING;
        case CMSG_SET_FACTION_ATWAR: return BUILD6141_CMSG_SET_FACTION_ATWAR;
        case CMSG_SET_FACTION_CHEAT: return BUILD6141_CMSG_SET_FACTION_CHEAT;
        case SMSG_SET_PROFICIENCY: return BUILD6141_SMSG_SET_PROFICIENCY;
        case CMSG_SET_ACTION_BUTTON: return BUILD6141_CMSG_SET_ACTION_BUTTON;
        case SMSG_ACTION_BUTTONS: return BUILD6141_SMSG_ACTION_BUTTONS;
        case SMSG_INITIAL_SPELLS: return BUILD6141_SMSG_INITIAL_SPELLS;
        case SMSG_LEARNED_SPELL: return BUILD6141_SMSG_LEARNED_SPELL;
        case SMSG_SUPERCEDED_SPELL: return BUILD6141_SMSG_SUPERCEDED_SPELL;
        case CMSG_NEW_SPELL_SLOT: return BUILD6141_CMSG_NEW_SPELL_SLOT;
        case CMSG_CAST_SPELL: return BUILD6141_CMSG_CAST_SPELL;
        case CMSG_CANCEL_CAST: return BUILD6141_CMSG_CANCEL_CAST;
        case SMSG_CAST_RESULT: return BUILD6141_SMSG_CAST_RESULT;
        case SMSG_SPELL_START: return BUILD6141_SMSG_SPELL_START;
        case SMSG_SPELL_GO: return BUILD6141_SMSG_SPELL_GO;
        case SMSG_SPELL_FAILURE: return BUILD6141_SMSG_SPELL_FAILURE;
        case SMSG_SPELL_COOLDOWN: return BUILD6141_SMSG_SPELL_COOLDOWN;
        case SMSG_COOLDOWN_EVENT: return BUILD6141_SMSG_COOLDOWN_EVENT;
        case CMSG_CANCEL_AURA: return BUILD6141_CMSG_CANCEL_AURA;
        case SMSG_UPDATE_AURA_DURATION: return BUILD6141_SMSG_UPDATE_AURA_DURATION;
        case SMSG_PET_CAST_FAILED: return BUILD6141_SMSG_PET_CAST_FAILED;
        case MSG_CHANNEL_START: return BUILD6141_MSG_CHANNEL_START;
        case MSG_CHANNEL_UPDATE: return BUILD6141_MSG_CHANNEL_UPDATE;
        case CMSG_CANCEL_CHANNELLING: return BUILD6141_CMSG_CANCEL_CHANNELLING;
        case SMSG_AI_REACTION: return BUILD6141_SMSG_AI_REACTION;
        case CMSG_SET_SELECTION: return BUILD6141_CMSG_SET_SELECTION;
        case CMSG_SET_TARGET_OBSOLETE: return BUILD6141_CMSG_SET_TARGET_OBSOLETE;
        case CMSG_UNUSED: return BUILD6141_CMSG_UNUSED;
        case CMSG_UNUSED2: return BUILD6141_CMSG_UNUSED2;
        case CMSG_ATTACKSWING: return BUILD6141_CMSG_ATTACKSWING;
        case CMSG_ATTACKSTOP: return BUILD6141_CMSG_ATTACKSTOP;
        case SMSG_ATTACKSTART: return BUILD6141_SMSG_ATTACKSTART;
        case SMSG_ATTACKSTOP: return BUILD6141_SMSG_ATTACKSTOP;
        case SMSG_ATTACKSWING_NOTINRANGE: return BUILD6141_SMSG_ATTACKSWING_NOTINRANGE;
        case SMSG_ATTACKSWING_BADFACING: return BUILD6141_SMSG_ATTACKSWING_BADFACING;
        case SMSG_ATTACKSWING_NOTSTANDING: return BUILD6141_SMSG_ATTACKSWING_NOTSTANDING;
        case SMSG_ATTACKSWING_DEADTARGET: return BUILD6141_SMSG_ATTACKSWING_DEADTARGET;
        case SMSG_ATTACKSWING_CANT_ATTACK: return BUILD6141_SMSG_ATTACKSWING_CANT_ATTACK;
        case SMSG_ATTACKERSTATEUPDATE: return BUILD6141_SMSG_ATTACKERSTATEUPDATE;
        case SMSG_VICTIMSTATEUPDATE_OBSOLETE: return BUILD6141_SMSG_VICTIMSTATEUPDATE_OBSOLETE;
        case SMSG_DAMAGE_DONE_OBSOLETE: return BUILD6141_SMSG_DAMAGE_DONE_OBSOLETE;
        case SMSG_DAMAGE_TAKEN_OBSOLETE: return BUILD6141_SMSG_DAMAGE_TAKEN_OBSOLETE;
        case SMSG_CANCEL_COMBAT: return BUILD6141_SMSG_CANCEL_COMBAT;
        case SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE: return BUILD6141_SMSG_PLAYER_COMBAT_XP_GAIN_OBSOLETE;
        case SMSG_SPELLHEALLOG: return BUILD6141_SMSG_SPELLHEALLOG;
        case SMSG_SPELLENERGIZELOG: return BUILD6141_SMSG_SPELLENERGIZELOG;
        case CMSG_SHEATHE_OBSOLETE: return BUILD6141_CMSG_SHEATHE_OBSOLETE;
        case CMSG_SAVE_PLAYER: return BUILD6141_CMSG_SAVE_PLAYER;
        case CMSG_SETDEATHBINDPOINT: return BUILD6141_CMSG_SETDEATHBINDPOINT;
        case SMSG_BINDPOINTUPDATE: return BUILD6141_SMSG_BINDPOINTUPDATE;
        case CMSG_GETDEATHBINDZONE: return BUILD6141_CMSG_GETDEATHBINDZONE;
        case SMSG_BINDZONEREPLY: return BUILD6141_SMSG_BINDZONEREPLY;
        case SMSG_PLAYERBOUND: return BUILD6141_SMSG_PLAYERBOUND;
        case SMSG_CLIENT_CONTROL_UPDATE: return BUILD6141_SMSG_CLIENT_CONTROL_UPDATE;
        case CMSG_REPOP_REQUEST: return BUILD6141_CMSG_REPOP_REQUEST;
        case SMSG_RESURRECT_REQUEST: return BUILD6141_SMSG_RESURRECT_REQUEST;
        case CMSG_RESURRECT_RESPONSE: return BUILD6141_CMSG_RESURRECT_RESPONSE;
        case CMSG_LOOT: return BUILD6141_CMSG_LOOT;
        case CMSG_LOOT_MONEY: return BUILD6141_CMSG_LOOT_MONEY;
        case CMSG_LOOT_RELEASE: return BUILD6141_CMSG_LOOT_RELEASE;
        case SMSG_LOOT_RESPONSE: return BUILD6141_SMSG_LOOT_RESPONSE;
        case SMSG_LOOT_RELEASE_RESPONSE: return BUILD6141_SMSG_LOOT_RELEASE_RESPONSE;
        case SMSG_LOOT_REMOVED: return BUILD6141_SMSG_LOOT_REMOVED;
        case SMSG_LOOT_MONEY_NOTIFY: return BUILD6141_SMSG_LOOT_MONEY_NOTIFY;
        case SMSG_LOOT_ITEM_NOTIFY: return BUILD6141_SMSG_LOOT_ITEM_NOTIFY;
        case SMSG_LOOT_CLEAR_MONEY: return BUILD6141_SMSG_LOOT_CLEAR_MONEY;
        case SMSG_ITEM_PUSH_RESULT: return BUILD6141_SMSG_ITEM_PUSH_RESULT;
        case SMSG_DUEL_REQUESTED: return BUILD6141_SMSG_DUEL_REQUESTED;
        case SMSG_DUEL_OUTOFBOUNDS: return BUILD6141_SMSG_DUEL_OUTOFBOUNDS;
        case SMSG_DUEL_INBOUNDS: return BUILD6141_SMSG_DUEL_INBOUNDS;
        case SMSG_DUEL_COMPLETE: return BUILD6141_SMSG_DUEL_COMPLETE;
        case SMSG_DUEL_WINNER: return BUILD6141_SMSG_DUEL_WINNER;
        case CMSG_DUEL_ACCEPTED: return BUILD6141_CMSG_DUEL_ACCEPTED;
        case CMSG_DUEL_CANCELLED: return BUILD6141_CMSG_DUEL_CANCELLED;
        case SMSG_MOUNTRESULT: return BUILD6141_SMSG_MOUNTRESULT;
        case SMSG_DISMOUNTRESULT: return BUILD6141_SMSG_DISMOUNTRESULT;
        case SMSG_PUREMOUNT_CANCELLED_OBSOLETE: return BUILD6141_SMSG_PUREMOUNT_CANCELLED_OBSOLETE;
        case CMSG_MOUNTSPECIAL_ANIM: return BUILD6141_CMSG_MOUNTSPECIAL_ANIM;
        case SMSG_MOUNTSPECIAL_ANIM: return BUILD6141_SMSG_MOUNTSPECIAL_ANIM;
        case SMSG_PET_TAME_FAILURE: return BUILD6141_SMSG_PET_TAME_FAILURE;
        case CMSG_PET_SET_ACTION: return BUILD6141_CMSG_PET_SET_ACTION;
        case CMSG_PET_ACTION: return BUILD6141_CMSG_PET_ACTION;
        case CMSG_PET_ABANDON: return BUILD6141_CMSG_PET_ABANDON;
        case CMSG_PET_RENAME: return BUILD6141_CMSG_PET_RENAME;
        case SMSG_PET_NAME_INVALID: return BUILD6141_SMSG_PET_NAME_INVALID;
        case SMSG_PET_SPELLS: return BUILD6141_SMSG_PET_SPELLS;
        case SMSG_PET_MODE: return BUILD6141_SMSG_PET_MODE;
        case CMSG_GOSSIP_HELLO: return BUILD6141_CMSG_GOSSIP_HELLO;
        case CMSG_GOSSIP_SELECT_OPTION: return BUILD6141_CMSG_GOSSIP_SELECT_OPTION;
        case SMSG_GOSSIP_MESSAGE: return BUILD6141_SMSG_GOSSIP_MESSAGE;
        case SMSG_GOSSIP_COMPLETE: return BUILD6141_SMSG_GOSSIP_COMPLETE;
        case CMSG_NPC_TEXT_QUERY: return BUILD6141_CMSG_NPC_TEXT_QUERY;
        case SMSG_NPC_TEXT_UPDATE: return BUILD6141_SMSG_NPC_TEXT_UPDATE;
        case SMSG_NPC_WONT_TALK: return BUILD6141_SMSG_NPC_WONT_TALK;
        case CMSG_QUESTGIVER_STATUS_QUERY: return BUILD6141_CMSG_QUESTGIVER_STATUS_QUERY;
        case SMSG_QUESTGIVER_STATUS: return BUILD6141_SMSG_QUESTGIVER_STATUS;
        case CMSG_QUESTGIVER_HELLO: return BUILD6141_CMSG_QUESTGIVER_HELLO;
        case SMSG_QUESTGIVER_QUEST_LIST: return BUILD6141_SMSG_QUESTGIVER_QUEST_LIST;
        case CMSG_QUESTGIVER_QUERY_QUEST: return BUILD6141_CMSG_QUESTGIVER_QUERY_QUEST;
        case CMSG_QUESTGIVER_QUEST_AUTOLAUNCH: return BUILD6141_CMSG_QUESTGIVER_QUEST_AUTOLAUNCH;
        case SMSG_QUESTGIVER_QUEST_DETAILS: return BUILD6141_SMSG_QUESTGIVER_QUEST_DETAILS;
        case CMSG_QUESTGIVER_ACCEPT_QUEST: return BUILD6141_CMSG_QUESTGIVER_ACCEPT_QUEST;
        case CMSG_QUESTGIVER_COMPLETE_QUEST: return BUILD6141_CMSG_QUESTGIVER_COMPLETE_QUEST;
        case SMSG_QUESTGIVER_REQUEST_ITEMS: return BUILD6141_SMSG_QUESTGIVER_REQUEST_ITEMS;
        case CMSG_QUESTGIVER_REQUEST_REWARD: return BUILD6141_CMSG_QUESTGIVER_REQUEST_REWARD;
        case SMSG_QUESTGIVER_OFFER_REWARD: return BUILD6141_SMSG_QUESTGIVER_OFFER_REWARD;
        case CMSG_QUESTGIVER_CHOOSE_REWARD: return BUILD6141_CMSG_QUESTGIVER_CHOOSE_REWARD;
        case SMSG_QUESTGIVER_QUEST_INVALID: return BUILD6141_SMSG_QUESTGIVER_QUEST_INVALID;
        case CMSG_QUESTGIVER_CANCEL: return BUILD6141_CMSG_QUESTGIVER_CANCEL;
        case SMSG_QUESTGIVER_QUEST_COMPLETE: return BUILD6141_SMSG_QUESTGIVER_QUEST_COMPLETE;
        case SMSG_QUESTGIVER_QUEST_FAILED: return BUILD6141_SMSG_QUESTGIVER_QUEST_FAILED;
        case CMSG_QUESTLOG_SWAP_QUEST: return BUILD6141_CMSG_QUESTLOG_SWAP_QUEST;
        case CMSG_QUESTLOG_REMOVE_QUEST: return BUILD6141_CMSG_QUESTLOG_REMOVE_QUEST;
        case SMSG_QUESTLOG_FULL: return BUILD6141_SMSG_QUESTLOG_FULL;
        case SMSG_QUESTUPDATE_FAILED: return BUILD6141_SMSG_QUESTUPDATE_FAILED;
        case SMSG_QUESTUPDATE_FAILEDTIMER: return BUILD6141_SMSG_QUESTUPDATE_FAILEDTIMER;
        case SMSG_QUESTUPDATE_COMPLETE: return BUILD6141_SMSG_QUESTUPDATE_COMPLETE;
        case SMSG_QUESTUPDATE_ADD_KILL: return BUILD6141_SMSG_QUESTUPDATE_ADD_KILL;
        case SMSG_QUESTUPDATE_ADD_ITEM: return BUILD6141_SMSG_QUESTUPDATE_ADD_ITEM;
        case CMSG_QUEST_CONFIRM_ACCEPT: return BUILD6141_CMSG_QUEST_CONFIRM_ACCEPT;
        case SMSG_QUEST_CONFIRM_ACCEPT: return BUILD6141_SMSG_QUEST_CONFIRM_ACCEPT;
        case CMSG_PUSHQUESTTOPARTY: return BUILD6141_CMSG_PUSHQUESTTOPARTY;
        case CMSG_LIST_INVENTORY: return BUILD6141_CMSG_LIST_INVENTORY;
        case SMSG_LIST_INVENTORY: return BUILD6141_SMSG_LIST_INVENTORY;
        case CMSG_SELL_ITEM: return BUILD6141_CMSG_SELL_ITEM;
        case SMSG_SELL_ITEM: return BUILD6141_SMSG_SELL_ITEM;
        case CMSG_BUY_ITEM: return BUILD6141_CMSG_BUY_ITEM;
        case CMSG_BUY_ITEM_IN_SLOT: return BUILD6141_CMSG_BUY_ITEM_IN_SLOT;
        case SMSG_BUY_ITEM: return BUILD6141_SMSG_BUY_ITEM;
        case SMSG_BUY_FAILED: return BUILD6141_SMSG_BUY_FAILED;
        case CMSG_TAXICLEARALLNODES: return BUILD6141_CMSG_TAXICLEARALLNODES;
        case CMSG_TAXIENABLEALLNODES: return BUILD6141_CMSG_TAXIENABLEALLNODES;
        case CMSG_TAXISHOWNODES: return BUILD6141_CMSG_TAXISHOWNODES;
        case SMSG_SHOWTAXINODES: return BUILD6141_SMSG_SHOWTAXINODES;
        case CMSG_TAXINODE_STATUS_QUERY: return BUILD6141_CMSG_TAXINODE_STATUS_QUERY;
        case SMSG_TAXINODE_STATUS: return BUILD6141_SMSG_TAXINODE_STATUS;
        case CMSG_TAXIQUERYAVAILABLENODES: return BUILD6141_CMSG_TAXIQUERYAVAILABLENODES;
        case CMSG_ACTIVATETAXI: return BUILD6141_CMSG_ACTIVATETAXI;
        case SMSG_ACTIVATETAXIREPLY: return BUILD6141_SMSG_ACTIVATETAXIREPLY;
        case SMSG_NEW_TAXI_PATH: return BUILD6141_SMSG_NEW_TAXI_PATH;
        case CMSG_TRAINER_LIST: return BUILD6141_CMSG_TRAINER_LIST;
        case SMSG_TRAINER_LIST: return BUILD6141_SMSG_TRAINER_LIST;
        case CMSG_TRAINER_BUY_SPELL: return BUILD6141_CMSG_TRAINER_BUY_SPELL;
        case SMSG_TRAINER_BUY_SUCCEEDED: return BUILD6141_SMSG_TRAINER_BUY_SUCCEEDED;
        case SMSG_TRAINER_BUY_FAILED: return BUILD6141_SMSG_TRAINER_BUY_FAILED; // uint64, uint32, uint32 (0...2);
        case CMSG_BINDER_ACTIVATE: return BUILD6141_CMSG_BINDER_ACTIVATE;
        case SMSG_PLAYERBINDERROR: return BUILD6141_SMSG_PLAYERBINDERROR;
        case CMSG_BANKER_ACTIVATE: return BUILD6141_CMSG_BANKER_ACTIVATE;
        case SMSG_SHOW_BANK: return BUILD6141_SMSG_SHOW_BANK;
        case CMSG_BUY_BANK_SLOT: return BUILD6141_CMSG_BUY_BANK_SLOT;
        case SMSG_BUY_BANK_SLOT_RESULT: return BUILD6141_SMSG_BUY_BANK_SLOT_RESULT;
        case CMSG_PETITION_SHOWLIST: return BUILD6141_CMSG_PETITION_SHOWLIST;
        case SMSG_PETITION_SHOWLIST: return BUILD6141_SMSG_PETITION_SHOWLIST;
        case CMSG_PETITION_BUY: return BUILD6141_CMSG_PETITION_BUY;
        case CMSG_PETITION_SHOW_SIGNATURES: return BUILD6141_CMSG_PETITION_SHOW_SIGNATURES;
        case SMSG_PETITION_SHOW_SIGNATURES: return BUILD6141_SMSG_PETITION_SHOW_SIGNATURES;
        case CMSG_PETITION_SIGN: return BUILD6141_CMSG_PETITION_SIGN;
        case SMSG_PETITION_SIGN_RESULTS: return BUILD6141_SMSG_PETITION_SIGN_RESULTS;
        case MSG_PETITION_DECLINE: return BUILD6141_MSG_PETITION_DECLINE;
        case CMSG_OFFER_PETITION: return BUILD6141_CMSG_OFFER_PETITION;
        case CMSG_TURN_IN_PETITION: return BUILD6141_CMSG_TURN_IN_PETITION;
        case SMSG_TURN_IN_PETITION_RESULTS: return BUILD6141_SMSG_TURN_IN_PETITION_RESULTS;
        case CMSG_PETITION_QUERY: return BUILD6141_CMSG_PETITION_QUERY;
        case SMSG_PETITION_QUERY_RESPONSE: return BUILD6141_SMSG_PETITION_QUERY_RESPONSE;
        case SMSG_FISH_NOT_HOOKED: return BUILD6141_SMSG_FISH_NOT_HOOKED;
        case SMSG_FISH_ESCAPED: return BUILD6141_SMSG_FISH_ESCAPED;
        case CMSG_BUG: return BUILD6141_CMSG_BUG;
        case SMSG_NOTIFICATION: return BUILD6141_SMSG_NOTIFICATION;
        case CMSG_PLAYED_TIME: return BUILD6141_CMSG_PLAYED_TIME;
        case SMSG_PLAYED_TIME: return BUILD6141_SMSG_PLAYED_TIME;
        case CMSG_QUERY_TIME: return BUILD6141_CMSG_QUERY_TIME;
        case SMSG_QUERY_TIME_RESPONSE: return BUILD6141_SMSG_QUERY_TIME_RESPONSE;
        case SMSG_LOG_XPGAIN: return BUILD6141_SMSG_LOG_XPGAIN;
        case SMSG_AURACASTLOG: return BUILD6141_SMSG_AURACASTLOG;
        case CMSG_RECLAIM_CORPSE: return BUILD6141_CMSG_RECLAIM_CORPSE;
        case CMSG_WRAP_ITEM: return BUILD6141_CMSG_WRAP_ITEM;
        case SMSG_LEVELUP_INFO: return BUILD6141_SMSG_LEVELUP_INFO;
        case MSG_MINIMAP_PING: return BUILD6141_MSG_MINIMAP_PING;
        case SMSG_RESISTLOG: return BUILD6141_SMSG_RESISTLOG;
        case SMSG_ENCHANTMENTLOG: return BUILD6141_SMSG_ENCHANTMENTLOG;
        case CMSG_SET_SKILL_CHEAT: return BUILD6141_CMSG_SET_SKILL_CHEAT;
        case SMSG_START_MIRROR_TIMER: return BUILD6141_SMSG_START_MIRROR_TIMER;
        case SMSG_PAUSE_MIRROR_TIMER: return BUILD6141_SMSG_PAUSE_MIRROR_TIMER;
        case SMSG_STOP_MIRROR_TIMER: return BUILD6141_SMSG_STOP_MIRROR_TIMER;
        case CMSG_PING: return BUILD6141_CMSG_PING;
        case SMSG_PONG: return BUILD6141_SMSG_PONG;
        case SMSG_CLEAR_COOLDOWN: return BUILD6141_SMSG_CLEAR_COOLDOWN;
        case SMSG_GAMEOBJECT_PAGETEXT: return BUILD6141_SMSG_GAMEOBJECT_PAGETEXT;
        case CMSG_SETSHEATHED: return BUILD6141_CMSG_SETSHEATHED;
        case SMSG_COOLDOWN_CHEAT: return BUILD6141_SMSG_COOLDOWN_CHEAT;
        case SMSG_SPELL_DELAYED: return BUILD6141_SMSG_SPELL_DELAYED;
        case CMSG_PLAYER_MACRO_OBSOLETE: return BUILD6141_CMSG_PLAYER_MACRO_OBSOLETE;
        case SMSG_PLAYER_MACRO_OBSOLETE: return BUILD6141_SMSG_PLAYER_MACRO_OBSOLETE;
        case CMSG_GHOST: return BUILD6141_CMSG_GHOST;
        case CMSG_GM_INVIS: return BUILD6141_CMSG_GM_INVIS;
        case SMSG_INVALID_PROMOTION_CODE: return BUILD6141_SMSG_INVALID_PROMOTION_CODE;
        case MSG_GM_BIND_OTHER: return BUILD6141_MSG_GM_BIND_OTHER;
        case MSG_GM_SUMMON: return BUILD6141_MSG_GM_SUMMON;
        case SMSG_ITEM_TIME_UPDATE: return BUILD6141_SMSG_ITEM_TIME_UPDATE;
        case SMSG_ITEM_ENCHANT_TIME_UPDATE: return BUILD6141_SMSG_ITEM_ENCHANT_TIME_UPDATE;
        case SMSG_AUTH_CHALLENGE: return BUILD6141_SMSG_AUTH_CHALLENGE;
        case CMSG_AUTH_SESSION: return BUILD6141_CMSG_AUTH_SESSION;
        case SMSG_AUTH_RESPONSE: return BUILD6141_SMSG_AUTH_RESPONSE;
        case MSG_GM_SHOWLABEL: return BUILD6141_MSG_GM_SHOWLABEL;
        case CMSG_PET_CAST_SPELL: return BUILD6141_CMSG_PET_CAST_SPELL;
        case MSG_SAVE_GUILD_EMBLEM: return BUILD6141_MSG_SAVE_GUILD_EMBLEM;
        case MSG_TABARDVENDOR_ACTIVATE: return BUILD6141_MSG_TABARDVENDOR_ACTIVATE;
        case SMSG_PLAY_SPELL_VISUAL: return BUILD6141_SMSG_PLAY_SPELL_VISUAL;
        case CMSG_ZONEUPDATE: return BUILD6141_CMSG_ZONEUPDATE;
        case SMSG_PARTYKILLLOG: return BUILD6141_SMSG_PARTYKILLLOG;
        case SMSG_COMPRESSED_UPDATE_OBJECT: return BUILD6141_SMSG_COMPRESSED_UPDATE_OBJECT;
        case SMSG_PLAY_SPELL_IMPACT: return BUILD6141_SMSG_PLAY_SPELL_IMPACT;
        case SMSG_EXPLORATION_EXPERIENCE: return BUILD6141_SMSG_EXPLORATION_EXPERIENCE;
        case CMSG_GM_SET_SECURITY_GROUP: return BUILD6141_CMSG_GM_SET_SECURITY_GROUP;
        case CMSG_GM_NUKE: return BUILD6141_CMSG_GM_NUKE;
        case MSG_RANDOM_ROLL: return BUILD6141_MSG_RANDOM_ROLL;
        case SMSG_ENVIRONMENTALDAMAGELOG: return BUILD6141_SMSG_ENVIRONMENTALDAMAGELOG;
        case CMSG_RWHOIS_OBSOLETE: return BUILD6141_CMSG_RWHOIS_OBSOLETE;
        case SMSG_RWHOIS: return BUILD6141_SMSG_RWHOIS;
        case MSG_LOOKING_FOR_GROUP: return BUILD6141_MSG_LOOKING_FOR_GROUP;
        case CMSG_SET_LOOKING_FOR_GROUP: return BUILD6141_CMSG_SET_LOOKING_FOR_GROUP;
        case CMSG_UNLEARN_SPELL: return BUILD6141_CMSG_UNLEARN_SPELL;
        case CMSG_UNLEARN_SKILL: return BUILD6141_CMSG_UNLEARN_SKILL;
        case SMSG_REMOVED_SPELL: return BUILD6141_SMSG_REMOVED_SPELL;
        case CMSG_DECHARGE: return BUILD6141_CMSG_DECHARGE;
        case CMSG_GMTICKET_CREATE: return BUILD6141_CMSG_GMTICKET_CREATE;
        case SMSG_GMTICKET_CREATE: return BUILD6141_SMSG_GMTICKET_CREATE;
        case CMSG_GMTICKET_UPDATETEXT: return BUILD6141_CMSG_GMTICKET_UPDATETEXT;
        case SMSG_GMTICKET_UPDATETEXT: return BUILD6141_SMSG_GMTICKET_UPDATETEXT;
        case SMSG_ACCOUNT_DATA_TIMES: return BUILD6141_SMSG_ACCOUNT_DATA_TIMES;
        case CMSG_REQUEST_ACCOUNT_DATA: return BUILD6141_CMSG_REQUEST_ACCOUNT_DATA;
        case CMSG_UPDATE_ACCOUNT_DATA: return BUILD6141_CMSG_UPDATE_ACCOUNT_DATA;
        case SMSG_UPDATE_ACCOUNT_DATA: return BUILD6141_SMSG_UPDATE_ACCOUNT_DATA;
        case SMSG_CLEAR_FAR_SIGHT_IMMEDIATE: return BUILD6141_SMSG_CLEAR_FAR_SIGHT_IMMEDIATE;
        case SMSG_POWERGAINLOG_OBSOLETE: return BUILD6141_SMSG_POWERGAINLOG_OBSOLETE;
        case CMSG_GM_TEACH: return BUILD6141_CMSG_GM_TEACH;
        case CMSG_GM_CREATE_ITEM_TARGET: return BUILD6141_CMSG_GM_CREATE_ITEM_TARGET;
        case CMSG_GMTICKET_GETTICKET: return BUILD6141_CMSG_GMTICKET_GETTICKET;
        case SMSG_GMTICKET_GETTICKET: return BUILD6141_SMSG_GMTICKET_GETTICKET;
        case CMSG_UNLEARN_TALENTS: return BUILD6141_CMSG_UNLEARN_TALENTS;
        case SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE: return BUILD6141_SMSG_GAMEOBJECT_SPAWN_ANIM_OBSOLETE;
        case SMSG_GAMEOBJECT_DESPAWN_ANIM: return BUILD6141_SMSG_GAMEOBJECT_DESPAWN_ANIM;
        case MSG_CORPSE_QUERY: return BUILD6141_MSG_CORPSE_QUERY;
        case CMSG_GMTICKET_DELETETICKET: return BUILD6141_CMSG_GMTICKET_DELETETICKET;
        case SMSG_GMTICKET_DELETETICKET: return BUILD6141_SMSG_GMTICKET_DELETETICKET;
        case SMSG_CHAT_WRONG_FACTION: return BUILD6141_SMSG_CHAT_WRONG_FACTION;
        case CMSG_GMTICKET_SYSTEMSTATUS: return BUILD6141_CMSG_GMTICKET_SYSTEMSTATUS;
        case SMSG_GMTICKET_SYSTEMSTATUS: return BUILD6141_SMSG_GMTICKET_SYSTEMSTATUS;
        case CMSG_SPIRIT_HEALER_ACTIVATE: return BUILD6141_CMSG_SPIRIT_HEALER_ACTIVATE;
        case CMSG_SET_STAT_CHEAT: return BUILD6141_CMSG_SET_STAT_CHEAT;
        case SMSG_SET_REST_START: return BUILD6141_SMSG_SET_REST_START;
        case CMSG_SKILL_BUY_STEP: return BUILD6141_CMSG_SKILL_BUY_STEP;
        case CMSG_SKILL_BUY_RANK: return BUILD6141_CMSG_SKILL_BUY_RANK;
        case CMSG_XP_CHEAT: return BUILD6141_CMSG_XP_CHEAT;
        case SMSG_SPIRIT_HEALER_CONFIRM: return BUILD6141_SMSG_SPIRIT_HEALER_CONFIRM;
        case CMSG_CHARACTER_POINT_CHEAT: return BUILD6141_CMSG_CHARACTER_POINT_CHEAT;
        case SMSG_GOSSIP_POI: return BUILD6141_SMSG_GOSSIP_POI;
        case CMSG_CHAT_IGNORED: return BUILD6141_CMSG_CHAT_IGNORED;
        case CMSG_GM_VISION: return BUILD6141_CMSG_GM_VISION;
        case CMSG_SERVER_COMMAND: return BUILD6141_CMSG_SERVER_COMMAND;
        case CMSG_GM_SILENCE: return BUILD6141_CMSG_GM_SILENCE;
        case CMSG_GM_REVEALTO: return BUILD6141_CMSG_GM_REVEALTO;
        case CMSG_GM_RESURRECT: return BUILD6141_CMSG_GM_RESURRECT;
        case CMSG_GM_SUMMONMOB: return BUILD6141_CMSG_GM_SUMMONMOB;
        case CMSG_GM_MOVECORPSE: return BUILD6141_CMSG_GM_MOVECORPSE;
        case CMSG_GM_FREEZE: return BUILD6141_CMSG_GM_FREEZE;
        case CMSG_GM_UBERINVIS: return BUILD6141_CMSG_GM_UBERINVIS;
        case CMSG_GM_REQUEST_PLAYER_INFO: return BUILD6141_CMSG_GM_REQUEST_PLAYER_INFO;
        case SMSG_GM_PLAYER_INFO: return BUILD6141_SMSG_GM_PLAYER_INFO;
        case CMSG_GUILD_RANK: return BUILD6141_CMSG_GUILD_RANK;
        case CMSG_GUILD_ADD_RANK: return BUILD6141_CMSG_GUILD_ADD_RANK;
        case CMSG_GUILD_DEL_RANK: return BUILD6141_CMSG_GUILD_DEL_RANK;
        case CMSG_GUILD_SET_PUBLIC_NOTE: return BUILD6141_CMSG_GUILD_SET_PUBLIC_NOTE;
        case CMSG_GUILD_SET_OFFICER_NOTE: return BUILD6141_CMSG_GUILD_SET_OFFICER_NOTE;
        case SMSG_LOGIN_VERIFY_WORLD: return BUILD6141_SMSG_LOGIN_VERIFY_WORLD;
        case CMSG_CLEAR_EXPLORATION: return BUILD6141_CMSG_CLEAR_EXPLORATION;
        case CMSG_SEND_MAIL: return BUILD6141_CMSG_SEND_MAIL;
        case SMSG_SEND_MAIL_RESULT: return BUILD6141_SMSG_SEND_MAIL_RESULT;
        case CMSG_GET_MAIL_LIST: return BUILD6141_CMSG_GET_MAIL_LIST;
        case SMSG_MAIL_LIST_RESULT: return BUILD6141_SMSG_MAIL_LIST_RESULT;
        case CMSG_BATTLEFIELD_LIST: return BUILD6141_CMSG_BATTLEFIELD_LIST;
        case SMSG_BATTLEFIELD_LIST: return BUILD6141_SMSG_BATTLEFIELD_LIST;
        case CMSG_BATTLEFIELD_JOIN: return BUILD6141_CMSG_BATTLEFIELD_JOIN;
        case SMSG_BATTLEFIELD_WIN_OBSOLETE: return BUILD6141_SMSG_BATTLEFIELD_WIN_OBSOLETE;
        case SMSG_BATTLEFIELD_LOSE_OBSOLETE: return BUILD6141_SMSG_BATTLEFIELD_LOSE_OBSOLETE;
        case CMSG_TAXICLEARNODE: return BUILD6141_CMSG_TAXICLEARNODE;
        case CMSG_TAXIENABLENODE: return BUILD6141_CMSG_TAXIENABLENODE;
        case CMSG_ITEM_TEXT_QUERY: return BUILD6141_CMSG_ITEM_TEXT_QUERY;
        case SMSG_ITEM_TEXT_QUERY_RESPONSE: return BUILD6141_SMSG_ITEM_TEXT_QUERY_RESPONSE;
        case CMSG_MAIL_TAKE_MONEY: return BUILD6141_CMSG_MAIL_TAKE_MONEY;
        case CMSG_MAIL_TAKE_ITEM: return BUILD6141_CMSG_MAIL_TAKE_ITEM;
        case CMSG_MAIL_MARK_AS_READ: return BUILD6141_CMSG_MAIL_MARK_AS_READ;
        case CMSG_MAIL_RETURN_TO_SENDER: return BUILD6141_CMSG_MAIL_RETURN_TO_SENDER;
        case CMSG_MAIL_DELETE: return BUILD6141_CMSG_MAIL_DELETE;
        case CMSG_MAIL_CREATE_TEXT_ITEM: return BUILD6141_CMSG_MAIL_CREATE_TEXT_ITEM;
        case SMSG_SPELLLOGMISS: return BUILD6141_SMSG_SPELLLOGMISS;
        case SMSG_SPELLLOGEXECUTE: return BUILD6141_SMSG_SPELLLOGEXECUTE;
        case SMSG_DEBUGAURAPROC: return BUILD6141_SMSG_DEBUGAURAPROC;
        case SMSG_PERIODICAURALOG: return BUILD6141_SMSG_PERIODICAURALOG;
        case SMSG_SPELLDAMAGESHIELD: return BUILD6141_SMSG_SPELLDAMAGESHIELD;
        case SMSG_SPELLNONMELEEDAMAGELOG: return BUILD6141_SMSG_SPELLNONMELEEDAMAGELOG;
        case CMSG_LEARN_TALENT: return BUILD6141_CMSG_LEARN_TALENT;
        case SMSG_RESURRECT_FAILED: return BUILD6141_SMSG_RESURRECT_FAILED;
        case CMSG_TOGGLE_PVP: return BUILD6141_CMSG_TOGGLE_PVP;
        case SMSG_ZONE_UNDER_ATTACK: return BUILD6141_SMSG_ZONE_UNDER_ATTACK;
        case MSG_AUCTION_HELLO: return BUILD6141_MSG_AUCTION_HELLO;
        case CMSG_AUCTION_SELL_ITEM: return BUILD6141_CMSG_AUCTION_SELL_ITEM;
        case CMSG_AUCTION_REMOVE_ITEM: return BUILD6141_CMSG_AUCTION_REMOVE_ITEM;
        case CMSG_AUCTION_LIST_ITEMS: return BUILD6141_CMSG_AUCTION_LIST_ITEMS;
        case CMSG_AUCTION_LIST_OWNER_ITEMS: return BUILD6141_CMSG_AUCTION_LIST_OWNER_ITEMS;
        case CMSG_AUCTION_PLACE_BID: return BUILD6141_CMSG_AUCTION_PLACE_BID;
        case SMSG_AUCTION_COMMAND_RESULT: return BUILD6141_SMSG_AUCTION_COMMAND_RESULT;
        case SMSG_AUCTION_LIST_RESULT: return BUILD6141_SMSG_AUCTION_LIST_RESULT;
        case SMSG_AUCTION_OWNER_LIST_RESULT: return BUILD6141_SMSG_AUCTION_OWNER_LIST_RESULT;
        case SMSG_AUCTION_BIDDER_NOTIFICATION: return BUILD6141_SMSG_AUCTION_BIDDER_NOTIFICATION;
        case SMSG_AUCTION_OWNER_NOTIFICATION: return BUILD6141_SMSG_AUCTION_OWNER_NOTIFICATION;
        case SMSG_PROCRESIST: return BUILD6141_SMSG_PROCRESIST;
        case SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE: return BUILD6141_SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE;
        case SMSG_DISPEL_FAILED: return BUILD6141_SMSG_DISPEL_FAILED;
        case SMSG_SPELLORDAMAGE_IMMUNE: return BUILD6141_SMSG_SPELLORDAMAGE_IMMUNE;
        case CMSG_AUCTION_LIST_BIDDER_ITEMS: return BUILD6141_CMSG_AUCTION_LIST_BIDDER_ITEMS;
        case SMSG_AUCTION_BIDDER_LIST_RESULT: return BUILD6141_SMSG_AUCTION_BIDDER_LIST_RESULT;
        case SMSG_SET_FLAT_SPELL_MODIFIER: return BUILD6141_SMSG_SET_FLAT_SPELL_MODIFIER;
        case SMSG_SET_PCT_SPELL_MODIFIER: return BUILD6141_SMSG_SET_PCT_SPELL_MODIFIER;
        case CMSG_SET_AMMO: return BUILD6141_CMSG_SET_AMMO;
        case SMSG_CORPSE_RECLAIM_DELAY: return BUILD6141_SMSG_CORPSE_RECLAIM_DELAY;
        case CMSG_SET_ACTIVE_MOVER: return BUILD6141_CMSG_SET_ACTIVE_MOVER;
        case CMSG_PET_CANCEL_AURA: return BUILD6141_CMSG_PET_CANCEL_AURA;
        case CMSG_PLAYER_AI_CHEAT: return BUILD6141_CMSG_PLAYER_AI_CHEAT;
        case CMSG_CANCEL_AUTO_REPEAT_SPELL: return BUILD6141_CMSG_CANCEL_AUTO_REPEAT_SPELL;
        case MSG_GM_ACCOUNT_ONLINE: return BUILD6141_MSG_GM_ACCOUNT_ONLINE;
        case MSG_LIST_STABLED_PETS: return BUILD6141_MSG_LIST_STABLED_PETS;
        case CMSG_STABLE_PET: return BUILD6141_CMSG_STABLE_PET;
        case CMSG_UNSTABLE_PET: return BUILD6141_CMSG_UNSTABLE_PET;
        case CMSG_BUY_STABLE_SLOT: return BUILD6141_CMSG_BUY_STABLE_SLOT;
        case SMSG_STABLE_RESULT: return BUILD6141_SMSG_STABLE_RESULT;
        case CMSG_STABLE_REVIVE_PET: return BUILD6141_CMSG_STABLE_REVIVE_PET;
        case CMSG_STABLE_SWAP_PET: return BUILD6141_CMSG_STABLE_SWAP_PET;
        case MSG_QUEST_PUSH_RESULT: return BUILD6141_MSG_QUEST_PUSH_RESULT;
        case SMSG_PLAY_MUSIC: return BUILD6141_SMSG_PLAY_MUSIC;
        case SMSG_PLAY_OBJECT_SOUND: return BUILD6141_SMSG_PLAY_OBJECT_SOUND;
        case CMSG_REQUEST_PET_INFO: return BUILD6141_CMSG_REQUEST_PET_INFO;
        case CMSG_FAR_SIGHT: return BUILD6141_CMSG_FAR_SIGHT;
        case SMSG_SPELLDISPELLOG: return BUILD6141_SMSG_SPELLDISPELLOG;
        case SMSG_DAMAGE_CALC_LOG: return BUILD6141_SMSG_DAMAGE_CALC_LOG;
        case CMSG_ENABLE_DAMAGE_LOG: return BUILD6141_CMSG_ENABLE_DAMAGE_LOG;
        case CMSG_GROUP_CHANGE_SUB_GROUP: return BUILD6141_CMSG_GROUP_CHANGE_SUB_GROUP;
        case CMSG_REQUEST_PARTY_MEMBER_STATS: return BUILD6141_CMSG_REQUEST_PARTY_MEMBER_STATS;
        case CMSG_GROUP_SWAP_SUB_GROUP: return BUILD6141_CMSG_GROUP_SWAP_SUB_GROUP;
        case CMSG_RESET_FACTION_CHEAT: return BUILD6141_CMSG_RESET_FACTION_CHEAT;
        case CMSG_AUTOSTORE_BANK_ITEM: return BUILD6141_CMSG_AUTOSTORE_BANK_ITEM;
        case CMSG_AUTOBANK_ITEM: return BUILD6141_CMSG_AUTOBANK_ITEM;
        case MSG_QUERY_NEXT_MAIL_TIME: return BUILD6141_MSG_QUERY_NEXT_MAIL_TIME;
        case SMSG_RECEIVED_MAIL: return BUILD6141_SMSG_RECEIVED_MAIL;
        case SMSG_RAID_GROUP_ONLY: return BUILD6141_SMSG_RAID_GROUP_ONLY;
        case CMSG_SET_DURABILITY_CHEAT: return BUILD6141_CMSG_SET_DURABILITY_CHEAT;
        case CMSG_SET_PVP_RANK_CHEAT: return BUILD6141_CMSG_SET_PVP_RANK_CHEAT;
        case CMSG_ADD_PVP_MEDAL_CHEAT: return BUILD6141_CMSG_ADD_PVP_MEDAL_CHEAT;
        case CMSG_DEL_PVP_MEDAL_CHEAT: return BUILD6141_CMSG_DEL_PVP_MEDAL_CHEAT;
        case CMSG_SET_PVP_TITLE: return BUILD6141_CMSG_SET_PVP_TITLE;
        case SMSG_PVP_CREDIT: return BUILD6141_SMSG_PVP_CREDIT;
        case SMSG_AUCTION_REMOVED_NOTIFICATION: return BUILD6141_SMSG_AUCTION_REMOVED_NOTIFICATION;
        case CMSG_GROUP_RAID_CONVERT: return BUILD6141_CMSG_GROUP_RAID_CONVERT;
        case CMSG_GROUP_ASSISTANT_LEADER: return BUILD6141_CMSG_GROUP_ASSISTANT_LEADER;
        case CMSG_BUYBACK_ITEM: return BUILD6141_CMSG_BUYBACK_ITEM;
        case SMSG_SERVER_MESSAGE: return BUILD6141_SMSG_SERVER_MESSAGE;
        case CMSG_MEETINGSTONE_JOIN: return BUILD6141_CMSG_MEETINGSTONE_JOIN; // lua: SetSavedInstanceExtend;
        case CMSG_MEETINGSTONE_LEAVE: return BUILD6141_CMSG_MEETINGSTONE_LEAVE;
        case CMSG_MEETINGSTONE_CHEAT: return BUILD6141_CMSG_MEETINGSTONE_CHEAT;
        case SMSG_MEETINGSTONE_SETQUEUE: return BUILD6141_SMSG_MEETINGSTONE_SETQUEUE;
        case CMSG_MEETINGSTONE_INFO: return BUILD6141_CMSG_MEETINGSTONE_INFO;
        case SMSG_MEETINGSTONE_COMPLETE: return BUILD6141_SMSG_MEETINGSTONE_COMPLETE;
        case SMSG_MEETINGSTONE_IN_PROGRESS: return BUILD6141_SMSG_MEETINGSTONE_IN_PROGRESS;
        case SMSG_MEETINGSTONE_MEMBER_ADDED: return BUILD6141_SMSG_MEETINGSTONE_MEMBER_ADDED;
        case CMSG_GMTICKETSYSTEM_TOGGLE: return BUILD6141_CMSG_GMTICKETSYSTEM_TOGGLE;
        case CMSG_CANCEL_GROWTH_AURA: return BUILD6141_CMSG_CANCEL_GROWTH_AURA;
        case SMSG_CANCEL_AUTO_REPEAT: return BUILD6141_SMSG_CANCEL_AUTO_REPEAT;
        case SMSG_STANDSTATE_UPDATE: return BUILD6141_SMSG_STANDSTATE_UPDATE;
        case SMSG_LOOT_ALL_PASSED: return BUILD6141_SMSG_LOOT_ALL_PASSED;
        case SMSG_LOOT_ROLL_WON: return BUILD6141_SMSG_LOOT_ROLL_WON;
        case CMSG_LOOT_ROLL: return BUILD6141_CMSG_LOOT_ROLL;
        case SMSG_LOOT_START_ROLL: return BUILD6141_SMSG_LOOT_START_ROLL;
        case SMSG_LOOT_ROLL: return BUILD6141_SMSG_LOOT_ROLL;
        case CMSG_LOOT_MASTER_GIVE: return BUILD6141_CMSG_LOOT_MASTER_GIVE;
        case SMSG_LOOT_MASTER_LIST: return BUILD6141_SMSG_LOOT_MASTER_LIST;
        case SMSG_SET_FORCED_REACTIONS: return BUILD6141_SMSG_SET_FORCED_REACTIONS;
        case SMSG_SPELL_FAILED_OTHER: return BUILD6141_SMSG_SPELL_FAILED_OTHER;
        case SMSG_GAMEOBJECT_RESET_STATE: return BUILD6141_SMSG_GAMEOBJECT_RESET_STATE;
        case CMSG_REPAIR_ITEM: return BUILD6141_CMSG_REPAIR_ITEM;
        case SMSG_CHAT_PLAYER_NOT_FOUND: return BUILD6141_SMSG_CHAT_PLAYER_NOT_FOUND;
        case MSG_TALENT_WIPE_CONFIRM: return BUILD6141_MSG_TALENT_WIPE_CONFIRM;
        case SMSG_SUMMON_REQUEST: return BUILD6141_SMSG_SUMMON_REQUEST;
        case CMSG_SUMMON_RESPONSE: return BUILD6141_CMSG_SUMMON_RESPONSE;
        case MSG_MOVE_TOGGLE_GRAVITY_CHEAT: return BUILD6141_MSG_MOVE_TOGGLE_GRAVITY_CHEAT;
        case SMSG_MONSTER_MOVE_TRANSPORT: return BUILD6141_SMSG_MONSTER_MOVE_TRANSPORT;
        case SMSG_PET_BROKEN: return BUILD6141_SMSG_PET_BROKEN;
        case MSG_MOVE_FEATHER_FALL: return BUILD6141_MSG_MOVE_FEATHER_FALL;
        case MSG_MOVE_WATER_WALK: return BUILD6141_MSG_MOVE_WATER_WALK;
        case CMSG_SERVER_BROADCAST: return BUILD6141_CMSG_SERVER_BROADCAST;
        case CMSG_SELF_RES: return BUILD6141_CMSG_SELF_RES;
        case SMSG_FEIGN_DEATH_RESISTED: return BUILD6141_SMSG_FEIGN_DEATH_RESISTED;
        case CMSG_RUN_SCRIPT: return BUILD6141_CMSG_RUN_SCRIPT;
        case SMSG_SCRIPT_MESSAGE: return BUILD6141_SMSG_SCRIPT_MESSAGE;
        case SMSG_DUEL_COUNTDOWN: return BUILD6141_SMSG_DUEL_COUNTDOWN;
        case SMSG_AREA_TRIGGER_MESSAGE: return BUILD6141_SMSG_AREA_TRIGGER_MESSAGE;
        case CMSG_TOGGLE_HELM: return BUILD6141_CMSG_TOGGLE_HELM;
        case CMSG_TOGGLE_CLOAK: return BUILD6141_CMSG_TOGGLE_CLOAK;
        case SMSG_MEETINGSTONE_JOINFAILED: return BUILD6141_SMSG_MEETINGSTONE_JOINFAILED;
        case SMSG_PLAYER_SKINNED: return BUILD6141_SMSG_PLAYER_SKINNED;
        case SMSG_DURABILITY_DAMAGE_DEATH: return BUILD6141_SMSG_DURABILITY_DAMAGE_DEATH;
        case CMSG_SET_EXPLORATION: return BUILD6141_CMSG_SET_EXPLORATION;
        case CMSG_SET_ACTIONBAR_TOGGLES: return BUILD6141_CMSG_SET_ACTIONBAR_TOGGLES;
        case UMSG_DELETE_GUILD_CHARTER: return BUILD6141_UMSG_DELETE_GUILD_CHARTER;
        case MSG_PETITION_RENAME: return BUILD6141_MSG_PETITION_RENAME;
        case SMSG_INIT_WORLD_STATES: return BUILD6141_SMSG_INIT_WORLD_STATES;
        case SMSG_UPDATE_WORLD_STATE: return BUILD6141_SMSG_UPDATE_WORLD_STATE;
        case CMSG_ITEM_NAME_QUERY: return BUILD6141_CMSG_ITEM_NAME_QUERY;
        case SMSG_ITEM_NAME_QUERY_RESPONSE: return BUILD6141_SMSG_ITEM_NAME_QUERY_RESPONSE;
        case SMSG_PET_ACTION_FEEDBACK: return BUILD6141_SMSG_PET_ACTION_FEEDBACK;
        case CMSG_CHAR_RENAME: return BUILD6141_CMSG_CHAR_RENAME;
        case SMSG_CHAR_RENAME: return BUILD6141_SMSG_CHAR_RENAME;
        case CMSG_MOVE_SPLINE_DONE: return BUILD6141_CMSG_MOVE_SPLINE_DONE;
        case CMSG_MOVE_FALL_RESET: return BUILD6141_CMSG_MOVE_FALL_RESET;
        case SMSG_INSTANCE_SAVE_CREATED: return BUILD6141_SMSG_INSTANCE_SAVE_CREATED;
        case SMSG_RAID_INSTANCE_INFO: return BUILD6141_SMSG_RAID_INSTANCE_INFO;
        case CMSG_REQUEST_RAID_INFO: return BUILD6141_CMSG_REQUEST_RAID_INFO;
        case CMSG_MOVE_TIME_SKIPPED: return BUILD6141_CMSG_MOVE_TIME_SKIPPED;
        case CMSG_MOVE_FEATHER_FALL_ACK: return BUILD6141_CMSG_MOVE_FEATHER_FALL_ACK;
        case CMSG_MOVE_WATER_WALK_ACK: return BUILD6141_CMSG_MOVE_WATER_WALK_ACK;
        case CMSG_MOVE_NOT_ACTIVE_MOVER: return BUILD6141_CMSG_MOVE_NOT_ACTIVE_MOVER;
        case SMSG_PLAY_SOUND: return BUILD6141_SMSG_PLAY_SOUND;
        case CMSG_BATTLEFIELD_STATUS: return BUILD6141_CMSG_BATTLEFIELD_STATUS;
        case SMSG_BATTLEFIELD_STATUS: return BUILD6141_SMSG_BATTLEFIELD_STATUS;
        case CMSG_BATTLEFIELD_PORT: return BUILD6141_CMSG_BATTLEFIELD_PORT;
        case MSG_INSPECT_HONOR_STATS: return BUILD6141_MSG_INSPECT_HONOR_STATS;
        case CMSG_BATTLEMASTER_HELLO: return BUILD6141_CMSG_BATTLEMASTER_HELLO;
        case CMSG_MOVE_START_SWIM_CHEAT: return BUILD6141_CMSG_MOVE_START_SWIM_CHEAT;
        case CMSG_MOVE_STOP_SWIM_CHEAT: return BUILD6141_CMSG_MOVE_STOP_SWIM_CHEAT;
        case SMSG_FORCE_WALK_SPEED_CHANGE: return BUILD6141_SMSG_FORCE_WALK_SPEED_CHANGE;
        case CMSG_FORCE_WALK_SPEED_CHANGE_ACK: return BUILD6141_CMSG_FORCE_WALK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_SWIM_BACK_SPEED_CHANGE: return BUILD6141_SMSG_FORCE_SWIM_BACK_SPEED_CHANGE;
        case CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK: return BUILD6141_CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK;
        case SMSG_FORCE_TURN_RATE_CHANGE: return BUILD6141_SMSG_FORCE_TURN_RATE_CHANGE;
        case CMSG_FORCE_TURN_RATE_CHANGE_ACK: return BUILD6141_CMSG_FORCE_TURN_RATE_CHANGE_ACK;
        case MSG_PVP_LOG_DATA: return BUILD6141_MSG_PVP_LOG_DATA;
        case CMSG_LEAVE_BATTLEFIELD: return BUILD6141_CMSG_LEAVE_BATTLEFIELD;
        case CMSG_AREA_SPIRIT_HEALER_QUERY: return BUILD6141_CMSG_AREA_SPIRIT_HEALER_QUERY;
        case CMSG_AREA_SPIRIT_HEALER_QUEUE: return BUILD6141_CMSG_AREA_SPIRIT_HEALER_QUEUE;
        case SMSG_AREA_SPIRIT_HEALER_TIME: return BUILD6141_SMSG_AREA_SPIRIT_HEALER_TIME;
        case CMSG_GM_UNTEACH: return BUILD6141_CMSG_GM_UNTEACH;
        case SMSG_WARDEN_DATA: return BUILD6141_SMSG_WARDEN_DATA;
        case CMSG_WARDEN_DATA: return BUILD6141_CMSG_WARDEN_DATA;
        case SMSG_GROUP_JOINED_BATTLEGROUND: return BUILD6141_SMSG_GROUP_JOINED_BATTLEGROUND;
        case MSG_BATTLEGROUND_PLAYER_POSITIONS: return BUILD6141_MSG_BATTLEGROUND_PLAYER_POSITIONS;
        case CMSG_PET_STOP_ATTACK: return BUILD6141_CMSG_PET_STOP_ATTACK;
        case SMSG_BINDER_CONFIRM: return BUILD6141_SMSG_BINDER_CONFIRM;
        case SMSG_BATTLEGROUND_PLAYER_JOINED: return BUILD6141_SMSG_BATTLEGROUND_PLAYER_JOINED;
        case SMSG_BATTLEGROUND_PLAYER_LEFT: return BUILD6141_SMSG_BATTLEGROUND_PLAYER_LEFT;
        case CMSG_BATTLEMASTER_JOIN: return BUILD6141_CMSG_BATTLEMASTER_JOIN;
        case SMSG_ADDON_INFO: return BUILD6141_SMSG_ADDON_INFO;
        case CMSG_PET_UNLEARN: return BUILD6141_CMSG_PET_UNLEARN;
        case SMSG_PET_UNLEARN_CONFIRM: return BUILD6141_SMSG_PET_UNLEARN_CONFIRM;
        case SMSG_PARTY_MEMBER_STATS_FULL: return BUILD6141_SMSG_PARTY_MEMBER_STATS_FULL;
        case CMSG_PET_SPELL_AUTOCAST: return BUILD6141_CMSG_PET_SPELL_AUTOCAST;
        case SMSG_WEATHER: return BUILD6141_SMSG_WEATHER;
        case SMSG_PLAY_TIME_WARNING: return BUILD6141_SMSG_PLAY_TIME_WARNING;
        case SMSG_MINIGAME_SETUP: return BUILD6141_SMSG_MINIGAME_SETUP;
        case SMSG_MINIGAME_STATE: return BUILD6141_SMSG_MINIGAME_STATE;
        case CMSG_MINIGAME_MOVE: return BUILD6141_CMSG_MINIGAME_MOVE;
        case SMSG_MINIGAME_MOVE_FAILED: return BUILD6141_SMSG_MINIGAME_MOVE_FAILED;
        case SMSG_RAID_INSTANCE_MESSAGE: return BUILD6141_SMSG_RAID_INSTANCE_MESSAGE;
        case SMSG_COMPRESSED_MOVES: return BUILD6141_SMSG_COMPRESSED_MOVES;
        case CMSG_GUILD_INFO_TEXT: return BUILD6141_CMSG_GUILD_INFO_TEXT;
        case SMSG_CHAT_RESTRICTED: return BUILD6141_SMSG_CHAT_RESTRICTED;
        case SMSG_SPLINE_SET_RUN_SPEED: return BUILD6141_SMSG_SPLINE_SET_RUN_SPEED;
        case SMSG_SPLINE_SET_RUN_BACK_SPEED: return BUILD6141_SMSG_SPLINE_SET_RUN_BACK_SPEED;
        case SMSG_SPLINE_SET_SWIM_SPEED: return BUILD6141_SMSG_SPLINE_SET_SWIM_SPEED;
        case SMSG_SPLINE_SET_WALK_SPEED: return BUILD6141_SMSG_SPLINE_SET_WALK_SPEED;
        case SMSG_SPLINE_SET_SWIM_BACK_SPEED: return BUILD6141_SMSG_SPLINE_SET_SWIM_BACK_SPEED;
        case SMSG_SPLINE_SET_TURN_RATE: return BUILD6141_SMSG_SPLINE_SET_TURN_RATE;
        case SMSG_SPLINE_MOVE_UNROOT: return BUILD6141_SMSG_SPLINE_MOVE_UNROOT;
        case SMSG_SPLINE_MOVE_FEATHER_FALL: return BUILD6141_SMSG_SPLINE_MOVE_FEATHER_FALL;
        case SMSG_SPLINE_MOVE_NORMAL_FALL: return BUILD6141_SMSG_SPLINE_MOVE_NORMAL_FALL;
        case SMSG_SPLINE_MOVE_SET_HOVER: return BUILD6141_SMSG_SPLINE_MOVE_SET_HOVER;
        case SMSG_SPLINE_MOVE_UNSET_HOVER: return BUILD6141_SMSG_SPLINE_MOVE_UNSET_HOVER;
        case SMSG_SPLINE_MOVE_WATER_WALK: return BUILD6141_SMSG_SPLINE_MOVE_WATER_WALK;
        case SMSG_SPLINE_MOVE_LAND_WALK: return BUILD6141_SMSG_SPLINE_MOVE_LAND_WALK;
        case SMSG_SPLINE_MOVE_START_SWIM: return BUILD6141_SMSG_SPLINE_MOVE_START_SWIM;
        case SMSG_SPLINE_MOVE_STOP_SWIM: return BUILD6141_SMSG_SPLINE_MOVE_STOP_SWIM;
        case SMSG_SPLINE_MOVE_SET_RUN_MODE: return BUILD6141_SMSG_SPLINE_MOVE_SET_RUN_MODE;
        case SMSG_SPLINE_MOVE_SET_WALK_MODE: return BUILD6141_SMSG_SPLINE_MOVE_SET_WALK_MODE;
        case CMSG_GM_NUKE_ACCOUNT: return BUILD6141_CMSG_GM_NUKE_ACCOUNT;
        case MSG_GM_DESTROY_CORPSE: return BUILD6141_MSG_GM_DESTROY_CORPSE;
        case CMSG_GM_DESTROY_ONLINE_CORPSE: return BUILD6141_CMSG_GM_DESTROY_ONLINE_CORPSE;
        case CMSG_ACTIVATETAXIEXPRESS: return BUILD6141_CMSG_ACTIVATETAXIEXPRESS;
        case SMSG_SET_FACTION_ATWAR: return BUILD6141_SMSG_SET_FACTION_ATWAR;
        case SMSG_GAMETIMEBIAS_SET: return BUILD6141_SMSG_GAMETIMEBIAS_SET;
        case CMSG_DEBUG_ACTIONS_START: return BUILD6141_CMSG_DEBUG_ACTIONS_START;
        case CMSG_DEBUG_ACTIONS_STOP: return BUILD6141_CMSG_DEBUG_ACTIONS_STOP;
        case CMSG_SET_FACTION_INACTIVE: return BUILD6141_CMSG_SET_FACTION_INACTIVE;
        case CMSG_SET_WATCHED_FACTION: return BUILD6141_CMSG_SET_WATCHED_FACTION;
        case MSG_MOVE_TIME_SKIPPED: return BUILD6141_MSG_MOVE_TIME_SKIPPED;
        case SMSG_SPLINE_MOVE_ROOT: return BUILD6141_SMSG_SPLINE_MOVE_ROOT;
        case CMSG_SET_EXPLORATION_ALL: return BUILD6141_CMSG_SET_EXPLORATION_ALL;
        case SMSG_INVALIDATE_PLAYER: return BUILD6141_SMSG_INVALIDATE_PLAYER;
        case CMSG_RESET_INSTANCES: return BUILD6141_CMSG_RESET_INSTANCES;
        case SMSG_INSTANCE_RESET: return BUILD6141_SMSG_INSTANCE_RESET;
        case SMSG_INSTANCE_RESET_FAILED: return BUILD6141_SMSG_INSTANCE_RESET_FAILED;
        case SMSG_UPDATE_LAST_INSTANCE: return BUILD6141_SMSG_UPDATE_LAST_INSTANCE;
        case MSG_RAID_TARGET_UPDATE: return BUILD6141_MSG_RAID_TARGET_UPDATE;
        case MSG_RAID_READY_CHECK: return BUILD6141_MSG_RAID_READY_CHECK;
        case CMSG_LUA_USAGE: return BUILD6141_CMSG_LUA_USAGE;
        case SMSG_PET_ACTION_SOUND: return BUILD6141_SMSG_PET_ACTION_SOUND;
        case SMSG_PET_DISMISS_SOUND: return BUILD6141_SMSG_PET_DISMISS_SOUND;
        case SMSG_GHOSTEE_GONE: return BUILD6141_SMSG_GHOSTEE_GONE;
        case CMSG_GM_UPDATE_TICKET_STATUS: return BUILD6141_CMSG_GM_UPDATE_TICKET_STATUS;
        case SMSG_GM_TICKET_STATUS_UPDATE: return BUILD6141_SMSG_GM_TICKET_STATUS_UPDATE;
        case MSG_SET_DUNGEON_DIFFICULTY: return BUILD6141_MSG_SET_DUNGEON_DIFFICULTY;
        case CMSG_GMSURVEY_SUBMIT: return BUILD6141_CMSG_GMSURVEY_SUBMIT;
        case SMSG_UPDATE_INSTANCE_OWNERSHIP: return BUILD6141_SMSG_UPDATE_INSTANCE_OWNERSHIP;
        case CMSG_IGNORE_KNOCKBACK_CHEAT: return BUILD6141_CMSG_IGNORE_KNOCKBACK_CHEAT;
        case SMSG_CHAT_PLAYER_AMBIGUOUS: return BUILD6141_SMSG_CHAT_PLAYER_AMBIGUOUS;
        case MSG_DELAY_GHOST_TELEPORT: return BUILD6141_MSG_DELAY_GHOST_TELEPORT;
        case SMSG_SPELLINSTAKILLLOG: return BUILD6141_SMSG_SPELLINSTAKILLLOG;
        case SMSG_SPELL_UPDATE_CHAIN_TARGETS: return BUILD6141_SMSG_SPELL_UPDATE_CHAIN_TARGETS;
        case CMSG_CHAT_FILTERED: return BUILD6141_CMSG_CHAT_FILTERED;
        case SMSG_EXPECTED_SPAM_RECORDS: return BUILD6141_SMSG_EXPECTED_SPAM_RECORDS;
        case SMSG_SPELLSTEALLOG: return BUILD6141_SMSG_SPELLSTEALLOG;
        case CMSG_LOTTERY_QUERY_OBSOLETE: return BUILD6141_CMSG_LOTTERY_QUERY_OBSOLETE;
        case SMSG_LOTTERY_QUERY_RESULT_OBSOLETE: return BUILD6141_SMSG_LOTTERY_QUERY_RESULT_OBSOLETE;
        case CMSG_BUY_LOTTERY_TICKET_OBSOLETE: return BUILD6141_CMSG_BUY_LOTTERY_TICKET_OBSOLETE;
        case SMSG_LOTTERY_RESULT_OBSOLETE: return BUILD6141_SMSG_LOTTERY_RESULT_OBSOLETE;
        case SMSG_CHARACTER_PROFILE: return BUILD6141_SMSG_CHARACTER_PROFILE;
        case SMSG_CHARACTER_PROFILE_REALM_CONNECTED: return BUILD6141_SMSG_CHARACTER_PROFILE_REALM_CONNECTED;
        case SMSG_UNK: return BUILD6141_SMSG_UNK;
        case SMSG_DEFENSE_MESSAGE: return BUILD6141_SMSG_DEFENSE_MESSAGE;
        default: return 0xFFFF;
        }
    default:
        return 0xFFFF;
    }
}