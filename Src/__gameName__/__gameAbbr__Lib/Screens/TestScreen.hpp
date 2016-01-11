#ifndef {{gameAbbr}}_Screens_TestScreen_H_
#define {{gameAbbr}}_Screens_TestScreen_H_

#include <Ancona/Framework/Screens/AbstractScreen.hpp>
#include "../Input/{{gameAbbr}}InputHandler.hpp"
#include "../Systems/{{gameAbbr}}GameSystems.hpp"

namespace ild
{

/**
 * @brief Generated test screen for {{ gameName }}GAME_NAME!$
 */
class TestScreen : public AbstractScreen
{
    public:
        /**
         * @brief Constructs the test screen for {{ gameName }}GAME_NAME!$
         *
         * @param manager ScreenManager used by the game.
         * @param inputHandler InputHandler used by the screen.
         */
        TestScreen(
                ScreenManager & manager,
                {{gameAbbr}}InputHandler * inputHandler);

        /**
         * @brief Will be called just before Update is called for the
         * first time.
         */
        void Init() override;

        /**
         * @brief Handles the update logic on the screen
         *
         * @param delta Seconds since last update.
         */
        void Update(float delta) override;

        /**
         * @brief Handles the draw logic on the screen
         *
         * @param delta Seconds since last draw.
         */
        void Draw(float delta) override;

        /* getters and setters */
        ScreenSystemsContainer * systemsContainer() override { return _systems.get(); }
    private:
        std::unique_ptr<{{gameAbbr}}InputHandler> _inputHandler;
        std::unique_ptr<{{gameAbbr}}GameSystems> _systems;
};

}

#endif
