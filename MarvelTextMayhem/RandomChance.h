#pragma once
#include <iostream>
#include <string>
#include "windows.h"
#include "CharacterData.h"

//Random Number used for the chance functions

int RandomNumber(int randomNum)
{

	int currentNum = 1;
	srand(time(NULL));

	currentNum = (rand() % randomNum) + 1;

	return currentNum;
}

