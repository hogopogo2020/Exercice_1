// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
int main() {
	double h;
	double l;
	double aire;
		std::cout << "entrez la hauteur : ";
	std::cin >> h;
	std::cout << "entrez la longueur : ";
	std::cin >> l; 
	aire = (h * l) / 2;
	if (aire < 0)
		std::cout << "l'aire est negatif ";
	std::cout << "l'aire est de : " << aire;
}
