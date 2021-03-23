#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include "Character.h"



using namespace std;

void OutputVector(vector<int>& vector);
void AscendingSort(vector<int>& vector);
int GetRandomAttackValue(vector<int>& vector);


int main()
{
	string name;
	vector<int> attackValue(10);

	// random seed
	srand((unsigned)time(0));

	for (int i = 0; i < attackValue.size(); i++)
	{
		attackValue[i] = rand() % 101; // 0~100
	}

	cout << "============ Before sorting ==============\n";
	OutputVector(attackValue);
	AscendingSort(attackValue);
	cout << "\n============ After  sorting ==============\n";
	OutputVector(attackValue);
	cout << "==========================================\n\n";

	cout << "Type your character name plz.\n";
	cout << "> ";
	getline(cin, name);

	Character character(name, 100, GetRandomAttackValue(attackValue));

	cout << endl;
	cout << "Character Name   : " << character.getName() << endl;
	cout << "Character HP     : " << character.getHP() << endl;
	cout << "Character Attack : " << character.getAttack() << endl;




	return 0;
}

void OutputVector(vector<int>& vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << setw(3) << vector[i] << " ";
	}
	cout << endl;
}

void AscendingSort(vector<int>& vector)
{
	int smallest = vector[0];
	int position = 0;
	int smallestPoint = 0;
	bool isFound = false;

	while (position < vector.size() - 1)
	{
		isFound = false;
		for (int i = position + 1; i < vector.size(); i++)
		{
			if (smallest > vector[i])
			{
				smallest = vector[i];
				smallestPoint = i;
				isFound = true;
			}

		}
		if (isFound)
		{
			vector[smallestPoint] = vector[position];
			vector[position] = smallest;
		}
		position++;
		smallest = vector[position];
	}

}

int GetRandomAttackValue(vector<int>& vector)
{
	return vector[rand() % vector.size()];
}
