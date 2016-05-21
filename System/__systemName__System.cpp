#include "{{systemName}}System.hpp"

using namespace ild;

////////// TEMPLATIZED SYSTEM SETUP INSTRUCTIONS
/// Before using this you must initialize an instance of the template in your GameSystems class

/* Component */
{{systemName}}Component::{{systemName}}Component()
{
}

void {{systemName}}Component::Update(float delta)
{
    // Implement component logic here
}

void {{systemName}}Component::Serialize(Archive & arc)
{
    // Implement component serialization here
}

void {{systemName}}Component::FetchDependencies(const Entity &entity)
{
    // Implement component post serialization dependency fetch here
}

/* System */
{{systemName}}System::{{systemName}}System(
        std::string name,
        SystemManager &manager) :
    UnorderedSystem(name, manager, UpdateStep::Update)
{
}

void {{systemName}}System::Update(float delta)
{
    for (EntityComponentPair comp : *this)
    {
        comp.second->Update(delta);
    }
}

{{systemName}}Component * {{systemName}}System::CreateComponent(const Entity &entity)
{
    {{systemName}}Component * comp = new {{systemName}}Component();
    AttachComponent(entity, comp);
    return comp;
}
