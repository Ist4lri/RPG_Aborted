#include "Weapons.h"
#include <ctime> 
#include <cstdlib> 



//Constructeur

Weapons::Weapons() {};

//Méthode pour retourner les carac de l'armes.

int Weapons::DamageSelector(unsigned int Type)
{
	srand((unsigned int)time(NULL));
	unsigned int Random;
	Type--;
	switch(Type)
	{ 
		case 0:
			Random = 0;
			Random = (rand() % 10) + 1;
			return Random + 2;
			break;
		case 1:
			Random = 0;
			Random = (rand() % 10) + 1;
			return Random + 5;
			break;
		case 2:
			Random = 0;
			Random = (rand() % 10) + 1;
			return Random + 8;
			break;
	}
}

int Weapons::BonusSelector(unsigned int Type)
{
	srand((unsigned int)time(NULL));
	unsigned int Random;
	Type--;
	switch (Type)
	{
		case 0:
			Random = 0;
			Random = (rand() % 10) + 1;
			return Random + 1;
			break;
		case 1:
			Random = 0;
			Random = (rand() % 10) + 1;
			return Random + 3;
			break;
		case 2:
			Random = 0;
			Random = (rand() % 10) + 1;
			return Random + 5;
			break;
	}
}