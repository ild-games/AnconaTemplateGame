#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/RotateSystem.hpp>

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

void {{gameAbbr}}InputComponent::RotateDuck()
{
    RotateEntity(_systems.systemManager().GetEntity("duck"));
}

void {{gameAbbr}}InputComponent::RotateCross()
{
    RotateEntity(_systems.systemManager().GetEntity("cross"));
}

void {{gameAbbr}}InputComponent::RotateEntity(const Entity & entity)
{
    auto rotateComp = _systems.rotate()[entity];
    if (!_systems.rotateDeceleration().EntityHasComponent(entity))
    {
        _systems.rotateDeceleration().CreateComponent(entity);
    }
    
    if (rotateComp->speed() < 2000.0f)
    {
        rotateComp->speed(rotateComp->speed() + 25.0f);
    }
}
