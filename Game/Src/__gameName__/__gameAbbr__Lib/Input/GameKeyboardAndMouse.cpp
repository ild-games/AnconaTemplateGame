#include <Ancona/Core2D/InputDevices/Keyboard.hpp>
#include <Ancona/Core2D/InputDevices/Mouse.hpp>

#include "../Systems/{{gameAbbr}}GameSystems.hpp"
#include "GameKeyboardAndMouse.hpp"

using namespace ild;

void GameKeyboardAndMouse::HandleInput(float delta)
{
    if (Mouse::IsButtonPressed(sf::Mouse::Left))
    {
        auto mousePosition = sf::Mouse::getPosition(_systems->screenManager().Window);
        if (mousePosition.x < 640)
        {
            _playerComponent->RotateDuck();
        }
        else
        {
            _playerComponent->RotateCross();
        }
    }
}
