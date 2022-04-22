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
    int tmp_arr[arr1_leng] = {0};
    int new_arr_size = 0;

    RemoveDuplicates(arr1, arr1_leng, tmp_arr, &new_arr_size);

    //cout << tmp_arr[new_arr_size] << endl;
    cout << new_arr_size << endl;
}

int RemoveDuplicates(int in_arr[], int in_arr_leng, int out_arr[],
                     int *out_arr_leng)
{
    
    if (in_arr_leng==0 || in_arr_leng==1){
        return in_arr_leng;
    }

    int tmp_arr[in_arr_leng] = {0};

    // cout<<tmp_arr[0]<<endl;
    // cout<<tmp_arr[1]<<endl;
    int tmp_arr_leng = 0;

    for (int i = 0; i < in_arr_leng; i++)
    {
        // in_arr_leng==10
        if (0 == i)
        {
            tmp_arr[tmp_arr_leng] = in_arr[i];
            tmp_arr_leng++;
        }
        else
        {
            if (in_arr[i] == in_arr[i - 1])
            // in_arr[1]==in_arr[0]
            {
                continue;
            }
            else
            {
                tmp_arr[tmp_arr_leng] = in_arr[i];
                // tmp_arr[1]= in_arr[1]
                tmp_arr_leng++;
            }
            // cout<<tmp_arr[tmp_arr_leng]<< endl;
        }
    }
    *out_arr_leng = tmp_arr_leng;
    // out_arr[*out_arr_leng]=tmp_arr[tmp_arr_leng];
    return 0;
}