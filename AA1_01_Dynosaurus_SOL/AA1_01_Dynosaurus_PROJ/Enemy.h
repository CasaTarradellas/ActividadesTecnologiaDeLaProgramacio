#pragma once
#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
const int NUM_DYNOSAURS = 10;

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

int createRandomDynosaur()
{

}