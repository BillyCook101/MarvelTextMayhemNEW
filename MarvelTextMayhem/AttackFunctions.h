#pragma once
#include <iostream>
#include <string>
#include "RandomChance.h"

int chance = 10;


bool IsWithinInteval(int value, int upperBound, int lowerBound)
{

	return value >= upperBound && value <= lowerBound;

};

//Random SUPERCHANCE function which adds modifiers to attacks

//SUPERCHANCE Struct



struct SpecialChances
{
	std::string text[8];
	double modifier[8];

};

//SUPERCHANCE Function which outputs the 

void SpecialChance(int chosenAttack)
{

	RandomNumber(chance);

	int specialChance = 5;
	SpecialChances specCha;
	int randomSpecialChance = RandomNumber(specialChance);


	//SpecialChance 1

	specCha.text[0] = "SUPERCHANCE(50 % chance to perform the attack 2 times)\n";
	std::string specialText1 = specCha.text[0];
	specCha.modifier[0] = chosenAttack * 2;

	if (randomSpecialChance == 1)
	{
		
		
		std::cout << specialText1;
		chance = 3;
		chosenAttack = specCha.modifier[0];

	}

	//SpecialChance 2

	specCha.text[1] = "SUPERCHANCE(25% chance to deal double damage)\n";
	std::string specialText2 = specCha.text[1];
	specCha.modifier[1] = chosenAttack * 2;

	if (randomSpecialChance == 2)
	{
	
		std::cout << specialText2;
		chance = 4;
		chosenAttack = specCha.modifier[1];
	}

	//SpecialChance 3

	specCha.text[2] = "SUPERCHANCE(50% chance to double attack damage)\n";
	std::string specialText3 = specCha.text[2];
	specCha.modifier[2] = chosenAttack * 2;

	if (randomSpecialChance == 3)
	{
	
		std::cout << specCha.text[2];
		chance = 2;
		chosenAttack = specCha.modifier[2];
	

	}

	//SpecialChance 4

	specCha.text[3] = "SUPERCHANCE(10% chance to deal twice damage)\n";
	std::string specialText4 = specCha.text[3];
	specCha.modifier[3] = chosenAttack * 2;

	if (randomSpecialChance == 4)
	{
		
		std::cout << specialText4;
		chance = 10;
		chosenAttack = specCha.modifier[3];

	}

	//SpecialChance 5

	specCha.text[4] = "SUPERCHANCE(50% chance to deal plus 200% damage)\n";
	std::string specialText5 = specCha.text[4];
	specCha.modifier[4] = chosenAttack * 2;
	if (randomSpecialChance == 5)
	{
		
		std::cout << specialText5;
		chance = 2;
		chosenAttack = specCha.modifier[4];

	}


};

