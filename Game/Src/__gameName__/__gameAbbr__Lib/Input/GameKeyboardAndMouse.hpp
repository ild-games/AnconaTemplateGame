#ifndef {{gameAbbr}}_Input_GameKeyboardAndMouse_H_
#define {{gameAbbr}}_Input_GameKeyboardAndMouse_H_

#include "{{gameAbbr}}InputHandler.hpp"

namespace ild
{

/**
 * @brief Keyboard & mouse handler for {{ gameName }}
 */
class GameKeyboardAndMouse: public {{gameAbbr}}InputHandler
{
    public:
        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput(float delta) override;
};

}

#endif
