#ifndef $!GAME_NAME!$_Screens_TestScreen_H_
#define $!GAME_NAME!$_Screens_TestScreen_H_

#include <Ancona/Framework/Screens/AbstractScreen.hpp>
#include "../Systems/$!GAME_NAME!$GameSystems.hpp"

namespace ild
{

/**
 * @brief Generated test screen for $!GAME_NAME!$
 */
class TestScreen : public AbstractScreen
{
    public:
        /**
         * @brief Constructs the test screen for $!GAME_NAME!$
         *
         * @param manager ScreenManager used by the game.
         * @param inputHandler InputHandler used by the screen.
         */
        TestScreen(
                ScreenManager & manager,
                $!GAME_NAME!$InputHandler * inputHandler);

        /**
         * @brief Will be called just before Update is called for the
         * first time.
         */
        void Init();

        /**
         * @brief Handles the update logic on the screen
         *
         * @param delta Seconds since last update.
         */
        void Update(float delta);

        /**
         * @brief Handles the draw logic on the screen
         *
         * @param delta Seconds since last draw.
         */
        void Draw(float delta);

        /* getters and setters */
        ScreenSystemsContainer * systemsContainer() override { return _systems.get(); }
    private:
        std::unique_ptr<$!GAME_NAME!$InputHandler> _inputHandler;
        std::unique_ptr<$!GAME_NAME!$GameSystems> _systems;
};

}

#endif
