/*
 ============================================================================
 ----------------------------Selection Sort----------------------------
 ============================================================================
 - IDEA:
 Cerca il minimo tra gli n elementi e lo scambia con quello nella prima
 posizione

 - COMPLESSITÀ ASINTOTICA:
   - Migliore: O(n)      (Array già ordinato)
   - Media:    O(n²)
   - Peggiore: O(n²)      (Array ordinato al contrario)

 - CASO PEGGIORE: Si verifica quando l'input è ordinato in ordine inverso,
   massimizzando il numero di confronti e spostamenti necessari.

 - TIPO DI ALGORITMO:
   - In-place (usa spazio extra costante O(1)).
   - Ricorsivo
   - Stabile (mantiene l'ordine relativo di elementi uguali).
   - Basato su confronti.
   - Adattivo (efficiente per dati quasi ordinati o di piccole dimensioni).

 - PSEUDOCODICE: 
  SelectionSort(A,i,n) -> (A, 0, n)
      if i < n-1
          then
          k := indice dell’elemento minimo in A[i..n-1]
          inverti A[i] e A[k]
          SelectionSort(A,i+1,n)
*/

// L'ESEMPIO FUNZIONERA' CON 5 ELEMENTI

#include <stdio.h>
#include <iostream>
using namespace std;

int minValue (int* array, int size, int i)
{
    int min = array[0];
    int indiceMin; 
    for (int k = 1; k < size; k++)
    {
        if (min > array[k])
        {
            min = array[k];
            indiceMin = k;
        }
    }
    return indiceMin;
}

void selectionSort(int* array, int size, int i)
{   
    int k = 0;
    if (i < (size - 1))
    {
        k = minValue(array, size, i);
        array[i];
    }
}

void selectionSortIterativo(int* array, int size)
{
  int indiceMin;
  int temp; 

  for(int i = 0; i < size - 1; i++)
  {
    temp = array[i];
    indiceMin = i;
    for(int j = i + 1; j < size; j++)
    {
      if(array[indiceMin] > array[j])
      {
        indiceMin = j;
      }
    }
    array[i] = array[indiceMin];
    array[indiceMin] = temp;
  }
}

int main()
{
  cout << endl;
  cout << "---How Selection-Sort Works---" << endl << endl;
  int A [4];
  int i = 0;

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

  selectionSortIterativo(A, 4);
  cout << endl;

  cout << "Sorted array  : ";
  for (int k = 0; k <= 4; k++)
  {
    cout << "[" << A[k] << "] "; 
  }
  cout << endl;
  return 0;
}
