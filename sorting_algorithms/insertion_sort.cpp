/*
 ============================================================================
 ----------------------------Insertion Sort----------------------------------
 ============================================================================
 - IDEA: Costruisce l'array ordinato un elemento alla volta, inserendo ciascun
   elemento nella sua posizione corretta all'interno della parte già ordinata.
   Simile a ordinare carte da gioco in mano.

 - COMPLESSITÀ ASINTOTICA:
   - Migliore: O(n)      (Array già ordinato)
   - Media:    O(n²)
   - Peggiore: O(n²)      (Array ordinato al contrario)

 - CASO PEGGIORE: Si verifica quando l'input è ordinato in ordine inverso,
   massimizzando il numero di confronti e spostamenti necessari.

 - TIPO DI ALGORITMO:
   - In-place (usa spazio extra costante O(1)).
   - Stabile (mantiene l'ordine relativo di elementi uguali).
   - Basato su confronti.
   - Adattivo (efficiente per dati quasi ordinati o di piccole dimensioni).

 - PSEUDOCODICE: 
INSERTION-SORT(A, n):
  FOR i FROM 1 TO n-1:
    key <- A[i]
    j <- i - 1
    WHILE j >= 0 AND A[j] > key:
      A[j+1] <- A[j]  
      j <- j - 1  
    A[j+1] <- key
*/

// L'ESEMPIO FUNZIONERA' CON 5 ELEMENTI

#include <stdio.h>
#include <iostream>
using namespace std;

/*  WITHOUT GRAPHICS STEPS
void insertionSort(int* array, int size)
{
  int key = 0; 
  int i; 

  for(int j = 1; j < size; j++)
  {
    key = array[j];
    i = j - 1;
    while (i > 0 && array[i] > key)
    {
      array[i + 1] = array[i];
      i = i - 1;
    }
    array[i + 1] = key;
  }
}
*/

void insertionSort(int* array, int size)
{

  int key = 0; 
  int i; 

  for(int j = 1; j < size; j++)
  {
    cout << "---STEP " << j << "---" << endl;

    key = array[j];
    i = j - 1;
    while (i >= 0 && array[i] > key)
    {
      array[i + 1] = array[i];
      i = i - 1;
      for (int k = 0; k <= 4; k++)
      {
        cout << "[" << array[k] << "] "; 
      }
      cout << endl;
    }
    array[i + 1] = key;
    cout << "No sorting here" << endl;
    for (int k = 0; k <= 4; k++)
    {
      cout << "[" << array[k] << "] "; 
    }
    cout << endl;
  }
}

/*void insertion_sort_rec(int* array, int i, int size) //The key is PIVOT element
{
  if(i == 0)
  {
    return 
  }
  while (A[] > key);
  insertion_sort_rec(A, );
}
*/


void decreaseInsertionSort(int* array, int size)
{

  int key = 0; 
  int i; 

  for(int j = 1; j <= size; j++)
  {
    cout << "---STEP " << j << "---" << endl;

    key = array[j];
    i = j - 1;
    while (i >= 0 && array[i] < key)
    {
      array[i + 1] = array[i];
      i = i - 1;
      for (int k = 0; k <= 4; k++)
      {
        cout << "[" << array[k] << "] "; 
      }
      cout << endl;
    }
    array[i + 1] = key;
    cout << "No sorting here" << endl;
    for (int k = 0; k <= 4; k++)
    {
      cout << "[" << array[k] << "] "; 
    }
    cout << endl;
  }
}


int main()
{
  cout << endl;
  cout << "---How Insertion-Sort Works---" << endl;
  int A [5];

  // INPUT
  cout << "Tell me the numbers you want to use for the dimostrations" << endl; 
  cout << endl;
  for (int i = 0; i <= 4; i++)
  {
    cin >> A[i];
  }
  cout << endl << "Starting array: ";
  for (int k = 0; k <= 4; k++)
  {
    cout << "[" << A[k] << "] "; 
  }
  cout << endl;

  insertionSort(A, 4);
  cout << "---DECREASE---" << endl << endl;
  decreaseInsertionSort(A, 4);
  cout << endl;

  cout << "Sorted array  : ";
  for (int k = 0; k <= 4; k++)
  {
    cout << "[" << A[k] << "] "; 
  }
  cout << endl;
  return 0;
}
