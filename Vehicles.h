#pragma once
#include<SFML/Graphics.hpp>
#include"wind.h"
using namespace sf;
class Vehicles
{
public :Sprite carsr1[5];
	Sprite carsr2[5];
	Sprite carsr3[5];
	Sprite carsr4[5];
	Sprite carsr5[5];

private :float speed = 1;
public:
	

	Vehicles();
	void move();
	~Vehicles();
};

