//Écrire un programme en c++ Qui permet de calculer le nombre d'occurrence dans un tableau.
#include <iostream>
#include <limits> 

int countOccurrences(const int arr[], int size, int target) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            count++;
        }
    }

    return count;
}

int main() {
    char continuer;
    do {
       
        std::cout << "Entrez la taille du tableau : ";
        int size;
        std::cin >> size;

       
        int* myArray = new int[size];

        
        std::cout << "Entrez les valeurs du tableau (séparées par un espace) : ";
        for (int i = 0; i < size; ++i) {
            std::cin >> myArray[i];
        }

      
        std::cout << "Entrez la valeur cible : ";
        int targetNumber;
        std::cin >> targetNumber;

       
        int occurrences = countOccurrences(myArray, size, targetNumber);

       
        std::cout << "Le nombre d'occurrences de " << targetNumber << " dans le tableau est : " << occurrences << std::endl;

       
        delete[] myArray;

       
        std::cout << "Appuyez sur Enter pour continuer, ou entrez 0 pour quitter : ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cin.get(continuer);

    } while (continuer != '0');

    
    return 0;
}
//Allen Declerus
