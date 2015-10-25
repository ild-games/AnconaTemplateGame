#include "TestScreen.hpp"

using namespace ild;

TestScreen::TestScreen(
        ScreenManager & manager,
        $!GAME_ABBR!$InputHandler * inputHandler) :
    AbstractScreen("test-screen", manager),
    _inputHandler(inputHandler)
{
    _systems = std::unique_ptr<$!GAME_ABBR!$GameSystems>(new $!GAME_ABBR!$GameSystems(manager));
}

void TestScreen::Init()
{
}

void TestScreen::Update(float delta)
{
    _systems->systemManager().Update(delta, UpdateStep::Input);
    _systems->systemManager().Update(delta, UpdateStep::Update);
    _systems->systemManager().Update(delta, UpdateStep::Physics);
}

void TestScreen::Draw(float delta)
{
    _screenManager.Window.clear(sf::Color::Blue);
    _systems->systemManager().Update(delta, UpdateStep::Draw);
}
