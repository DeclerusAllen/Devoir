//un programme en C++ qui affiche le nombre  saisi en ordre croissant dans un tableau
#include <iostream>
#include <limits> // Pour la gestion des caract�res ind�sirables
#include <algorithm> // Pour trier le tableau

int main() {
    char continuer;
    do {
      
        std::cout << "Entrez la taille du tableau : ";
        int size;
        std::cin >> size;

       
        int* myArray = new int[size];

        
        std::cout << "Entrez les valeurs du tableau (s�par�es par un espace) : ";
        for (int i = 0; i < size; ++i) {
            std::cin >> myArray[i];
        }

       
        std::sort(myArray, myArray + size);

       
        std::cout << "Tableau tri� en ordre croissant : ";
        for (int i = 0; i < size; ++i) {
            std::cout << myArray[i] << " ";
        }
        std::cout << "\n";

       
        delete[] myArray;

        
        std::cout << "Appuyez sur Enter pour continuer, ou entrez 0 pour quitter : ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cin.get(continuer);

    } while (continuer != '0');

    
    return 0;
}
//Allen DECLERUS
