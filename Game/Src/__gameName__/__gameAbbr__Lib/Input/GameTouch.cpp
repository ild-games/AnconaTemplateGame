#include <Ancona/Core2D/InputDevices/Touch.hpp>

#include "../Systems/{{gameAbbr}}GameSystems.hpp"
#include "GameTouch.hpp"

using namespace ild;

void GameTouch::HandleInput(float delta)
{
    if (Touch::IsFingerPressed(0))
    {
        auto mousePosition = sf::Touch::getPosition(0);
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
