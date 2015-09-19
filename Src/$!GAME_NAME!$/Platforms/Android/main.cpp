#include <Ancona/Core2D/Systems/Drawable/ShapeDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/ImageDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/ContainerDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/TextDrawable.hpp>
#include <Ancona/Core2D/Systems/Drawable/AnimatedDrawable.hpp>
#include <Ancona/Framework/Config/Config.hpp>
#include <Ancona/System/Android/AndroidFileOperations.hpp>
#include <Ancona/System/FileOperations.hpp>

#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$Game.hpp"
#include "../../$!GAME_ABBR!$Lib/Core/$!GAME_ABBR!$AndroidFactory.hpp"

using namespace ild;

int main(int argc, const char *argv[])
{
    PolymorphicRegistration::RegisterType<ShapeDrawable>("ild::ShapeDrawable");
    PolymorphicRegistration::RegisterType<ImageDrawable>("ild::ImageDrawable");
    PolymorphicRegistration::RegisterType<ContainerDrawable>("ild::ContainerDrawable");
    PolymorphicRegistration::RegisterType<sf::RectangleShape>("sf::RectangleShape");
    PolymorphicRegistration::RegisterType<TextDrawable>("ild::TextDrawable");
    PolymorphicRegistration::RegisterType<AnimatedDrawable>("ild::AnimatedDrawable");

    ANativeActivity * activity = (ANativeActivity *) argv;
    AndroidFileOperations::internalPath(std::string(activity->internalDataPath));
    AndroidFileOperations::assetManager(activity->assetManager);

    Config::Load(*FileOperations::GetInputFileStream("Config.txt"));


    $!GAME_ABBR!$Game game(800, 600, new $!GAME_ABBR!$AndroidFactory());
    game.Run();
    
    return 0;
}
