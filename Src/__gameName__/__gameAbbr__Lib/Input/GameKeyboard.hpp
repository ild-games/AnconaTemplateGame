#ifndef {{gameAbbr}}_Input_GameKeyboard_H_
#define {{gameAbbr}}_Input_GameKeyboard_H_

#include "{{gameAbbr}}InputHandler.hpp"

namespace ild
{

/**
 * @brief Keyboard handler for {{ gameName }}
 */
class GameKeyboard: public {{gameAbbr}}InputHandler
{
    public:
        /**
         * @brief Captures input and calls out to the inputComponent's actions.
         */
        virtual void HandleInput() override;
};

}

#endif
