	#include "Character.h"
#include <iostream>

/*Constructeur*/

Character::Character() : m_EvilLife(0), m_KindLife(0)
{}

/*Récupération des modificateurs de vies des protagonistes*/

void Character::GetEvilDamage(unsigned int Damage)
{
	m_EvilLife -= Damage;
	if (m_EvilLife < 0) m_EvilLife = 0;
}

void Character::GetKindDamage(unsigned int Damage)
{
	m_KindLife -= Damage;
	if (m_KindLife < 0) m_KindLife = 0;
}

void Character::GetKindHeal(unsigned int Heal)
{
	m_KindLife += Heal;
	if (m_KindLife > 25) m_KindLife = 25;
}

void Character::ResetEvil(unsigned int Ennemy_Life)
{
	m_EvilLife = Ennemy_Life;
}

void Character::ResetKind()
{
	m_KindLife = 50;
} 

/*Toujours vivant ?*/

bool Character::EvilAlive()
{
	return m_EvilLife > 0;
}

bool Character::KindAlive()
{
	return m_KindLife > 0;
}


