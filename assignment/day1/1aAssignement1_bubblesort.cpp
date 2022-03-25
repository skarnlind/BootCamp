#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;
    unsigned int array[10] = {10, 2, 42, 14, 43, 25, 18, 1, 5, 45};
    cout << "Input array\n";
    
    for (i = 0; i < 10; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorted Element Array\n";
    for (i = 0; i < 10; i++)
    {
        cout << array[i] << "\t";
    }

    cout<< endl;
    cout<<endl;

    return 0;
}
