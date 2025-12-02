#pragma once
#include <iostream>
#include <string>

#include "windows.h"
#include "CharacterData.h"


//FUNCTION FOR CHANGING THE DIFFERENT CHARACTER NAMES TO A CERTAIN COLOUR

void ColourChange(std::string name)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//PLAYERS

	//COLOURS:

	//1: Blue
	//2: Green
	//3: Cyan
	//4: Red
	//5: Purple
	//6: Yellow (Dark)
	//7: Default White
	//8: Gray/Grey
	//9: Bright Blue
	//10: Bright Green
	//11: Bright Cyan
	//12: Bright Red
	//13: Pink/Magenta
	//14: Yellow
	//15: Bright White
    //AFTER 15: Background Colours

	if (name == "Cyclops")
	{
		SetConsoleTextAttribute(h, 14);
		std::cout << "Cyclops";
		SetConsoleTextAttribute(h, 7);

	}

	if (name == "Jean Grey")
	{
		SetConsoleTextAttribute(h, 10);
		std::cout << "Jean Grey";
		SetConsoleTextAttribute(h, 7);

	}

	if (name == "Wolverine")
	{
		SetConsoleTextAttribute(h, 6);
		std::cout << "Wolverine";
		SetConsoleTextAttribute(h, 7);

	}

	if (name == "Nightcrawler")
	{

		SetConsoleTextAttribute(h, 1);
		std::cout << "Nightcrawler";
		SetConsoleTextAttribute(h, 7);

	}

	//VILLAINS

	if (name == "Sentinel")
	{

		SetConsoleTextAttribute(h, 13);
		std::cout << "Sentinel";
		SetConsoleTextAttribute(h, 7);

	}

	if (name == "Sabretooth")
	{

		SetConsoleTextAttribute(h, 6);
		std::cout << "Sabretooth";
		SetConsoleTextAttribute(h, 7);

	}

	//OTHERS

	if (name == "Professor")
	{
		SetConsoleTextAttribute(h, 11);
		std::cout << "Professor";
		SetConsoleTextAttribute(h, 7);

	}

	if (name == "Mister Sinister")
	{
		SetConsoleTextAttribute(h, 13);
		std::cout << "Mister Sinister";
		SetConsoleTextAttribute(h, 7);

	}


	if (name == "Madelyne Pryor")
	{
		SetConsoleTextAttribute(h, 4);
		std::cout << "Madelyne Pryor";
		SetConsoleTextAttribute(h, 7);

	}


}