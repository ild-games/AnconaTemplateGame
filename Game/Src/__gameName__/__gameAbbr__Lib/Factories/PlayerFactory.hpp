#ifndef {{gameAbbr}}_Factories_PlayerFactory_H_
#define {{gameAbbr}}_Factories_PlayerFactory_H_

#include <Ancona/Core2D/Systems/Collision/CollisionSystem.hpp>


#include "../Systems/{{gameAbbr}}GameSystems.hpp"
#include "../Input/{{gameAbbr}}InputHandler.hpp"

namespace ild
{

namespace PlayerFactory
{

/**
 * Initializes the player's non serialized attributes
 * @param gameSystems  GameSystems class for the game
 * @param inputHandler InputHandler for the player
 */
void Initialize({{gameAbbr}}GameSystems * gameSystems, {{gameAbbr}}InputHandler * inputHandler);

}

}

#endif
