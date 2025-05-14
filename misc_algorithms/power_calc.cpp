#include <iostream>
using namespace std;

int powerCalc_iter(int a, int n) // a is the base, n the exponent
{
    int ris = 1; 
    for (int i = 0; i < n; i++)
    {
        ris = ris * a;
    }
    return ris;
}

int powerCalc_rec(int a, int n) // a is the base, n the exponent
{
    if (n == 1)
    {
        return a;
    }
    else 
    {
        return a * powerCalc_rec(a, n - 1);
    }
}

int main()
{
    int a = 2;
    int n = 3;

    int ris = powerCalc_rec(a, n);

    cout << ris << endl;

    return 0;
}
