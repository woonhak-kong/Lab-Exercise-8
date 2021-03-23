#pragma once

#include <string>

using namespace std;

class Character
{
public:
	Character(string name, int hp, int attack);

	void setName(string name);
	void setHP(int hp);
	void setAttack(int attack);
	string getName();
	int getHP();
	int getAttack();


private:

	string m_name;
	int m_hp;
	int m_attack;


};

