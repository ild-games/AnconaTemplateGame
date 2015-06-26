#include "$!GAME_ABBR!$GameSystems.hpp"

using namespace ild;

$!GAME_ABBR!$GameSystems::$!GAME_ABBR!$GameSystems(ScreenManager & screenManager) :
    ScreenSystemsContainer(screenManager, 0)
{
    _physics = ConstructSystem<PlatformPhysicsSystem>("physics", *_systemManager);
    _input = new InputControlSystem(*_systemManager);
    _camera = ConstructSystem<CameraSystem>("camera", *_systemManager);
    _drawable = ConstructSystem<DrawableSystem>("drawable", screenManager.Window, *_systemManager);
    _collision = ConstructSystem<CollisionSystem>("collision", *_systemManager,*_physics);

    _collision->CreateType("player-type");
}
