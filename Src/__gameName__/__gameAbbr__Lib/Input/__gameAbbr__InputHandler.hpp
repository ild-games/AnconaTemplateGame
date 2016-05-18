#ifndef {{gameAbbr}}_Input_{{gameAbbr}}InputHandler_H_
#define {{gameAbbr}}_Input_{{gameAbbr}}InputHandler_H_

#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/InputControlComponent.hpp>

#include "../Systems/{{gameAbbr}}GameSystems.hpp"

namespace ild
{

class {{gameAbbr}}GameSystems;
class {{gameAbbr}}InputComponent;

/**
 * @brief Base InputHandler for {{ gameName }}
 */
class {{gameAbbr}}InputHandler : public InputHandler
{
    public:
        /**
         * @brief Registers the input component that handles the actions done via input.
         *
         * @param component InputComponent instance
         */
        void RegisterInputComponent({{gameAbbr}}InputComponent * component);

        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput() { };

        /* getters and setters */
        void systems({{gameAbbr}}GameSystems * systems) { _systems = systems; }
    protected:
        {{gameAbbr}}InputComponent * _playerComponent;
        {{gameAbbr}}GameSystems * _systems;
};

/**
 * @brief InputComponent for game player interaction for {{ gameName }}
 */
class {{gameAbbr}}InputComponent : public InputControlComponent
{
    public:
        /**
         * @brief Constructs the input component used by {{ gameName }}
         *
         * @param player Entity that represents the player.
         * @param systems GameSystems for {{ gameName }}
         * @param inputHandler InputHandler for {{ gameName }}
         */
        {{gameAbbr}}InputComponent(
                const Entity & player,
                {{gameAbbr}}GameSystems & systems,
                {{gameAbbr}}InputHandler & inputHandler);

    private:
        Entity _playerEntity;
        {{gameAbbr}}GameSystems & _systems;
};

}

#endif
