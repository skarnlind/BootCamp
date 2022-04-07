#include <iostream>
#include <bitset>

using namespace std;


int main()
{
string seatbelts="10111";
bitset<8> set1(seatbelts);
uint8_t windows=0b0100;
bitset<8> set2(windows);
string doors="1011";
bitset<8> set3(doors);
string lights="011";
bitset<8> set4(lights);


cout << "Seat Belts " <<set1<< endl;
cout << "Seat Belts " <<set1.to_ulong()<< endl;
cout << "Windows " <<set2<< endl;
cout << "Windows " <<set2.to_ulong()<< endl;
cout << "Doors " <<set3<< endl;
cout << "Doors " <<set3.to_ulong()<< endl;
cout << "Lights " <<set4<< endl;
cout << "Lights " <<set4.to_ulong()<< endl;

    return 0;
}