#pragma once

#include "Character.h"

class Mage : public Character
{
	//Stats privées du mage

	int unsigned m_BurnCount;
	int unsigned m_MageMana;

	//Cooldown du Mage

	int unsigned m_CDFireball;
	int unsigned m_CDPrimordialExplosion;
	int unsigned m_CDFireBurnt;
	int unsigned m_CDMageArmor;
	int unsigned m_CDFireRitual;

public:

	//Constructeur

	Mage(std::string Name);

	//Compétences du mage

	void Attack(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);
	void Fireball(Character& Target, std::string Name);
	void PrimordialExplosion(Character& Target, std::string Name);
	void FireBurnt(Character& Target, std::string Name);
	int MageArmor(std::string Name);
	void FireRitual(Character& Target, Character& Other_Target, std::string Name);
};