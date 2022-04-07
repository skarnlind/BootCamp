#include <iostream>
#include <vector>
#include <string>
using namespace std;


void print_menu()
{
    cout << " ------MENU------ " << endl;
    cout << "1. Entry of New Book " << endl;
    cout << "2. Buy Book " << endl;
    cout << "3. Search for Book " << endl;
    cout << "4. Edit Details of Book " << endl;
    cout << "5. Exit " << endl;
    cout << endl;
}

int menu_selection()
{
    cout << "Enter your Choice: " << endl;
    int value;
    cin >> value;

    switch (value)
        {
        case 1:
             add_book();
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        default:
            cout << "Please a select an option number from the menu: ";
        }
        cout << "\n";

    // return value;
}

class Book
{
        string a_name, p_name, t_name;
        int price, copies; 

public:
        Book(){ 
 
        // constructor  
        //but you should assign author, title etc in the constructor, not as separate methods  
        }

//The method should be verbs like, search_book()
Book print_info();
Book add_book();
void view_book();
void remove_book();

    set_author_name(string a_name)
    {
        cout<<a_name;
        authorname=a_name;
    }
    get_author_name()
    {
    }

    set_title(t_name)
    {
    }

    get_title()
    {
    }

    set_publ_name(p_name)
    {
    }
    get_publ_name()
    {
    }

    set_price(price)
    {
    }
    get_price()
    {
    }

    set_copies(copies)
    {
    }
    get_copies()
    {
    }


    Book add_book()
    {
       // string a_name, p_name, t_name;
        //int price, copies;

        Book new_book;
        cout << "Enter Author Name: " << endl;
        cin >> a_name;
        new_book.set_author_name.push_back(a_name);
        cout << "\n Enter Title Name: " << endl;
        cin >> t_name;
        new_book.set_title.push_back(t_name);
        cout << "\n Enter Publisher Name: " << endl;
        cin >> p_name;
        new_book.set_publ_name.push_back(p_name);
        cout << "\n Enter Price: " << endl;
        cin >> price;
        new_book.set_price.push_back(price);
        cout << "\n Enter Number of Copies: " << endl;
        cin >> copies;
        new_book.set_copies.push_back(copies);

    }
};

class Bookstore{
getInventory(){

}
    addBook(){

    }

        void print_info()
    {
        // to loop through register_of_books.[0].author==search_string
    }

        // register_of_books[10]={string a_name, t_name, p_name, price, copies};

};


int main()
{
    Book new_book;
    vector<Book> book;

    print_menu();
    // in a main function you request user inputs, than then you use to create the book object
    //Or to call to the book methods

    int value = menu_selection();
    //new_book.add_book();

    return 0;
}