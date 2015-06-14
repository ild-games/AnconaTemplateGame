#ifndef $!GAME_ABBR!$_Core_$!GAME_ABBR!$Game_H_
#define $!GAME_ABBR!$_Core_$!GAME_ABBR!$Game_H_

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
         * @param platform PlatformBase for the platform launched on
         */
        $!GAME_ABBR!$Game(
                int width,
                int height,
                PlatformBase * platform);

    protected:
        /**
         * @brief Used to initialize the first screen of the game.
         */
        void CreateInitialScreen();

    private:
        PlatformBase * _platform;

};

}

#endif
