#ifndef $!GAME_ABBR!$_Input_$!GAME_ABBR!$InputHandler_H_
#define $!GAME_ABBR!$_Input_$!GAME_ABBR!$InputHandler_H_

#include <Ancona/Core2D/InputDevices/InputHandler.hpp>
#include <Ancona/Core2D/Systems/InputControlComponent.hpp>

#include "../Systems/$!GAME_ABBR!$GameSystems.hpp"

namespace ild
{

class $!GAME_ABBR!$GameSystems;
class $!GAME_ABBR!$InputComponent;

/**
 * @brief Base InputHandler for $!GAME_NAME!$
 */
class $!GAME_ABBR!$InputHandler : public InputHandler
{
    public:
        /**
         * @brief Registers the input component that handles the actions done via input.
         *
         * @param component InputComponent instance
         */
        void RegisterInputComponent($!GAME_ABBR!$InputComponent * component);

        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput() { };

        /* getters and setters */
        void systems($!GAME_ABBR!$GameSystems * systems) { _systems = systems; }
    protected:
        $!GAME_ABBR!$InputComponent * _playerComponent;
        $!GAME_ABBR!$GameSystems * _systems;
};

/**
 * @brief InputComponent for game player interaction for $!GAME_NAME!$
 */
class $!GAME_ABBR!$InputComponent : public InputControlComponent
{
    public:
        /**
         * @brief Constructs the input component used by $!GAME_NAME!$
         *
         * @param player Entity that represents the player.
         * @param systems GameSystems for $!GAME_NAME!$
         * @param inputHandler InputHandler for $!GAME_NAME!$
         */
        $!GAME_ABBR!$InputComponent(
                const Entity & player,
                $!GAME_ABBR!$GameSystems & systems,
                $!GAME_ABBR!$InputHandler & inputHandler);

    private:
        Entity _playerEntity;
        $!GAME_ABBR!$GameSystems & _systems;
};

}

#endif
