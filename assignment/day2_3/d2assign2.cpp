/*Write a program that removes the repeated number of an input sorted array and return a new array without
the repeated numbers. The function shall return error if the size of the input array is ZERO. The function takes
four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5} arr2 = {1,2,3,4,5}
*/

#include <iostream>
using namespace std;

int RemoveDuplicates(int o_arr[], int n_arr[], int n, int *n_new)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    // int temp[n];

    // Start traversing elements
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (o_arr[i] != o_arr[i + 1])
        {
            n_arr[j++] = o_arr[i];
        }
        else
        {
            n_arr[j++] = o_arr[n - 1];
        }
    }
    // Store the last element as whether
    // it is unique or repeated, it hasn't
    // stored previously

    // Modify original array
    for (int i = 0; i < j; i++)
    {
        o_arr[i] = n_arr[i];
    }

    *n_new=j;

    return j;
}

int main()
{

    int o_arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(o_arr) / sizeof(o_arr[0]);

    int n_arr[n];
    int *n_new;

    //RemoveDuplicates(o_arr,n_arr, n, n_new);

    int return_value=RemoveDuplicates(o_arr,n_arr, n, n_new);

    if (return_value==0)
    {
        cout << "New array:" << endl;
        // Print updated array
        for (int i = 0; i < n; i++)
        {
            cout << n_arr[i] << " ";
        }
        // print n_new pointer
        cout << "new size: " << &n_new << " ";
    }
    else
    {
        cout << "Error when array size is zero.";
    }

    return 0;
}