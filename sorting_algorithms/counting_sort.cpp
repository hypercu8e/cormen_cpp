#include <iostream>
using namespace std;

/*
This is the first algorithm that does not use comparirons to order 
the input. 


*/

void counting_sort(int* array, int size)
{

}

int main()
{
    int array[5] = {3, 1, 4, 5, 2};

    cout << "Array prima dell'ordinamento: ";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    selectionSort_iter(array, 5);

    cout << "Array dopo l'ordinamento: ";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
