#ifndef $!GAME_NAME!$_Input_$!GAME_NAME!$InputHandler_H_
#define $!GAME_NAME!$_Input_$!GAME_NAME!$InputHandler_H_

#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/InputControlComponent.hpp>

#include "../Systems/$!GAME_NAME!$GameSystems.hpp"

namespace ild
{

class $!GAME_NAME!$GameSystems;
class $!GAME_NAME!$InputComponent;

/**
 * @brief Base InputHandler for $!GAME_NAME!$
 */
class $!GAME_NAME!$InputHandler : public InputHandler
{
    public:
        /**
         * @brief Registers the input component that handles the actions done via input.
         *
         * @param component InputComponent instance
         */
        void RegisterInputComponent($!GAME_NAME!$InputComponent * component);

        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput() { };

        /* getters and setters */
        void systems($!GAME_NAME!$GameSystems * systems) { _systems = systems; }
    protected:
        $!GAME_NAME!$InputComponent * _playerComponent;
        $!GAME_NAME!$GameSystems * _systems;
};

/**
 * @brief InputComponent for game player interaction for $!GAME_NAME!$
 */
class $!GAME_NAME!$InputComponent : public InputControlComponent
{
    public:
        /**
         * @brief Constructs the input component used by $!GAME_NAME!$
         *
         * @param player Entity that represents the player.
         * @param systems GameSystems for $!GAME_NAME!$
         * @param inputHandler InputHandler for $!GAME_NAME!$
         */
        $!GAME_NAME!$InputComponent(
                const Entity & player,
                $!GAME_NAME!$GameSystems & systems,
                $!GAME_NAME!$InputHandler & inputHandler);

    private:
        Entity _playerEntity;
        $!GAME_NAME!$GameSystems & systems;
};

}

#endif
