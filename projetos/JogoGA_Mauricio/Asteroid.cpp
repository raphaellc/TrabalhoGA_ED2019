#include "Asteroid.h"



Asteroid::Asteroid()
{
	speed = 0.5f;
}

Asteroid::Asteroid(float p_speed)
{
	speed = p_speed;
}


Asteroid::~Asteroid()
{
}

void Asteroid::setSpriteSheet(string p_sheet)
{
	sprite.setSpriteSheet(p_sheet);
}

void Asteroid::setPosition(float p_x, float p_y)
{
	x = p_x;
	y = p_y;
}

void Asteroid::setScale(float p_x, float p_y)
{
	sprite.setEscala(p_x, p_y);
}

void Asteroid::setSpeed(float p_speed)
{
	speed = p_speed;
}

Sprite Asteroid::getSprite()
{
	return sprite;
}

float Asteroid::getPosX()
{
	return x;
}

float Asteroid::getPosY()
{
	return y;
}

float Asteroid::getRot()
{
	return 0;
}

void Asteroid::update()
{
	y += speed;
}

void Asteroid::draw()
{
	sprite.desenhar(x, y);
}
