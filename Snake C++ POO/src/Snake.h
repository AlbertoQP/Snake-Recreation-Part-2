//============================================================================
// Name        : Snake.h
// Author      : Alberto Quesada
// Version     : 1.0
// Copyright   : Alberto Quesada @2021
// Description : Definition of class Snake
//============================================================================

#ifndef SNAKE_H_
#define SNAKE_H_

#define W 20
#define H 20

#include <windows.h>
#include <vector>

using namespace std;

class Snake
{
	//Attributes
	private:
		COORD snakePos;
		int snakeLenght;
		int snakeVelocity;
		char snakeDirection;
		vector<COORD> body;

	public:
		//Constructor
		Snake(COORD _snakePos, int _snakeVelocity);

		//Methods
		void changeDirection(char _newDirection);
		void move();
		bool checkEatFood(COORD _foodPos);
		bool checkCollisions();

		//Getters
		COORD getSnakePos();
		vector<COORD> getBody();

		//Setters
		void increaseSnakeLenght();

};

#endif /* SNAKE_H_ */
