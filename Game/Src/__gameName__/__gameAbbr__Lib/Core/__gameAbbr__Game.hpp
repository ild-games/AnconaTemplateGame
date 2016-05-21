#ifndef {{gameAbbr}}_Core_{{gameAbbr}}Game_H_
#define {{gameAbbr}}_Core_{{gameAbbr}}Game_H_

#include <Ancona/Core2D/Core/Game.hpp>
#include "{{gameAbbr}}PlatformFactory.hpp"

namespace ild
{

/**
 * @brief Game class for initial game setup.
 */
class {{gameAbbr}}Game : public Game
{

    public:
        /**
         * @brief Constructs the game with the desired platform and screen size
         *
         * @param width Width of screen
         * @param height Height of screen
         * @param platform {{gameAbbr}}PlatformFactory for the platform launched on
         */
        {{gameAbbr}}Game(
                int width,
                int height,
                {{gameAbbr}}PlatformFactory * platform);

    protected:
        /**
         * @brief Used to initialize the first screen of the game.
         */
        void CreateInitialScreen();

    private:
        {{gameAbbr}}PlatformFactory * _platform;

};

}

#endif
