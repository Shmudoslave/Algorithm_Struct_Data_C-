#include "DynamicArray.h"
#include "arrayConcatenation.h"
#include <string>
#include <cctype>

bool isNumber(char c) 
{
	return isdigit(c) != 0; //если не 0 то число! используем isdigit()
}
bool isChar(char c) 
{
	return isalpha(c) != 0; //если не 0 то строка (символ)! Используем isapha()
}


int main() 
{
	Solution s1;
	vector <string> tokens = { "0:start:0","1:start:2","1:end:5","0:end:6" };
	
	int n = 2;
	s1.exclusiveTime(n, tokens);
	return 0;

	//  isdigit() - проверка на число!
	//  isalpha() - проверка на символ!

	// pop() - удаление из стека
	// push() - положить в стек
	// top () - посмотреть объект на вершине стека


	/*vector <string> test = { "1", "2", "+", "-" };
	for (const auto& str : test) 
	{
		for (char c : str) 
		{
			if (isNumber(c)) 
			{
				cout << "Find number: " << c << endl;
			}
			else
			{
				cout << "Findet char: " << c << endl;
			}
		}
	}*/
}