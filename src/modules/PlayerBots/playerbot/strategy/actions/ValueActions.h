#pragma once
#include "GenericActions.h"

namespace ai
{
    class SetFocusHealTargetsAction : public ChatCommandAction
    {
    public:
        SetFocusHealTargetsAction(PlayerbotAI* ai, std::string name = "focus heal targets") : ChatCommandAction(ai, name) {}
        bool Execute(Event& event) override;
    };

    class SetWaitForAttackTimeAction : public ChatCommandAction
    {
    public:
        SetWaitForAttackTimeAction(PlayerbotAI* ai, std::string name = "wait for attack time") : ChatCommandAction(ai, name) {}
        bool Execute(Event& event) override;
    };

    class SetFollowTargetAction : public ChatCommandAction
    {
    public:
        SetFollowTargetAction(PlayerbotAI* ai, std::string name = "follow target") : ChatCommandAction(ai, name) {}
        bool Execute(Event& event) override;
    };

    class SetSpellTargetAction : public ChatCommandAction
    {
    public:
        SetSpellTargetAction(PlayerbotAI* ai, std::string name) : ChatCommandAction(ai, name) {}
        bool Execute(Event& event) override;
    };

    class SetBoostTargetsAction : public SetSpellTargetAction
    {
    public:
        SetBoostTargetsAction(PlayerbotAI* ai) : SetSpellTargetAction(ai, "boost targets") {}
    };

    class SetReviveTargetsAction : public SetSpellTargetAction
    {
    public:
        SetReviveTargetsAction(PlayerbotAI* ai) : SetSpellTargetAction(ai, "revive targets") {}
    };

    class SetBuffTargetsAction : public SetSpellTargetAction
    {
    public:
        SetBuffTargetsAction(PlayerbotAI* ai) : SetSpellTargetAction(ai, "buff targets") {}
    };
}
