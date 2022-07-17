#include <iostream>
#include <string>
#include "Mage_Game.h"
#include "Assassin_Game.h"
#include "Warrior_Game.h"


void PRESENTATION_UTILISATEUR()
{
	const int LENGHT_MAIN_LINE = 100;
	std::string header(LENGHT_MAIN_LINE, '=');


	bool EXIT_WINDOWS;

	for (int i = 0; i < 3; i++)
	{
		std::cout << header << std::endl;
	}
}

std::string USER_ENTRY()
{
	std::string USER_ENTRY;
	std::string *Pointer_USER_ENTRY;
	Pointer_USER_ENTRY = &USER_ENTRY;
	std::cin >> *Pointer_USER_ENTRY;
	std::cin.ignore();
	return *Pointer_USER_ENTRY;
	std::cin.clear();

}

int CLASS_CHOOSE(std::string USER_ENTRY)
{
	if (USER_ENTRY == "WARRIOR" || USER_ENTRY == "warrior" || USER_ENTRY == "Warrior") return 1;
	if (USER_ENTRY == "MAGE" || USER_ENTRY == "Mage" || USER_ENTRY == "mage") return 2;
	if (USER_ENTRY == "ASSASSIN" || USER_ENTRY == "Assassin" || USER_ENTRY == "assassin") return 3;
}


int main()
{

	std::string BUFFER;
	
	PRESENTATION_UTILISATEUR();
	std::cout << "================ " << "BIENVENUE A TOI !!! TU VEUX JOUER AU RPG QUE JE PEUX TE PROPOSER ?" << " ================\n";
	PRESENTATION_UTILISATEUR();



	std::cout << "\nPRIERE DE VOUS PRESENTER POUR LE JEU\n\n";
	BUFFER = USER_ENTRY();
	std::cout << "\nNOUS TE SOUHAITONS LA BIENVENUE, JOUEUR " << BUFFER << " !\n\n";
	std::cout << "APPUYEZ SUR ENTREE POUR CONTINUER...";
	std::cin.ignore();

	bool EXIT_GAME = true;
	do
	{
		system("cls");

		PRESENTATION_UTILISATEUR();
		std::cout << "=================== " << "AINSI, VOUS VOULEZ JOUER AU RPG. CHOISISSEZ VOTRE CLASSE !!!" << " ===================\n";
		PRESENTATION_UTILISATEUR();
		std::cout << "\n================== " << "WARRIOR" << " =================== " << "MAGE" << " =================== " << "ASSASSIN" << " ===================\n";


		switch(CLASS_CHOOSE(USER_ENTRY()))
		{
		case 1:
			WARRIOR_GAME(BUFFER, 4);
			break;
		case 2:
			MAGE_GAME(BUFFER, 5);
			break;
		case 3:
			ASSASSIN_GAME(BUFFER, 6);
			break;
		}
	} while (EXIT_GAME);
	


	return 0;
}
