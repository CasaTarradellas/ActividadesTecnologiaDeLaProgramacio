#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
#include "Enemy.h"

using namespace std;

void main() 
{
    DynosaurType dino1 = DynosaurType::TYRANNOSAURUS;
    DynosaurType dino2 = DynosaurType::VELOCIRAPTOR;
    DynosaurType dino3 = DynosaurType::BRACHIOSAURUS;
    DynosaurType dino4 = DynosaurType::DIPLODOCUS;

    cout << "Dinosaurio 1: " << getDynosaurTypeToString(dino1) << endl;
    cout << "Dinosaurio 2: " << getDynosaurTypeToString(dino2) << endl;
    cout << "Dinosaurio 3: " << getDynosaurTypeToString(dino3) << endl;
    cout << "Dinosaurio 4: " << getDynosaurTypeToString(dino4) << endl;
}