#pragma once
#include "GenericActions.h"

namespace ai
{
    class TellSpellAction : public ChatCommandAction
    {
    public:
        TellSpellAction(PlayerbotAI* ai) : ChatCommandAction(ai, "spell") {}
        virtual bool Execute(Event& event) override;
    };

    class TellCastFailedAction : public Action 
    {
    public:
        TellCastFailedAction(PlayerbotAI* ai) : Action(ai, "tell cast failed") {}

        virtual bool Execute(Event& event);
    };
}
