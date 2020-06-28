#include "Vehicles.h"
Vehicles::Vehicles()
{
	Texture c1;
	c1.loadFromFile("c1.PNG");
	Texture c2;
	c1.loadFromFile("c2.PNG");
	Texture c3;
	c1.loadFromFile("c3.PNG");
	Texture c4;
	c1.loadFromFile("c4.PNG");
	Texture c5;
	c1.loadFromFile("c5.PNG"); 
	for (int i = 0; i < 5; i++)
	{
		carsr1[i].setTexture(c1);
		carsr1[i].setScale(4.0f, 4.65f);
		carsr1[i].setOrigin(0.0f, 15.0f);
		carsr1[i].setPosition(2+80*i , 745.0f);
		

		carsr2[i].setTexture(c2);
		carsr2[i].setScale(4.0f, 4.65f);
		carsr2[i].setOrigin(0.0f, 15.0f);
		carsr2[i].setPosition(2 + 80 * i, 682.0f);
		

		carsr3[i].setTexture(c3);
		carsr3[i].setScale(4.0f, 4.65f);
		carsr3[i].setOrigin(0.0f, 15.0f);
		carsr3[i].setPosition(2 + 80 * i, 622.0f);
		

		carsr4[i].setTexture(c4);
		carsr4[i].setScale(4.0f, 4.65f);
		carsr4[i].setOrigin(0.0f, 15.0f);
		carsr4[i].setPosition(2 + 80 * i, 561.0f);
		

		carsr5[i].setTexture(c5);
		carsr5[i].setScale(4.0f, 4.65f);
		carsr5[i].setOrigin(0.0f, 15.0f);
		carsr5[i].setPosition(2 + 55 * i, 501.0f);
		
	}
	

}


void Vehicles:: move(){
	for (int i = 0; i < 4; i++)
	{
		
		carsr1[i].move(+4*speed, 0);
		if (carsr1[i].getPosition().x > 800) carsr1[i].setPosition(2.0f, 745.0f);
		carsr2[i].move(-4 * speed, 0);
		if (carsr2[i].getPosition().x <0) carsr2[i].setPosition(2.0f, 682.0f);

		carsr3[i].move(-4 * speed, 0);
		if (carsr3[i].getPosition().x <0) carsr3[i].setPosition(2.0f, 622.0f);
		carsr4[i].move(+4 * speed, 0);
		if (carsr4[i].getPosition().x > 800) carsr4[i].setPosition(2.0f, 561.0f);
		carsr5[i].move(-3 * speed, 0);
		if (carsr5[i].getPosition().x<0) carsr5[i].setPosition(2.0f, 501.0f);
	}

}


Vehicles::~Vehicles()
{
}
