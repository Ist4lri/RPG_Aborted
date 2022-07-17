#pragma once

#include "Character.h"

class Assassin : public Character
{
	//stats privée de l'assassin.

	int unsigned m_Shadow;
	int unsigned m_Blood;

	//cooldown de ses compétences

	int unsigned m_CDShadowPath;
	int unsigned m_CDShadowStab;
	int unsigned m_CDShadowBleed;
	int unsigned m_CDShadowCloath;
	int unsigned m_CDShadowStealth;

public:

	//constructeur de la classe

	Assassin(std::string AssassinName);

	//compétences de l'assassin

	void Attack(Character& Target, const int unsigned Damage, std::string Name, std::string WeapondName);
	void ShadowPath(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);
	void ShadowStab(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);
	void ShadowBleed(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);
	void ShadowCloath(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);
	int ShadowStealth(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName);

};