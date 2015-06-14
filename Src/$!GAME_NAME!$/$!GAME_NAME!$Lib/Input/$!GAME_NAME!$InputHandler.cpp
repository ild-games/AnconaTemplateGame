#include <Ancona/Core2D/InputDevices/InputHandler.hpp>

#include "../Systems/$!GAME_NAME!$GameSystems.hpp"
#include "$!GAME_NAME!$InputHandler.hpp"

using namespace ild;

///////////////////////////////
// $!GAME_NAME!$InputHandler //
///////////////////////////////
void $!GAME_NAME!$InputHandler::RegisterInputComponent($!GAME_NAME!$InputComponent * component)
{
    _playerComponent = component;
}

/////////////////////////////////
// $!GAME_NAME!$InputComponent //
/////////////////////////////////
$!GAME_NAME!$InputComponent::$!GAME_NAME!$InputComponent(
        const Entity & player,
        $!GAME_NAME!$GameSystems & systems,
        $!GAME_NAME!$InputHandler & inputHandler) :
    InputControlComponent(inputHandler),
    _playerEntity(player),
    _systems(systems)
{
    inputHandler.RegisterInputComponent(this);
}
