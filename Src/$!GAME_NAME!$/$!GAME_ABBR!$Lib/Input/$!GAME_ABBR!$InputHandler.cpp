#include <Ancona/Core2D/InputDevices/InputHandler.hpp>

#include "../Systems/$!GAME_ABBR!$GameSystems.hpp"
#include "$!GAME_ABBR!$InputHandler.hpp"

using namespace ild;

///////////////////////////////
// $!GAME_ABBR!$InputHandler //
///////////////////////////////
void $!GAME_ABBR!$InputHandler::RegisterInputComponent($!GAME_ABBR!$InputComponent * component)
{
    _playerComponent = component;
}

/////////////////////////////////
// $!GAME_ABBR!$InputComponent //
/////////////////////////////////
$!GAME_ABBR!$InputComponent::$!GAME_ABBR!$InputComponent(
        const Entity & player,
        $!GAME_ABBR!$GameSystems & systems,
        $!GAME_ABBR!$InputHandler & inputHandler) :
    InputControlComponent(inputHandler),
    _playerEntity(player),
    _systems(systems)
{
    inputHandler.RegisterInputComponent(this);
}
