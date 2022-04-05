
// Write a function template which receives two of any shapes from last week’s assignment, compares them, and
// prints out the result.

#include <iostream>

using namespace std;

template <typename T1, typename T2>
bool isBigger(T1 carea, T2 sarea)
{
    return (carea > sarea) ? true : false;
}


int main()
{
cout << isBigger<int,int>(5,6)<< endl;
cout << isBigger<double,int>(5.46,5.47)<< endl;
cout << isBigger<float>(5.56,6.0)<< endl;
cout << isBigger<double,double>(0.2,6)<< endl;
   

    return 0;
}