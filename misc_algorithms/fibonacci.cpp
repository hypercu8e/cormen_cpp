#include <iostream>
using namespace std;

int fibonacci_iter(int n)
{
    int fib0 = 0;
    int fib1 = 1;
    int ris; 
    for (int i = 0; i < n - 1; i++)
    {
        ris = fib0 + fib1;
        fib0 = fib1; 
        fib1 = ris; 
    }
    return ris;
}

int main()
{
    int n;
    int ris; 
    cout << "Inserisci un valore di n: ";
    cin >> n;
    cout << endl;
    
    ris = fibonacci_iter(n);
    cout << "Fibonacci: " << ris << endl;

    return 1; 
}
