#include "wind.h"
Vehicles veh;
using namespace sf;
wind::wind()
{
	RenderWindow w(VideoMode(750, 800), "Frogger", Style::Default);
	w.setFramerateLimit(10);
	Font ft;
	ft.loadFromFile("JOKERMAN.ttf");
	Texture bg;
	bg.loadFromFile("background.JPG");
	//load sound
	Sprite background;
	background.setTexture(bg);
	background.setScale(2.0f, 2.247f);
	w.draw(background);
	w.display();
	w.clear();
}

wind::~wind()
{
}
