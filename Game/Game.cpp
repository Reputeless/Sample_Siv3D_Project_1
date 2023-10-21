# include "Game.hpp"

Game::Game(const InitData& init)
	: IScene{ init }
{

}

void Game::update()
{
	if (MouseL.down())
	{
		changeScene(U"Title");
	}
}

void Game::draw() const
{
	Scene::SetBackground(ColorF{ 0.3, 0.4, 0.5 });
}
