//============================================================================
// Name        : Food.cpp
// Author      : Alberto Quesada
// Version     : 1.0
// Copyright   : Alberto Quesada @2021
// Description : Implementation of class Food
//============================================================================

#include "Food.h"

//Constructor
Food::Food()
{
	spawnFood();
}

//Methods
void Food::spawnFood()
{
	srand(time(0));

	foodPos.X = rand() % W;
	foodPos.Y = rand() % H;
}

//Getters
COORD Food::getFoodPos()
{
	return foodPos;
}
