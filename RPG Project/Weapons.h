#pragma once

class Weapons
{
public :

	//COnstructeur

	Weapons();

	//M2thode pour retourner les dégats de l'arme.

	int DamageSelector(unsigned int Type);

	int BonusSelector(unsigned int Type);

};
