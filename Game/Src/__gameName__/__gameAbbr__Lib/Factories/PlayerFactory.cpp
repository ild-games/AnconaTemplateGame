#include "PlayerFactory.hpp"

using namespace ild;

void PlayerFactory::Initialize({{gameAbbr}}GameSystems * gameSystems, {{gameAbbr}}InputHandler * inputHandler)
{
    auto playerEntity = gameSystems->systemManager().GetEntity("player");
    inputHandler->systems(gameSystems);
    auto controlComp = new {{gameAbbr}}InputComponent(playerEntity, *gameSystems, *inputHandler);
    gameSystems->input().AddComponent(playerEntity, controlComp);
}
