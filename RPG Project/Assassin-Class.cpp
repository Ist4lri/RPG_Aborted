#include "Assassin-Class.h"
#include <iostream>

//Constructeur

Assassin::Assassin(std::string AssassinName) : m_Blood(0), m_Shadow(1)
{
	m_CDShadowPath = 0;
	m_CDShadowStab = 0;
	m_CDShadowBleed = 0;
	m_CDShadowCloath = 0;
	m_CDShadowStealth = 0;
}

//Compétences de l'assassin

void Assassin::Attack(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	std::cout << Name << " decide d'attaquer l'ennemis avec " << WeaponName << " infligeant " << Damage << " points de degats !" << std::endl;
	Target.GetEvilDamage(Damage);
}

void Assassin::ShadowPath(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	if (m_CDShadowPath != 0) std::cout << "Tu ne peux pas encore utiliser cette competence !" << std::endl;
	else
	{
		std::cout << Name << " decide d'utiliser le pas de l'ombre, infligeant 15 points de dégats avec " << WeaponName << ", et devenant invisible pendant 1 tour..." << std::endl;
		Target.GetEvilDamage(15);
		m_Shadow == 1;
	}
}

void Assassin::ShadowStab(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	if (m_CDShadowStab != 0) std::cout << "Tu ne peux pas encore utiliser cette competence !" << std::endl;
	else
	{
		if (m_Shadow != 0)
		{
			std::cout << Name << " attaque depuis les ombres, par derrière, et inflige enormement de degats avec " << WeaponName;
			Target.GetEvilDamage(Damage + 30);
			m_Shadow == 0;
		}
		else std::cout << "Tu dois etre dans les ombres pour utiliser une competences d'ombres..." << std::endl;
	}
}

void Assassin::ShadowBleed(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	if (m_CDShadowBleed != 0) std::cout << "Tu ne peux pas encore utiliser cette competence !" << std::endl;
	else
	{
		std::cout << Name << " decide de lancer le saignement de l'assassin infligeant 10 dégats de plus, avec" << WeaponName << " et un saignement pendant 5 tours." << std::endl;
		Target.GetEvilDamage(Damage + 10);
		m_Blood == 5;
	}
}

void Assassin::ShadowCloath(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	if (m_CDShadowCloath != 0) std::cout << "Tu ne peux pas encore utiliser cette competence !" << std::endl;
	else
	{
		if (m_Shadow != 0)
		{
			std::cout << Name << " ,depuis les ombres, tu decide de te soigner, pour pouvoir mieux frapper l'ennemis..." << std::endl;
			Target.GetKindHeal(20);
		}
	}
}

int Assassin::ShadowStealth(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	if (m_CDShadowCloath != 0) std::cout << "Tu ne peux pas encore utiliser cette competence !" << std::endl;
	else
	{
		std::cout << Name << " decide de lancer Vol de l'ombre, et en même temps qu'infliger " << Damage << " avec " << WeaponName << " et tu arrives a voler un objet !" << std::endl;
		Target.GetEvilDamage(Damage);
		return 1;
	}
}