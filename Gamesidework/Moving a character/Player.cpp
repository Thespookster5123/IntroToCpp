﻿#include "Player.h"
#include<iostream>
#include <stdlib.h>   
#include <time.h> 
#include<Windows.h>
#include "setColor.h"
#include<thread>
#include "Fighter.h"
#include "Overworld.h"
#include "Inventory.h"
#include "Condtions.h"

using std::cout;
using std::cin;
using std::endl;



//int Clamp(int min, int max, int value)
//{
//	if (value < min)
//	{
//		return min;
//	}
//	else if (value > max)
//	{
//		return max;
//	}
//	else
//	{
//		return value;
//	}
//}

////char suffix[];
////genderKeeper(fight, x, suffix);
////cout << suffix << " left."
//char genderKeeper(PlayervMonster fight, int x, char suffix[])
//{
//	
//
//	switch (fight.PlayerGender)
//	{
//	case 1:
//		switch (x)
//		{
//		case 1:
//
//		}
//		break;
//	case 2:
//		break;
//	}
//}

void CharacterCreate(PlayervMonster &fight)
{
	int userinput;
	int statchange =0;
	int screwupcount = 0;
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠
	char Delete = 8;
	cout << "Please enter the name of your character \n>";
	cin >> fight.Playername;
	system("CLS");
	while (fight.statLock < 0 || fight.statLock != 0)
	{
		colorTextChange(2);
		cout << l;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << r << endl;
		
		cout << p <<"       PLAYER     STATS        "<<p << endl;
		cout << p <<"                               "<< p << endl;
		if (fight.statLock > 9)
		{
			cout << p <<"    Stat Points Left :" << fight.statLock << "       "<< p << endl;
		}
		else
		{
			cout << p<<"    Stat Points Left :" << fight.statLock << "        "<< p << endl;
		}
		cout << p<<"                               "<<p << endl;
		if (fight.playerSTR > 9)
		{
			cout << p<<"1.Strength    :" << fight.playerSTR << "              "<<p << endl;
		}
		else
		{
			cout << p<<"1.Strength    :" << fight.playerSTR << "               "<<p << endl;
		}
		
		if (fight.playerAG > 9)
		{
			cout << p<<"2.Dexterity   :" << fight.playerAG << "              "<<p << endl;
		}
		else {
			cout << p<<"2.Dexterity   :" << fight.playerAG << "               "<<p << endl;
		}
		if (fight.playerCON > 9)
		{
			cout << p<<"3.Constitution:" << fight.playerCON << "              "<<p << endl;
		}
		else
		{
			cout << p<<"3.Constitution:" << fight.playerCON << "               "<<p << endl;
		}
		if (fight.playerINT > 9)
		{
			cout << p << "4.Intelligence:" << fight.playerINT << "              " << p << endl;
		}
		else
		{
			cout << p << "4.Intelligence:" << fight.playerINT << "               " << p << endl;
		}
		if (fight.playerWIS > 9)
		{
			cout << p << "5.Wisedom     :" << fight.playerWIS << "              " << p << endl;
		}
		else
		{
			cout << p << "5.Wisedom     :" << fight.playerWIS << "               " << p << endl;
		}
		if (fight.playerCHR > 9)
		{
			cout << p << "6.Charisma    :" << fight.playerCHR << "              " << p << endl;
		}
		else
		{
			cout << p << "6.Charisma    :" << fight.playerCHR << "               " << p << endl;
		}
		cout << p<<"                               "<< p << endl;
		cout << bl;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << br << endl;


		cout << "\n\nPlease select the stat you would like to change\n \n1.STR\n2.DEX\n3.CON\n4.INT\n5.WIS\n6.CHAR\n>";
		cin >> userinput;
		switch (userinput){
			case 1:
				cout << "\nHow many points would you like to add to your strength? \n\n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nStrength  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nStrength vaule >";
					}
				}
				fight.playerSTR += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 2:
				cout << "\nHow many points would you like to add to your dexterity? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \ndexterity  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \ndexterity >";
					}
				}
				fight.playerAG += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 3:
				cout << "\nHow many points would you like to add to your Constitution? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nConstitution  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nConstitution vaule >";
					}
				}
				fight.playerCON += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 4:
				cout << "\nHow many points would you like to add to your Intelligence? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nIntelligence  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nIntelligence vaule >";
					}
				}
				fight.playerINT += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 5:
				cout << "\nHow many points would you like to add to your Wisedom? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nWisedom  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nWisedom vaule >";
					}
				}
				fight.playerWIS += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;
			case 6:
				cout << "\nHow many points would you like to add to your Charisma? \n>";
				while (statchange <= 0)
				{
					cin >> statchange;
					if (statchange < 0 && screwupcount == 0)
					{
						cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nCharisma  vaule >";
						screwupcount++;
					}
					else if (statchange < 0 && screwupcount > 0)
					{
						cout << "Agian.. Physically impossible, try again. \nCharisma vaule >";
					}
				}
				fight.playerCHR += statchange;
				fight.statLock -= statchange;
				statchange = 0;
				screwupcount = 0;
				break;



	}
	
		if (fight.statLock < 0)
		{
			system("CLS");
			fight.statLock = 22;
			cout << "You spent too many points!\n";
			fight.playerSTR = 8;
			fight.playerAG = 8;
			fight.playerCON = 8;
			system("pause");
		}
		else if (fight.statLock > 22)
		{
			system("CLS");
			fight.statLock = 22;
			cout << "CHEATER!\n";
			fight.playerSTR = 8;
			fight.playerAG = 8;
			fight.playerCON = 8;
			system("pause");
		}
		
		mathPlayerStats(fight);
	
		
		system("CLS");
	}
	
}
void CharacterLevl(PlayervMonster &fight)
{
	int userinput;
	int statchange = fight.statLock;
	int screwupcount = 0;

	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠
	char Delete = 8;
	while (fight.statLock < 0 || fight.statLock != 0)
	{
		colorTextChange(2);
		cout << l;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << r << endl;

		cout << p << "       PLAYER     STATS        " << p << endl;
		cout << p << "                               " << p << endl;
		if (fight.statLock > 9)
		{
			cout << p << "    Stat Points Left :" << fight.statLock << "       " << p << endl;
		}
		else
		{
			cout << p << "    Stat Points Left :" << fight.statLock << "        " << p << endl;
		}
		cout << p << "                               " << p << endl;
		if (fight.playerSTR > 9)
		{
			cout << p << "1.Strength    :" << fight.playerSTR << "              " << p << endl;
		}
		else
		{
			cout << p << "1.Strength    :" << fight.playerSTR << "               " << p << endl;
		}

		if (fight.playerAG > 9)
		{
			cout << p << "2.Dexterity   :" << fight.playerAG << "              " << p << endl;
		}
		else {
			cout << p << "2.Dexterity   :" << fight.playerAG << "               " << p << endl;
		}
		if (fight.playerCON > 9)
		{
			cout << p << "3.Constitution:" << fight.playerCON << "              " << p << endl;
		}
		else
		{
			cout << p << "3.Constitution:" << fight.playerCON << "               " << p << endl;
		}
		if (fight.playerINT > 9)
		{
			cout << p << "4.Intelligence:" << fight.playerINT << "              " << p << endl;
		}
		else
		{
			cout << p << "4.Intelligence:" << fight.playerINT << "               " << p << endl;
		}
		if (fight.playerWIS > 9)
		{
			cout << p << "5.Wisedom     :" << fight.playerWIS << "              " << p << endl;
		}
		else
		{
			cout << p << "5.Wisedom     :" << fight.playerWIS << "               " << p << endl;
		}
		if (fight.playerCHR > 9)
		{
			cout << p << "6.Charisma    :" << fight.playerCHR << "              " << p << endl;
		}
		else
		{
			cout << p << "6.Charisma    :" << fight.playerCHR << "               " << p << endl;
		}
		cout << p << "                               " << p << endl;
		cout << bl;
		for (int i = 0; i < 31; i++) { cout << b; };
		cout << br << endl;


		cout << "\n\nPlease select the stat you would like to change\n \n1.STR\n2.DEX\n3.CON\n4.INT\n5.WIS\n6.CHAR\n>";
		cin >> userinput;
		switch (userinput) {
		case 1:
			cout << "\nHow many points would you like to add to your strength? \n\n>";
			while (statchange <= 0)
			{
				cin >> statchange;
				if (statchange < 0 && screwupcount == 0)
				{
					cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nStrength  vaule >";
					screwupcount++;
				}
				else if (statchange < 0 && screwupcount > 0)
				{
					cout << "Agian.. Physically impossible, try again. \nStrength vaule >";
				}
			}
			fight.playerSTR += statchange;
			fight.statLock -= statchange;
			statchange = 0;
			screwupcount = 0;
			break;
		case 2:
			cout << "\nHow many points would you like to add to your dexterity? \n>";
			while (statchange <= 0)
			{
				cin >> statchange;
				if (statchange < 0 && screwupcount == 0)
				{
					cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \ndexterity  vaule >";
					screwupcount++;
				}
				else if (statchange < 0 && screwupcount > 0)
				{
					cout << "Agian.. Physically impossible, try again. \ndexterity >";
				}
			}
			fight.playerAG += statchange;
			fight.statLock -= statchange;
			statchange = 0;
			screwupcount = 0;
			break;
		case 3:
			cout << "\nHow many points would you like to add to your Constitution? \n>";
			while (statchange <= 0)
			{
				cin >> statchange;
				if (statchange < 0 && screwupcount == 0)
				{
					cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nConstitution  vaule >";
					screwupcount++;
				}
				else if (statchange < 0 && screwupcount > 0)
				{
					cout << "Agian.. Physically impossible, try again. \nConstitution vaule >";
				}
			}
			fight.playerCON += statchange;
			fight.statLock -= statchange;
			statchange = 0;
			screwupcount = 0;
			break;
		case 4:
			cout << "\nHow many points would you like to add to your Intelligence? \n>";
			while (statchange <= 0)
			{
				cin >> statchange;
				if (statchange < 0 && screwupcount == 0)
				{
					cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nIntelligence  vaule >";
					screwupcount++;
				}
				else if (statchange < 0 && screwupcount > 0)
				{
					cout << "Agian.. Physically impossible, try again. \nIntelligence vaule >";
				}
			}
			fight.playerINT += statchange;
			fight.statLock -= statchange;
			statchange = 0;
			screwupcount = 0;
			break;
		case 5:
			cout << "\nHow many points would you like to add to your Wisedom? \n>";
			while (statchange <= 0)
			{
				cin >> statchange;
				if (statchange < 0 && screwupcount == 0)
				{
					cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nWisedom  vaule >";
					screwupcount++;
				}
				else if (statchange < 0 && screwupcount > 0)
				{
					cout << "Agian.. Physically impossible, try again. \nWisedom vaule >";
				}
			}
			fight.playerWIS += statchange;
			fight.statLock -= statchange;
			statchange = 0;
			screwupcount = 0;
			break;
		case 6:
			cout << "\nHow many points would you like to add to your Charisma? \n>";
			while (statchange <= 0)
			{
				cin >> statchange;
				if (statchange < 0 && screwupcount == 0)
				{
					cout << "Woah there pal you may be passive looking but that is pysically impossible, try again. \nCharisma  vaule >";
					screwupcount++;
				}
				else if (statchange < 0 && screwupcount > 0)
				{
					cout << "Agian.. Physically impossible, try again. \nCharisma vaule >";
				}
			}
			fight.playerCHR += statchange;
			fight.statLock -= statchange;
			statchange = 0;
			screwupcount = 0;
			break;



		}

		if (fight.statLock < 0)
		{
			system("CLS");
			fight.statLock = statchange;
			cout << "You spent too many points!\n";
			system("pause");
		}
		else if (fight.statLock > statchange)
		{
			system("CLS");
			fight.statLock = statchange;
			cout << "CHEATER!\n";
			system("pause");
		}

		mathPlayerStats(fight);


		system("CLS");
	}

}

