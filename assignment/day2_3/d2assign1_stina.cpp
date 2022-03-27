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

#include <cstring>
#include <iostream>
using namespace std;

int RemoveDuplicates(int in_arr[], int in_arr_len, int out_arr[],
                     int *out_arr_leng);

int main()
{

    int arr1[] = {1, 2, 3, 3, 3, 4, 4, 5, 5, 5};
    int arr1_leng = sizeof(arr1) / sizeof(arr1[0]);
    int new_arr[arr1_leng] = {0};
    int new_arr_size = 0;

    int return_value = RemoveDuplicates(arr1, arr1_leng, new_arr, &new_arr_size);

    if (return_value == 0)
    {
        cout << "New array:" << endl;
        // Print updated array
        for (int i = 0; i < new_arr_size; i++)
        {
            cout << new_arr[i] << " ";
        }
        // print new_arr_size pointer
        cout << "\n new size: " << new_arr_size << endl;
    }
    else
    {
        cout << "Error when array size is zero.";
    }
}

int RemoveDuplicates(int in_arr[], int in_arr_leng, int out_arr[],
                     int *out_arr_leng)
{
    if (0 == in_arr_leng)
    {
        cout << "Error! Zero size input array.\n";
        return -1;
    }

    int tmp_arr[in_arr_leng] = {0};
    int tmp_arr_leng = 0;

    for (int i = 0; i < in_arr_leng; i++)
    {
        if (0 == i)
        {
            tmp_arr[tmp_arr_leng] = in_arr[i];
            tmp_arr_leng++;
        }
        else
        {
            if (in_arr[i] == in_arr[i - 1])
            {
                continue;
            }
            else
            {
                tmp_arr[tmp_arr_leng] = in_arr[i];
                tmp_arr_leng++;
            }
        }
    }
    *out_arr_leng = tmp_arr_leng;
    memcpy(out_arr, tmp_arr, tmp_arr_leng * sizeof(int));
    return 0;
}