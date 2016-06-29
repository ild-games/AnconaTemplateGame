#ifdef _WIN32
#include <windows.h>
#endif

#include <Ancona/Core2D/Systems/Drawable/ShapeDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/ImageDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/ContainerDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/TextDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/AnimatedDrawable.hpp>
#include <Ancona/Framework/Config/Config.hpp>

#include "../../{{gameAbbr}}Lib/Core/{{gameAbbr}}Game.hpp"
#include "../../{{gameAbbr}}Lib/Core/{{gameAbbr}}DesktopFactory.hpp"

using namespace ild;

#ifdef _WIN32
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
#else
int main(int argc, const char *argv[])
#endif
{
    PolymorphicRegistration::RegisterType<ShapeDrawable>("ild::ShapeDrawable");
    PolymorphicRegistration::RegisterType<ImageDrawable>("ild::ImageDrawable");
    PolymorphicRegistration::RegisterType<ContainerDrawable>("ild::ContainerDrawable");
    PolymorphicRegistration::RegisterType<sf::RectangleShape>("sf::RectangleShape");
    PolymorphicRegistration::RegisterType<sf::CircleShape>("sf::CircleShape");
    PolymorphicRegistration::RegisterType<TextDrawable>("ild::TextDrawable");
    PolymorphicRegistration::RegisterType<AnimatedDrawable>("ild::AnimatedDrawable");

    Config::Load(*FileOperations::GetInputFileStream("Config.txt"));

    {{gameAbbr}}Game game(800, 600, new {{gameAbbr}}DesktopFactory());
    game.Run();

    return 0;
}
