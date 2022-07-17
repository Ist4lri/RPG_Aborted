#include "Warrior-Class.h"
#include <iostream>

//Constructeur

Warrior::Warrior(std::string WarriorName) : m_WarriorRage(0) 
{
	m_CDWarriorsPunch = 0;
	m_CDWarriorsShout = 0;
	m_CDWarriorsCut = 0;
	m_CDWarriorsStand = 0;
	m_CDWarriorsRage = 0;

};

//Comp�tences du guerrier

void Warrior::Attack(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	std::cout << Name << " attaque l'ennemis, lui infligeant " << Damage << " points de degats, avec " << WeaponName << std::endl;
	if (m_WarriorRage != 0) Target.GetEvilDamage(Damage + 5);
	else
	{
		Target.GetEvilDamage(Damage);
	}
}

void Warrior::WarriorsPunch(Character& Target, std::string Name)
{
	if (m_CDWarriorsPunch != 0) std::cout << "La comp�tences n'est pas encore pr�te !" << std::endl;
	else
	{
		std::cout << Name << " decide de lancer le Poing du guerrier, infligeant 10 points de d�gats a l'ennemis." << std::endl;
		if (m_WarriorRage != 0) Target.GetEvilDamage(15);
		else
		{
			Target.GetEvilDamage(10);
		}
	}
}

int Warrior::WarriorsShout(std::string Name)
{
	if (m_CDWarriorsShout != 0) std::cout << "La comp�tences n'est pas encore pr�te !" << std::endl;
	else
	{
		std::cout << Name << " decide de lancer le cri du guerrier. Il gagne 5 points de Bouclier." << std::endl;
		return 5;
		
	}
}

int Warrior::WarriorsCut(Character& Target, const int unsigned Damage, std::string Name, std::string WeaponName)
{
	if (m_CDWarriorsCut != 0) std::cout << "La comp�tences n'est pas encore pr�te !" << std::endl;
	else
	{
		std::cout << Name << " utilise la lac�ration du guerrier. Infligeant des d�gats bonus, et un saignement pendant 5 tours !" << std::endl;
		if (m_WarriorRage != 0) Target.GetEvilDamage(Damage + 15);
		else
		{
			Target.GetEvilDamage(Damage + 10);
		}
		return 5;
	}
}

int Warrior::WarriorsStand(std::string Name)
{
	if (m_CDWarriorsStand != 0) std::cout << "La comp�tences n'est pas encore pr�te !" << std::endl;
	else
	{
		std::cout << Name << " decide de lancer la pose du guerrier. Il gagne 10 points de boucliers." << std::endl;
		return 10;
	}
}

void Warrior::WarriorsRage(std::string Name)
{
	if (m_CDWarriorsRage != 0) std::cout << "La comp�tences n'est pas encore pr�te !" << std::endl;
	else
	{
		std::cout << Name << " decide de lancer la Rage du Guerrier ! Pendant 3 tours, ses d�gats seront augment�s..." << std::endl;
		m_WarriorRage = 3;
	}
}