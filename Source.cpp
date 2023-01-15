#include <iostream>

int Inmultire(int numar1, int numar2);

int main()
{
	Inmultire(5, 8);
	system("pause");
}

int Inmultire(int numar1, int numar2)
{
	int calcul = numar1 * numar2;
	std::cout << "Inmultirea este " << calcul << std::endl;
	return calcul;
}