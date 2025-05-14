/*
 ============================================================================
 ----------------------------Binary search----------------------------
 ============================================================================
 - IDEA:
 . . . 
 L'Array deve essere gia' ordinato per far funzionare il binary search in log(n). 

 - COMPLESSITÀ ASINTOTICA:
   - Migliore: O(1)      
   - Media:    ???
   - Peggiore: O(log n)  

 - CASO PEGGIORE: Quando l'elemento non e' presente nell'array

 - TIPO DI ALGORITMO:
 . . .

 - PSEUDOCODICE: 

*/

// L'ESEMPIO FUNZIONERA' CON 5 ELEMENTI

#include <stdio.h>
#include <iostream>
using namespace std;

int binarySearchRecursive(int* array, int startIndex, int finishIndex, int key)
{

}

int floor(float number)
{
    int ris;
    return ris;
}

#include <iostream>
// #include <cmath> // Non necessario se usi la divisione intera per k

// Non serve una tua funzione floor, la divisione intera va bene.
// Se la volessi dalla libreria standard, sarebbe std::floor da <cmath>

int binarySearchIterative(int* array, int size, int key)
{
    if (array == nullptr || size <= 0) { // Buona pratica: controllo per array nullo o size non valida
        return -1;
    }

    int i = 0;
    int j = size - 1; // CORREZIONE CRUCIALE

    while (i <= j)
    {
        // int k = (i + j) / 2; // Semplice e corretto per la divisione intera
        int k = i + (j - i) / 2; // Alternativa per evitare potenziale overflow con i+j molto grandi (raro per indici)

        if (array[k] == key)
        {
            return k;
        }
        if (array[k] > key)
        {
            j = k - 1;
        }
        else
        {
            i = k + 1;
        }
    }
    return -1; // Elemento non trovato
}

int main()
{
    std::cout << std::endl;
    std::cout << "---How Binary Search Works---" << std::endl << std::endl;

    const int ARRAY_SIZE = 5; // Definisci la dimensione una volta sola
    int A[ARRAY_SIZE];        // Array con 5 elementi (indici 0, 1, 2, 3, 4)
    int key;                  // Leggeremo la chiave dall'utente

    // INPUT
    std::cout << "Tell me the " << ARRAY_SIZE << " numbers (sorted) you want to use for the demonstrations:" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) // Loop da i=0 a i=4 (corretto per ARRAY_SIZE=5)
    {
        std::cin >> A[i];
    }

    std::cout << "Enter the key to search for: ";
    std::cin >> key;

    std::cout << std::endl << "Starting array: ";
    for (int k = 0; k < ARRAY_SIZE; k++) // Loop da k=0 a k=4 (corretto)
    {
        std::cout << "[" << A[k] << "] ";
    }
    std::cout << std::endl;

    // Chiamata alla funzione e uso del risultato
    int resultIndex = binarySearchIterative(A, ARRAY_SIZE, key); // Passa la dimensione corretta

    if (resultIndex != -1) {
        std::cout << "Element " << key << " found at index: " << resultIndex << std::endl;
    } else {
        std::cout << "Element " << key << " not found in the array." << std::endl;
    }

    std::cout << std::endl;
    return 0;
}