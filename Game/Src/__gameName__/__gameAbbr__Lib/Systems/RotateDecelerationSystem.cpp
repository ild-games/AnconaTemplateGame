#include "RotateDecelerationSystem.hpp"

using namespace ild;

/* Component */
RotateDecelerationComponent::RotateDecelerationComponent(RotateDecelerationSystem * rotateDecelerationSystem) :
    _rotateSystem(rotateDecelerationSystem->rotateSystem())
{
}

void RotateDecelerationComponent::Update(float delta)
{
    if (_rotateComponent->speed() > 0)
    {
        _rotateComponent->speed(_rotateComponent->speed() - (50.0f * delta));
        if (_rotateComponent->speed() < 0)
        {
            _rotateComponent->speed(0);
        }
    }
    else if (_rotateSystem->EntityHasComponent(_entity))
    {
        _rotateSystem->RemoveComponent(_entity);
    }
}

void RotateDecelerationComponent::Serialize(Archive & arc)
{
    arc(_decelerationSpeed, "decelerationSpeed");
    arc.system(_rotateSystem, "rotate");
}

void RotateDecelerationComponent::FetchDependencies(const Entity &entity)
{
    _rotateComponent = _rotateSystem->at(entity);
}

/* System */
RotateDecelerationSystem::RotateDecelerationSystem(
        std::string name,
        SystemManager &manager,
        RotateSystem * rotateSystem) :
    UnorderedSystem(name, manager, UpdateStep::Update),
    _rotateSystem(rotateSystem)
{
}

void RotateDecelerationSystem::Update(float delta)
{
    for (EntityComponentPair comp : *this)
    {
        comp.second->Update(delta);
    }
}

RotateDecelerationComponent * RotateDecelerationSystem::CreateComponent(const Entity &entity)
{
    RotateDecelerationComponent * comp = new RotateDecelerationComponent(this);
    AttachComponent(entity, comp);
    return comp;
}
