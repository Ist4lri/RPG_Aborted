#pragma once

#include "Character.h"

class Warrior : public Character
{
	//Stats priv�es du Guerrier

	int unsigned m_WarriorRage;

	// cooldown de ses comp�tences

	int unsigned m_CDWarriorsPunch;
	int unsigned m_CDWarriorsShout;
	int unsigned m_CDWarriorsCut;
	int unsigned m_CDWarriorsStand;
	int unsigned m_CDWarriorsRage;

public:

	//Constructeur de la classe

	Warrior(std::string WarriorName);

	// Comp�tences du Guerrier

	void Attack(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponsName);
	void WarriorsPunch(Character& Target, std::string Name);
	int WarriorsShout(std::string Name);
	int WarriorsCut(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);
	int WarriorsStand(std::string Name);
	void WarriorsRage(std::string Name);

};

