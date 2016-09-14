#ifndef {{includeGuardSegment}}_{{systemName}}System_H_
#define {{includeGuardSegment}}_{{systemName}}System_H_

#include <Ancona/Framework/EntityFramework/UnorderedSystem.hpp>
#include <Ancona/Framework/Serializing/Serializing.hpp>

namespace ild
{

////////// TEMPLATIZED SYSTEM SETUP INSTRUCTIONS
/// Before using this you must initialize an instance of the template in your GameSystems class

/**
 * @brief { {{systemName}}Component description }
 */
class {{systemName}}Component
{
    public:
        /**
         * Construct a blank {{systemName}}Component for serialization.
         */
        {{systemName}}Component();

        /**
         * @copydoc ild::CameraComponent::FetchDependencies
         */
        void FetchDependencies(const Entity & entity);

        /**
         * @copydoc ild::CameraComponent::Serialize
         */
        void Serialize(Archive & arc);

        /**
         * @brief Update step where the component logic happens.
         */
        void Update(float delta);

    private:
};

/**
 * @brief { {{systemName}}System description }
 */
class {{systemName}}System : public UnorderedSystem<{{systemName}}Component>
{
    public:
        {{systemName}}System(
                std::string name,
                SystemManager & manager);

        void Update(float delta) override;

        {{systemName}}Component * CreateComponent(
                const Entity & entity);

};

}

#endif