void MoveSelect(int name1, std::string attack1s,int name2, std::string attack2s, int name3, std::string attack3s)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CharacterData charData;

	//PLAYERS

	//Cyclops

	charData.name[0] = "Cyclops";
	std::string cyclops = charData.name[0];
	charData.health[0] = 100;
	charData.attack[0] = "Optic Blast";
	charData.damage[0] = 30;
	double opticBlast = charData.damage[0];
	std::string opticBlastS = charData.attack[0];
	charData.attack[1] = "Optic Sweep";
	charData.damage[1] = 25;
	double opticSweep = charData.damage[1];
	std::string opticSweepS = charData.attack[1];

	//Jean Grey

	charData.name[1] = "Jean Grey";
	std::string jeanGrey = charData.name[1];
	charData.health[1] = 100;
	charData.attack[2] = "Telekenisis Throw";
	charData.damage[2] = 40;
	double telekenisisThrow = charData.damage[2];
	std::string telekenisisThrowS = charData.attack[2];
	charData.attack[3] = "Telekenisis Slam";
	charData.damage[3] = 50;
	double telekenisisSlam = charData.damage[3];
	std::string telekenisisSlamS = charData.attack[4];

	//Wolverine

	charData.name[2] = "Wolverine";
	std::string wolverine = charData.name[2];
	charData.health[2] = 100;
	charData.attack[5] = "Slash Barrage";
	charData.damage[5] = 25;
	double slashBarrage = charData.damage[5];
	std::string slashBarrageS = charData.attack[5];
	charData.attack[6] = "Tornado Claw";
	charData.damage[6] = 30;
	double tornadoClaw = charData.damage[6];
	std::string tornadoClawS = charData.attack[6];
	charData.attack[7] = "Slash Bombardment";
	charData.damage[7] = 32;
	double slashBombardment = charData.damage[7];
	std::string slashBombardmentS = charData.attack[7];
	charData.attack[12] = "Devastating Slashes";
	charData.damage[12] = 100;
	double devastatingSlashes = charData.damage[12];
	std::string devastatingSlashesS = charData.attack[12];

	//Nightcrawler

	charData.name[3] = "Nightcrawler";
	std::string nightcrawler = charData.name[3];
	charData.health[3] = 100;
	charData.attack[8] = "Teleport Strike";
	charData.damage[8] = 34;
	double teleportStrike = charData.damage[8];
	std::string teleportStrikeS = charData.attack[8];
	charData.attack[9] = "Sword Strike";
	charData.damage[9] = 27;
	double swordStrike = charData.damage[9];
	std::string swordStrikeS = charData.attack[9];

	//VILLIANS

	charData.name[4] = "Sentinel";
	std::string sentinel = charData.name[4];
	charData.health[4] = 100;
	double sentinelMaxHealth = charData.health[4];


	charData.name[5] = "Sabretooth";
	std::string sabretooth = charData.name[5];
	charData.health[5] = 250;
	charData.attack[10] = "Charging Slash";
	charData.damage[10] = 35;
	double chargingSlash = charData.damage[10];
	std::string chargingSlashS = charData.attack[10];
	charData.attack[11] = "Claw Strike";
	charData.damage[11] = 28;
	double clawStrike = charData.damage[11];
	std::string clawStrikeS = charData.attack[11];

	//OTHER

	charData.name[6] = "Professor";
	std::string professor = charData.name[6];
	charData.name[7] = "Mister Sinister";
	std::string misterSinister = charData.name[7];
	charData.name[8] = "Madelyne Pryor";
	std::string madelynePryor = charData.name[8];

	int attackNumber = 1;

	std::cout << "(" << attackNumber << ") " << charData.name[name1] << " " << attack1s << "\n";
	std::cout << "(" << attackNumber + 1 << ") " << charData.name[name2] << " " << attack2s << "\n";
	std::cout << "(" << attackNumber + 2 << ") " << charData.name[name3] << " " << attack3s << "\n";
	std::cout << "Select Option:";

}

void MoveSelectSC(int name1, std::string attack1s, int attack1, int name2, std::string attack2s, int attack2, int name3, std::string attack3s, int attack3)
{

	CharacterData charData;

	//PLAYERS

	//Cyclops

	charData.name[0] = "Cyclops";
	std::string cyclops = charData.name[0];
	charData.health[0] = 100;
	charData.attack[0] = "Optic Blast";
	charData.damage[0] = 30;
	charData.attack[1] = "Optic Sweep";
	charData.damage[1] = 25;

	//Jean Grey

	charData.name[1] = "Jean Grey";
	std::string jeanGrey = charData.name[1];
	charData.health[1] = 100;
	charData.attack[2] = "Telekenisis Throw";
	charData.damage[2] = 40;
	charData.attack[3] = "Telekenisis Slam";
	charData.damage[3] = 50;
	charData.attack[4] = "Telekenisis Burst";
	charData.damage[4] = 100;

	//Wolverine

	charData.name[2] = "Wolverine";
	std::string wolverine = charData.name[2];
	charData.health[2] = 100;
	charData.attack[5] = "Slash Barrage";
	charData.damage[5] = 25;
	charData.attack[6] = "Tornado Claw";
	charData.damage[6] = 30;
	charData.attack[7] = "Tornado Claw";
	charData.damage[7] = 32;

	//Nightcrawler

	charData.name[3] = "Nightcrawler";
	std::string nightcrawler = charData.name[3];
	charData.health[3] = 100;
	charData.attack[8] = "Teleport Strike";
	charData.damage[8] = 34;
	charData.attack[8] = "Sword Strike";
	charData.damage[8] = 27;

	//VILLIANS

	charData.name[4] = "Sentinel";
	std::string sentinel = charData.name[4];
	charData.health[4] = 100;


	charData.name[5] = "Sabretooth";
	std::string sabretooth = charData.name[5];
	charData.health[5] = 200;
	charData.attack[10] = "Charging Slash";
	charData.damage[10] = 35;
	charData.attack[11] = "Claw Strike";
	charData.damage[11] = 28;

	//OTHER

	charData.name[6] = "Professor";
	std::string professor = charData.name[6];

	int attackNumber = 1;

	std::cout << "(" << attackNumber << ")" << charData.name[name1] << " " << attack1s << " ";
	SpecialChance(attack1);
	std::cout << "(" << attackNumber + 1 << ")" << charData.name[name2] << " " << attack2s << " ";
	SpecialChance(attack2);
	std::cout << "(" << attackNumber + 2 << ")" << charData.name[name3] << " " << attack3s << " ";
	SpecialChance(attack3);
	std::cout << "Select Option:";

};