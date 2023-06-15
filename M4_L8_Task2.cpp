/*
Задача 2. Макрос SUB

Ваша задача — определить макрос SUB, который должен вычитать числа друг из друга и использоваться следующим образом:
int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

	Пример работы программы
	1
	2
	-2
}
*/
#include <iostream>
using namespace std;

#define SUB(a,b) ((a) - (b))

int main()
{
	setlocale(LC_ALL, "Rus");
    
	int a = 6;
	int b = 5;
	int c = 2;

	cout << SUB(a, b) << endl;
	cout << SUB(a, b) * c << endl;
	cout << SUB(a, b + c) * c << endl;

}
