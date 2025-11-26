#pragma once
#include <iostream>
#include <string>
#include "RandomChance.h"

bool IsWithinInteval(int value, int upperBound, int lowerBound)
{

	return value >= upperBound && value <= lowerBound;

}

//Random SUPERCHANCE function which adds modifiers to attacks

//SUPERCHANCE Struct

int specialChance = 8;

struct SpecialChances
{
	std::string text[8];
	double modifier[8];

};

//SUPERCHANCE Function which outputs the 

void SpecialChance(int chosenAttack)
{
	SpecialChances specCha;
	int randomSpecialChance = RandomNumber(specialChance);


	//SpecialChance 1

	specCha.text[0] = "SUPERCHANCE(33 % chance to perform the attack 2 times)\n";
	specCha.modifier[0] = chosenAttack * 2;

	if (randomSpecialChance == 1)
	{


		std::cout << specCha.text[0];


	}

	//SpecialChance 2

	specCha.text[1] = "SUPERCHANCE(25% chance to deal plus 50% damage)\n";
	specCha.modifier[1] = chosenAttack * 1.5;

	if (randomSpecialChance == 2)
	{


		std::cout << specCha.text[1];


	}

	//SpecialChance 3

	specCha.text[2] = "SUPERCHANCE(50% chance to dodge enemies attack)\n";
	specCha.modifier[2] = chosenAttack - chosenAttack;

	if (randomSpecialChance == 3)
	{


		std::cout << specCha.text[2];


	}

	//SpecialChance 4

	specCha.text[3] = "SUPERCHANCE(10% chance to deal 20 more damage)\n";
	specCha.modifier[3] = chosenAttack + 20;

	if (randomSpecialChance == 4)
	{

		std::cout << specCha.text[3];


	}

	//SpecialChance 5

	specCha.text[4] = "SUPERCHANCE(50% chance to deal plus 75% damage)\n";
	specCha.modifier[4] = chosenAttack * 1.7;
	if (randomSpecialChance == 5)
	{

		std::cout << specCha.text[4];


	}

	//SpecialChance 6

	specCha.text[5] = "SUPERCHANCE(25% chance to deal plus 50% damage)\n";
	specCha.modifier[5] = chosenAttack * 1.5;

	if (randomSpecialChance == 6)
	{

		std::cout << specCha.text[5];


	}

	//SpecialChance 7

	specCha.text[6] = "SUPERCHANCE(25% chance to deal plus 50% damage)\n";
	specCha.modifier[6] = chosenAttack * 1.5;

	if (randomSpecialChance == 7)
	{

		std::cout << specCha.text[6];


	}

	//SpecialChance 8

	specCha.text[7] = "SUPERCHANCE(25% chance to deal plus 50% damage)\n";
	specCha.modifier[7] = chosenAttack * 1.5;

	if (randomSpecialChance == 8)
	{

		std::cout << specCha.text[7];


	}



}

void MoveSelect(int name1, std::string attack1s, int attack1, int name2, std::string attack2s, int attack2, int name3, std::string attack3s, int attack3)
{

	CharacterData charData;

	int attackNumber = 1;

	std::cout << "(" << attackNumber << ")" << charData.name[name1] << " " << attack1s << " "; 
	SpecialChance(attack1);
	std::cout << "(" << attackNumber + 1 << ")" << charData.name[name2] << " " << attack2s << " ";
	SpecialChance(attack2);
	std::cout << "(" << attackNumber + 2 << ")" << charData.name[name3] << " " << attack3s << " ";
	SpecialChance(attack3);
	std::cout << "Select Option:";
	
}