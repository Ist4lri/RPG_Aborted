#include "Mage-Class.h"
#include <iostream>

 //Constructeur

Mage::Mage(std::string Name) : m_BurnCount(0), m_MageMana(40)
{
	m_CDFireball = 0;
	m_CDPrimordialExplosion = 0;
	m_CDFireBurnt = 0;
	m_CDMageArmor = 0;
	m_CDFireRitual = 0;
}

//Compétences du Mage

void Mage::Attack(Character& Target, const int unsigned Damage ,std::string Name, std::string WeaponName)
{
	std::cout << Name << " decide d'attaquer l'ennemis, avec " << WeaponName << " infligeant " << Damage << " point de degats." << std::endl;
	Target.GetEvilDamage(Damage);
}

void Mage::Fireball(Character& Target, std::string Name)
{
	std::cout << Name << " decide de lancer une boule de feu !" << std::endl;
	if (m_MageMana < 5)
	{
		std::cout << "Cependant, " << Name << " ne peux pas lancer ce sort, car pas assez de mana." << std::endl;
	}
	else
	{
		if (m_CDFireball == 0)
		{
			m_MageMana -= 5;
			Target.GetEvilDamage(20);
			m_CDFireball += 3;
		}
		else { std::cout << "Le temps de recharge de cette compétence n'est pas encore termine !" << std::endl; }
	}
}

void Mage::PrimordialExplosion(Character& Target, std::string Name)
{
	std::cout << Name << " decide de lancer une explosion primordiale !" << std::endl;
	if (m_MageMana < 10)
	{
		std::cout << "Cependant, " << Name << " ne peux pas lancer ce sort, car pas assez de mana." << std::endl;
	}
	else
	{
		if (m_CDPrimordialExplosion == 0)
		{
			m_MageMana -= 10;
			Target.GetEvilDamage(35);
			if (m_BurnCount > 0) Target.GetEvilDamage(m_BurnCount * 4);
			m_CDPrimordialExplosion += 7;

		}
		else { std::cout << "Le temps de rechargement de cette competence n'est pas encore termine !" << std::endl;}

	}
}

void Mage::FireBurnt(Character& Target, std::string Name)
{
	std::cout << Name << " decide de lancer Brulure !" << std::endl;
	if (m_MageMana < 8)
	{
		std::cout << "Cependant," << Name << " ne peux pas lancer ce sort, car pas assez de mana." << std::endl;
	}
	else
	{
		if (m_CDFireBurnt == 0)
		{
			m_MageMana -= 8;
			Target.GetEvilDamage(10);
			m_BurnCount += 3;
			m_CDFireBurnt += 4;
		}
		else { std::cout << "Le temps de rechargement de cette competence n'est pas encore termine !" << std::endl; }
	}
}

int Mage::MageArmor(std::string Name)
{
	std::cout << Name << " decide de lancer l'armure du mage, gagnang ainsi 5 points d'armures" << std::endl;
	if (m_MageMana < 3)
	{
		std::cout << "Cependant, " << Name << " ne peut pas lancer ce sort, car pas assez de mana" << std::endl;
	}
	else
	{
		if (m_CDMageArmor == 0)
		{
			m_MageMana -= 3;
			m_CDMageArmor += 3;
			return 5;
		}
		else { std::cout << "Le temps de recharge de cette competences n'est pas encore termine !" << std::endl; }
	}
}

void Mage::FireRitual(Character& Target, Character& Other_Target, std::string Name)
{
	std::cout << Name << " decide de lancer le rituel du feu, infligeant 6 points de dégats, et se soignant de 10 point de vie !" << std::endl;
	if (m_MageMana < 5)
	{
		std::cout << "Cependant, " << Name << " ne peut lacer ce sort, car pas assez de mana." << std::endl;
	}
	else
	{
		if (m_CDFireRitual == 0)
		{
			m_MageMana -= 5;
			m_CDFireRitual += 4;
			Target.GetEvilDamage(8);
			Other_Target.GetKindHeal(10);
		}
		else { std::cout << "Le temps de recharge de cette competences n'est pas encore termine !" << std::endl; }
	}
}