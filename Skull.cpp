#include "Skull.h"
Skull::Skull():enemy(75, 50, 50, 25)
{
    srand(time(NULL));
    health = rand() % 10 + 5;
    damage = rand() % 10 + 5;
}