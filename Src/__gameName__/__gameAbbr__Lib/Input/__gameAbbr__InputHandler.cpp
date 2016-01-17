#include <Ancona/Core2D/InputDevices/InputHandler.hpp>

#include "../Systems/{{gameAbbr}}GameSystems.hpp"
#include "{{gameAbbr}}InputHandler.hpp"

using namespace ild;

///////////////////////////////
// {{gameAbbr}}InputHandler
void {{gameAbbr}}InputHandler::RegisterInputComponent({{gameAbbr}}InputComponent * component)
{
    _playerComponent = component;
}

///////////////////////////////
// {{gameAbbr}}InputComponent
{{gameAbbr}}InputComponent::{{gameAbbr}}InputComponent(
        const Entity & player,
        {{gameAbbr}}GameSystems & systems,
        {{gameAbbr}}InputHandler & inputHandler) :
    InputControlComponent(inputHandler),
    _playerEntity(player),
    _systems(systems)
{
    inputHandler.RegisterInputComponent(this);
}
