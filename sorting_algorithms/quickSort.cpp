/*
--COME FUNZIONA QUICK-SORT?--

1. Scegliamo un indice t tra 0 e n - 1
2. Mettiamo a sinistra di t tutti gli elementi piu' piccoli di A[t]
3. Mettiamo a destra di t tutti gli elementi piu' grandi di A[t]
4. Mettere A[t] al posto giusto

*/

#include <iostream>
using namespace std;

int partition(int* array, int p, int r)
{

}

int quickSort(int A[], int inizio, int fine)
{
    if (inizio < fine)
    {
        int q = partition(A, inizio, fine);
        quickSort(A, inizio, q - 1);
        quickSort(A, q + 1, fine);
    }
}
 
int main() {
    int A[7] = {12, 4, 2, 67, 0, 3, 5};

    cout << "Array prima dell'ordinamento: ";
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    quickSort(A, 0, 6);

    cout << "Array dopo l'ordinamento: ";
    for (int i = 0; i < 7; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;


    return 0;
}
