// Программа Hero's Inventory
// Демонстрирует работу с массивами

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10; // константа соответствующая количеству элементов в массиве
	string inventory[MAX_ITEMS]; // определение массива
	int numItems = 0; // определение переменной numItems
	inventory[numItems++] = "sword"; // присвоение значений [0]
	inventory[numItems++] = "armor"; // [1]
	inventory[numItems++] = "shield"; // [2]
	cout << "Your items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle_axe. "; 
	inventory[0] = "battle_axe"; // герой меняет свой меч на боевой топор
	cout << "\nYour items: \n";
	for (int i = 0; i < numItems; ++i) 
	{
		cout << inventory[i] << endl;
	}
	cout << "\nThe item name " << inventory[0] << "' has";
	cout << inventory[0].size() << " letters in it.\n"; // Код означает, что программа должна вызвать функцию-член size() элемента inventory[0]. Поскольку в данном случае inventory[0]
	// равно "battleaxe, вызов вернет значение 10 - количество символов в строковом объекте"
	cout << "\nYou find a healing potion. ";
	if (numItems < MAX_ITEMS) // Проверка элемента numItems, он должен быть меньше константы
	{
		inventory[numItems++] = "healing potion"; // Если значение переменной не превышает значение константы, выводится это сообщение
	}
	else
	{
		cout << "You have too many items you can't carry another."; // Если нет, то это
	}
	cout << "\nYour items:\n";
	for (int i = 0; i < numItems; i++)
	{
		cout << inventory[i] << endl;
	}
	return 0;
}	
