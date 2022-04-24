#include <iostream>
using namespace std;

/*1C Write a program to return an array containing the values between two 8-bits unsigned integers (0-255) IN DESCENDING
ORDER EXCLUSIVE.
The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between,
and then arrange the sequence in descending order excluding the upper and lower values.
If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value =
0xFF value: 225
Example:
Input: LowerValue=2 and UpperValue=5 Output:
Output Array=4,3 Output Array Size=2
*/

int lower_upper_v(int lower, int upper)
{
    int arr_l = (upper - lower - 1);
    unsigned int arr[arr_l];
    int i = lower;
    if(0>upper || lower<0){
        arr[0]=0xFF;
        arr[1]=0xFF;
        cout<<arr;
    }

    if(lower>upper || lower==upper){
        arr[0]=0xFF;
        arr[1]=0xFF;
        cout<<arr[0];
        cout<<arr[1];
    }
    for (int j = arr_l; j > -1; j--)
    {
        if (i >= lower && i <= upper)
        {
            arr[j] = i;
        }
        i++;
    }
    // cout << arr[i] << "\t";
    for (int k = 0; k < arr_l; k++)
    {
        cout << arr[k] << "\t";
    }
}

int main()
{
    int i, j, temp;
    int array[2];
    cout << "Enter a values in between 0-255:" << endl;
    cin >> array[0];
            if(array[0]<0){
        cout<<"Value not accepted";
        return -1;
            }
    cout << "\nEnter an other value in between 0-255: " << endl;
    cin >> array[1];
        if(array[1]<0){
        cout<<"Value not accepted";
        return -1;
    }

    // cout << endl;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = i + 1; j < 2; j++)
    //     {
    //         if (array[j] < array[i])
    //         {
    //             temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }
    cout << endl;

    lower_upper_v(array[0], array[1]);

    return 0;
}