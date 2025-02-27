#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
#include "Enemy.h"

#define MAX_DYNOSAURS 15

using namespace std;

void main() 
{
    
    srand(time(NULL));

    Dynosaur* jurassicPark[MAX_DYNOSAURS];

    for (int i = 0; i < MAX_DYNOSAURS; i++)
    {
        if (i % 2 == 0)
        {

            jurassicPark[i] = new Dynosaur;

            if (i == 0)
            {
                *jurassicPark[i] = createRandomDynosaur();
            }
            else
            {

                do
                {
                    *jurassicPark[i] = createRandomDynosaur();
                } while (compareDynosaurStrength(*jurassicPark[i], *jurassicPark[i - 2]));
                
            }
        }
        else 
        {
            jurassicPark[i] = nullptr;
        }
        
        

    }

    for (int i = 0; i < MAX_DYNOSAURS; i++)
    {

        if (jurassicPark[i] == nullptr)
        {
            cout << "No hay Dinosaurio" << endl;
        }
        else
        {
            cout << jurassicPark[i]->name << endl;
        }

    }

}