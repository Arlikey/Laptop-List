#include <iostream>
#include <list>
#include "Laptop.h"
using namespace std;

int main() {


	Laptop laptop1("ASUS", "X123153FDS43", 16, "GTX 1080", 12, "Ryzen 5600", 3.9, "ASRock A4093");
	Laptop laptop2("Lenovo", "F231DX435K2", 8, "RX 760", 4, "I5-15400", 4.3, "FDSFGGEGER");
	Laptop laptop3("Mac", "A450", 4, "453254", 6, "312312", 3.2, "32121");

	list<Laptop> array;

	array.push_back(laptop1);

	for (auto it = array.begin(); it != array.end(); it++)
	{
		cout << *it << endl;
	}

	array.push_front(laptop2);
	array.push_back(laptop3);

	for (auto it = array.begin(); it != array.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}