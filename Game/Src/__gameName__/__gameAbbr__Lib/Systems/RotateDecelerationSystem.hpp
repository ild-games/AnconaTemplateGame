#ifndef {{gameAbbr}}Lib_Systems_RotateDecelerationSystem_H_
#define {{gameAbbr}}Lib_Systems_RotateDecelerationSystem_H_

#include <Ancona/Core2D/Systems/RotateSystem.hpp>
#include <Ancona/Framework/EntityFramework/UnorderedSystem.hpp>
#include <Ancona/Framework/Serializing/Serializing.hpp>

namespace ild
{

class RotateDecelerationSystem;

/**
 * @brief Used to decelerate a rotate component
 */
class RotateDecelerationComponent
{
    public:
        /**
         * @brief Construct a rotate decelerate component with necessary info from the system.
         */
        RotateDecelerationComponent(RotateDecelerationSystem * rotateDecelerationSystem);

        /**
         * @brief Construct a blank RotateDecelerationComponent for serialization.
         */
        RotateDecelerationComponent() { }

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

        /* getters and setters */
        float decelerationSpeed() { return _decelerationSpeed; }
        void decelerationSpeed(float decelerationSpeed) { _decelerationSpeed = decelerationSpeed; }
    private:
        RotateSystem * _rotateSystem;
        RotateComponent * _rotateComponent;
        float _decelerationSpeed;
        Entity _entity;
};

/**
 * @brief System used to create RotateDecelerationComponents
 */
class RotateDecelerationSystem : public UnorderedSystem<RotateDecelerationComponent>
{
    public:
        RotateDecelerationSystem(
                std::string name,
                SystemManager & manager,
                RotateSystem * rotateSystem);

        void Update(float delta) override;

        RotateDecelerationComponent * CreateComponent(
                const Entity & entity);

        /* getters and setters */
        RotateSystem * rotateSystem() { return _rotateSystem; }
    private:
        RotateSystem * _rotateSystem;
};

}

#endif
