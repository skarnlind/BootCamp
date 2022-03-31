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
#include <string>

using namespace std;

class Record{
    int amount;
    string method;
    int year;
    int month;
    int day;

    public:
    void set_amount(int a){
    amount=a;


    }
    int get_amount(){
        return amount;
    }

        int repair_date()
    {
        cout << "Year: ";
        cin >> year;
        cout << "Month: ";
        cin >> month;
        cout << "Day: ";
        cin >> day;
    }
};

class Serviceshop
{
    int cost[4] = {1098, 399, 499, 100};
    string parts[4] = {"windshield exchanged. ",
                       "latest and greatest software loaded. ",
                       "reset and radar calibration. ",
                       "check tyre pressure and calibrate iTPMS. "};

public:
    Serviceshop()
    {
    }
    int year;
    int month;
    int day;

    Record payment[4];



    void servicesOptions()
    {
        cout << " Option list:" << endl;
        cout << "1. Change of windshield" << endl;
        cout << "2. Complete software update" << endl;
        cout << "3. Front radar calibration" << endl;
        cout << "4. Checking the tyre pressure" << endl;
        cout << endl;
    }

    void choseService()
    {
        cout << "Chose an option from the list:" << endl;
        int service1;
        // int service2;
        cin >> service1;
        // cin >> service2;

        switch (service1)
        // switch(service1||service2)
        {
        case 1:
            cout << "Parts and work required: "
                 << parts[0]
                 << "It will cost: " << cost[0];
            break;
        case 2:
            cout << "Parts and work required: "
                 << parts[1]
                 << "It will cost: " << cost[1];
            break;
        case 3:
            cout << "Parts and work required: "
                 << parts[2]
                 << "It will cost: " << cost[2];
            break;
        case 4:
            cout << "Parts and work required: "
                 << parts[3]
                 << "It will cost:  " << cost[3];
            break;
        default:
            cout << "Please a select an option number from the menu: ";
        }
        cout << "\n";
        // else{ cin>> service1;}
    }

    void part()
    {
        //     string parts[]={"windshield exchanged",
        //     "latest and greatest software loaded",
        //     "reset and radar calibration",
        //     "check tyre pressure and calibrate iTPMS"};

        // cout<< parts[0]<<endl;
    }

    void payMethod()
    {
        int i;
        string pmethod[3] = {"swish", "card", "cash"};

        cout << "How would you like to pay? 1.Swish 2.Card 3.Cash" << endl;
        cout << "Please enter a number: ";
        cin >> i;
    }

    /*
            enum Pay_method{swish, card, cash};
            Pay_method getPay_method();
            void setPay_method(Pay_method);

            enum Payment{windshield=1098, sw=399, rcalib=499, tyrep=100};
            Payment getPayment();
            void setPayment(Payment);
    */
    //    int payment(){

    //      int cost[4]={1098,399,499,100};
    //      int *p_cost=cost;

    //      return *p_cost;
    //    }
};

int main()
{
    // Serviceshop;
    Serviceshop customer1;
    // customer1.repair_date();
    // customer1.servicesOptions();
    //  customer1.payment();
    customer1.choseService();
    // customer1.part();
    // customer1.payMethod();

    // cout<< "Repair date: " << customer1.year <<"/"<<customer1.month<<"/"<<customer1.day<< endl;
    cout << "work performed: " << customer1.payment[0].get_amount();
    // << "cost" << customer1.getpayment << "payment method" << customer1.day << endl;

    //  Serviceshop customer2;

    return 0;
}