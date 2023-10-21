# include <Siv3D.hpp> // Siv3D v0.6.12
# include "Common.hpp"
# include "Title/Title.hpp"
# include "Game/Game.hpp"

void Main()
{
	Window::Resize(1280, 720);
	Window::SetTitle(U"Siv3D Game v1.0");
	Scene::SetBackground(ColorF{ 0.6, 0.8, 0.7 });

	FontAsset::Register(U"Bold", FontMethod::MSDF, 48, Typeface::Bold);

	App manager;
	manager.add<Title>(U"Title");
	manager.add<Game>(U"Game");

	while (System::Update())
	{
		if (not manager.update())
		{
			break;
		}
	}
}
