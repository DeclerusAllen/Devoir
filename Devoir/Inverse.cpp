//Écrire un programme en c++ qui Permet d'afficher l'inverse d'un tableau saisie par l'utilisateur en ordre croissant
#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::string continuer;
    do {
        
        int taille;
        std::cout << "Entrez la taille du tableau : ";
        std::cin >> taille;

        
        int tableau[taille];

        
        std::cout << "Entrez les elements du tableau :\n";
        for (int i = 0; i < taille; ++i) {
            std::cout << "Element " << i + 1 << " : ";
            std::cin >> tableau[i];
        }

       
        std::cout << "Tableau original : ";
        for (int i = 0; i < taille; ++i) {
            std::cout << tableau[i] << " ";
        }
        std::cout << "\n";

    
        std::reverse(tableau, tableau + taille);

       
        std::cout << "Tableau inversé en ordre croissant : ";
        for (int i = 0; i < taille; ++i) {
            std::cout << tableau[i] << " ";
        }
        std::cout << "\n";

        
        std::cout << "Appuyez sur Enter pour continuer, ou entrez 0 pour quitter : ";
        std::cin.ignore(); 
        std::getline(std::cin, continuer);

    } while (continuer != "0");

   
    return 0;
}
//Allen Declerus
