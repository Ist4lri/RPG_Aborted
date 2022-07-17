#pragma once

#include <string>

class Character
{
protected:

	/*Les vie de chaque protagoniste*/

	int m_KindLife;
	int m_EvilLife;

public:

	/*Constructeur*/

	Character();

	/* Ce qui va suivre sont les Récupérateurs de dégats, modifiant leurs vies.*/

	void GetEvilDamage(unsigned int Damage);
	void GetKindDamage(unsigned int Damage);
	void GetKindHeal(unsigned int Heal);
	void ResetEvil(unsigned int Ennemy_Life);
	void ResetKind();

	/*Toujours vivant ?*/

	bool EvilAlive();
	bool KindAlive();


};
;

