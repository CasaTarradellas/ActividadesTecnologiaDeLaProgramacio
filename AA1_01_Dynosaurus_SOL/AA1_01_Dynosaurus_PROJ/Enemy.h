#pragma once
#include <iostream>
#include <time.h>
#include <math.h>
#include <string>


using namespace std;

enum class DynosaurType
{
	TYRANNOSAURUS, VELOCIRAPTOR, BRACHIOSAURUS, DIPLODOCUS
};

string getDynosaurTypeToString(DynosaurType type)
{
	switch (type)
	{
	case DynosaurType::TYRANNOSAURUS:
		return "TYRANNOSAURUS";
		break;
	case DynosaurType::VELOCIRAPTOR:
		return "VELOCIRAPTOR";
		break;
	case DynosaurType::BRACHIOSAURUS:
		return "BRACHIOSAURUS";
		break;
	case DynosaurType::DIPLODOCUS:
		return "DIPLODOCUS";
		break;
	default:
		return "UNKNOWN";
		break;
	}
}

struct Dynosaur
{
	DynosaurType type;
	string name;
	int health = 100;
	int attackPower;
};

int compareDynosaurStrength(Dynosaur dynosaur1, Dynosaur dynosaur2)
{
	bool sameForce = false;
	int forceDyno1 = dynosaur1.health + dynosaur1.attackPower;
	int forceDyno2 = dynosaur2.health + dynosaur2.attackPower;

	if (forceDyno1 == forceDyno2)
	{
		sameForce = true;
	}

	return sameForce;
}

Dynosaur createRandomDynosaur()
{

	Dynosaur dyno;

	switch (rand() % 3)
	{
		case 0:
			dyno.type = DynosaurType::TYRANNOSAURUS;
			dyno.name = "TYRANNOSAURUS";
			dyno.attackPower = 100;
			break;
		case 1:
			dyno.type = DynosaurType::VELOCIRAPTOR;
			dyno.name = "VELOCIRAPTOR";
			dyno.attackPower = 80;
			break;
		case 2:
			dyno.type = DynosaurType::BRACHIOSAURUS;
			dyno.name = "BRACHIOSAURUS";
			dyno.attackPower = 65;
			break;
		case 3:
			dyno.type = DynosaurType::DIPLODOCUS;
			dyno.name = "DIPLODOCUS";
			dyno.attackPower = 45;
			break;

	}

	return dyno;

}