
// Write a function template which receives two of any shapes from last week’s assignment, compares them, and
// prints out the result.

#include <iostream>

using namespace std;


template <typename T1, typename T2, typename T3>
class Square
{
public:
T3 s;
    Square(T1)
    {
       T1 area = s * s;
    }
    Square(T2)
    {
       T2 area = s * s;
    }
}
;

template <typename T1, typename T2>
bool isBigger(T1 area1, T2 area2)
{
    return (area1 > area2) ? true : false;
}

template <typename T1, typename T2>
bool Equal(T1 area1, T2 area2)
{
    return (area1 == area2) ? true : false;
}

template <typename T1, typename T2>
bool isSmaller(T1 area1, T2 area2)
{
    return (area1 < area2) ? true : false;
}

int main()
{

cout << isBigger<int,int>(5,34)<< endl;
cout << isBigger<double,int>(5.46,5.47)<< endl;
cout << isBigger<float>(5.56,6.0)<< endl;
cout << isBigger<double,double>(0.2,6)<< endl;

cout << Equal<int,int>(5,6)<< endl;
cout << Equal<double,int>(5.46,5.47)<< endl;
cout << Equal<float>(5.56,6.0)<< endl;
cout << Equal<double,double>(0.2,6)<< endl;

cout << isSmaller<int,int>(5,6)<< endl;
cout << isSmaller<double,int>(5.46,5.47)<< endl;
cout << isSmaller<float>(5.56,6.0)<< endl;
cout << isSmaller<double,double>(0.2,6)<< endl; 

    return 0;
}



