#include <iostream>
using namespace std;

int contaPositivi(int A[], int inizio, int fine)
{
    if (inizio >= fine)
    {
        return 1;
    }
    else
    {
        int k = (inizio + fine) / 2;
        if (A[k] > 0)
        {
            return 1 + contaPositivi(A, k + 1, fine);
        }
        else 
        {
            return 1 + contaPositivi(A, inizio, k);
        }
    }
}
 
int main() {
    int A[7] = {12, 4, 2, 67, 0, 3, 5};
    int n = 7;

    int risultato = contaPositivi(A, 0, n);
    cout << "Numero di elementi positivi: " << risultato << endl;

    return 0;
}
