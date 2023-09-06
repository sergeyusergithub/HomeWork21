#include <iostream>



int main() {
	setlocale(LC_ALL, "Russian");
	int x,y;

	// Задача. Поменять значение переменных с помощью указателей на них
	std::cout << "Задача 1.\n";
	std::cout << "Введите х -> ";
	std::cin >> x;
	std::cout << "Введите y -> ";
	std::cin >> y;

	int* px, * py;

	px = &x;
	py = &y;

	std::swap(*px, *py);

	std::cout << "\nх = " << x << "\ny = " << y << "\n\n";







	return 0;
}