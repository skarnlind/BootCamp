/*• A car service shop needs to keep track of the records of services they provide to their customer.
Create a system for them so they could keep ATLEAST the below records:
• Date the customer visited
• Services performed (at least 2 different services)
• Parts changed (at least 2 different parts)
• Payment (method & amount)

enum for payment
arry for service and to choose 2
dynamic data allocation needs to be used/dynamic allocation which means apply exit to erase the data

print data*/

#include <iostream>

using namespace std;

class Serviceshop
{

public:

    Serviceshop();
    //Serviceshop(int year, int month, int day);
    int year;
    int month;
    int day;

    // Serviceshop(){
    // };

    int repair_date()
    {
        int i;
        int date[i];
        cout << "Year: ";
        cin >> date[0];
        cout << "Month: ";
        cin >> date[1];
        cout << "Day: ";
        cin >> date[2];

        //for (i = 0; i < 3; i++)
        //{
       //     cout << date[i];
       //     i++;
       // }
        

        // return date[i];
    }
    /*
        void showServices()
        {
            cout << " Option list:" << endl;
            cout << "1. Change of windshield" << endl;
            cout << "2. Complete software update" << endl;
            cout << "3. Front radar calibration" << endl;
            cout << "4. Checking the tyre pressure" << endl;
        }

        void choseService()
        {
            cout << "Chose an option from the list:" << endl;
            int service1;
            int service2;
            cin >> service1;
            cin >> service2;

            switch (service1||service2)
            {
            case 1:
                cout << "Parts required" <<"work will take" <<"it will cost";
                break;
            case 2:
                cout << "Parts required" <<"work will take" <<"it will cost";
                break;
            case 3:
                cout << "Parts required" <<"work will take" <<"it will cost";
                break;
            case 4:
                cout << "Parts required" <<"work will take" <<"it will cost";
                break;
            default:
                cout << "Please a select an option from the menu";
            }
        }

        void part()
        {
            //windshield
            //software update
            //radar calibration reset
            //check tyre pressure, change ECU SUM
        }

        enum Pay_method{swish, card, cash};
        Pay_method getPay_method();
        void setPay_method(Pay_method);

        enum Payment{windshield=1098, sw=399, rcalib=499, tyrep=100};
        Payment getPayment();
        void setPayment(Payment);
*/
};

int main()
{
    Serviceshop;
    //Serviceshop repair_date();
    //repair_date();
    //Serviceshop customer1;
    // Serviceshop customer2;

    //customer1.repair_date();

    //cout << "Repair date" << repair_date();

    // showServices();
    // choseServices();

    return 0;
}