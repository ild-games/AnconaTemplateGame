#ifndef $!GAME_ABBR!$_Core_$!GAME_ABBR!$Game_H_
#define $!GAME_ABBR!$_Core_$!GAME_ABBR!$Game_H_

#include <Ancona/Core2D/Core/Game.hpp>
#include "$!GAME_ABBR!$PlatformFactory.hpp"

namespace ild
{

/**
 * @brief Game class for initial game setup.
 */
class $!GAME_ABBR!$Game : public Game
{

    public:
        /**
         * @brief Constructs the game with the desired platform and screen size
         *
         * @param width Width of screen
         * @param height Height of screen
         * @param platform $!GAME_ABBR!$PlatformFactory for the platform launched on
         */
        $!GAME_ABBR!$Game(
                int width,
                int height,
                $!GAME_ABBR!$PlatformFactory * platform);

    protected:
        /**
         * @brief Used to initialize the first screen of the game.
         */
        void CreateInitialScreen();

    private:
        $!GAME_ABBR!$PlatformFactory * _platform;

};

}

#endif
