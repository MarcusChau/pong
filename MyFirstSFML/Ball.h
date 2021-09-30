#pragma once
#include "SFML/Graphics.hpp"

using namespace sf;

class Ball {
	private:
		Vector2f position;
		RectangleShape ballShape;

		float xVelocity = 1.0f;
		float yVelocity = 1.0f;

	public:
		Ball(float startX, float startY);
		FloatRect getPosition();
		RectangleShape getShape();

		float getXVelocity();
		void reboundSides();
		void reboundBatOrTop();
		void hitBottom();
		void update();
};