//
//void playerArmor(PlayervMonster &fight) 
//{
//	int userInput;
//	switch (userInput)
//	{
//	case 1:
//		fight.playerAC = 11 + fight.playerAGscore;
//		break;
//	case 2:
//		fight.playerAGscore = Clamp(-4, 2, fight.playerAGscore);
//		fight.playerAC = 14 + fight.playerAGscore;
//		break;
//	case 3:
//		fight.playerAGscore = Clamp(-4, 0, fight.playerAGscore);
//		fight.playerAC = 17;
//		break;
//	}
//}

void mathPlayerStats(PlayervMonster &fight)
{
	fight.playerAGscore = (fight.playerAG / 2) - 5;
	fight.playerSTRscore = (fight.playerSTR / 2) - 5;
	fight.playerCONscore = (fight.playerCON / 2) - 5;
	fight.playerCHRscore = (fight.playerCHR / 2) - 5;
	fight.playerINTscore = (fight.playerINT / 2) - 5;
	fight.playerWISscore = (fight.playerWIS / 2) - 5;
	fight.playerHP = ((rand() % 12 + 8) + fight.playerCONscore);
	fight.playerHPMax = fight.playerHP;
}

void displayPlayerStats(PlayervMonster &fight)
{
	char b = 205; // ═
	char l = 201; // ╔
	char r = 187; // ╗
	char p = 186; // ║
	char bl = 200;//╚
	char br = 188;//╝
	char trs = 185;//╣
	char btrs = 204;//╠

	cout << "                              " << fight.Playername << endl;
	cout << "                            Character  Sheet  "  << endl;
	cout << "____________________________________________________________________" << endl;
	cout << "                                                                    " << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Level " << fight.PlayerLvL << endl;
	cout << "HP :" << fight.playerHP << endl;
	cout << "XP :" << fight.playerXP << endl;
	cout << "Unspent power points " << fight.statLock << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Strength      :" << fight.playerSTR << endl;
	cout << "Player STR Score     :" << fight.playerSTRscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Agility       :" << fight.playerAG << endl;
	cout << "Player AGL Score     :" << fight.playerAGscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Constitution  :" << fight.playerCON << endl;
	cout << "Player CON Score     :" << fight.playerCONscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Intelligence  :" << fight.playerINT << endl;
	cout << "Player INT Score     :" << fight.playerINTscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Wisdom        :" << fight.playerWIS << endl;
	cout << "Player WIS Score     :" << fight.playerWISscore << endl;
	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;
	cout << "Player Charisma      :" << fight.playerCHR << endl;
	cout << "Player CHR Score     :" << fight.playerCHRscore << endl;

	for (int i = 0; i < 26; i++) { cout << b; };
	cout << endl;	
}

void checkLevelUP(PlayervMonster &fight)
{
	int LvLhight;
	for (int i = fight.PlayerLvL; i < 20; i++)
	{
		LvLhight = i * 100;
		if(fight.playerXP > LvLhight)
		{
			cout << "LEVEL UP!!" << endl;
			fight.statLock += 2 + fight.playerINTscore;
			system("pause");
			system("CLS");

		}
	}
}





