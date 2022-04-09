#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book
{
    string author_name, publisher_name, b_title;
    int price, copies;

public:
    Book(string a, string t, string p, int pr, int c)
    {
        author_name = a;
        publisher_name = p;
        b_title = t;
        price = pr;
        copies = c;

        // constructor
        // you should assign author, title etc in the constructor, not as separate methods
    }
    Book()
    {
        author_name = " ";
        publisher_name = " ";
        b_title = " ";
        price = 0;
        copies = 0;
    }

    // The method should be verbs like, search_book()

    // void search_book();
    // void edit_book();

    //     Book set_author_name(string a_name)
    //     {
    //         cout << a_name;
    //         authorname = a_name;
    //     }
    //     get_author_name()
    //     {
    //     }

    //     set_title(t_name)
    //     {
    //     }

    //     get_title()
    //     {
    //     }

    //     set_publ_name(p_name)
    //     {
    //     }
    //     get_publ_name()
    //     {
    //     }

    //     set_price(price)
    //     {
    //     }
    //     get_price()
    //     {
    //     }

    //     set_copies(copies)
    //     {
    //     }
    //     get_copies()
    //     {
    //     }
    // };

    // class Bookstore{
    // getInventory(){

    // }
    //     addBook(){

    //     }

    //         void print_info()
    //     {
    //         // to loop through register_of_books.[0].author==search_string
    //     }

    //         // register_of_books[10]={string a_name, t_name, p_name, price, copies};
};

void print_menu();
void add_books(vector<Book> &booklist);
void menu_selection(vector<Book> &booklist);
void buy_book(vector<Book> &booklist);

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

void menu_selection(vector<Book> &booklist)
{
    cout << "Enter your Choice: " << endl;
    int value;
    cin >> value;

    switch (value)
    {
    case 1:
        add_books(booklist);
        break;
    case 2:
        buy_book(booklist);
        break;
    case 3:
        // search_book();
        break;
    case 4:

        break;
    default:
        cout << "Please a select an option number from the menu: ";
    }
}

void add_books(vector<Book> &booklist)
{
    string a_name, p_name, t_name;
    int price, copies;

    cout << "Enter Author Name: " << endl;
    cin >> a_name;

    cout << "\n Enter Title Name: " << endl;
    cin >> t_name;

    cout << "\n Enter Publisher Name: " << endl;
    cin >> p_name;

    cout << "\n Enter Price: " << endl;
    cin >> price;

    cout << "\n Enter Number of Copies: " << endl;
    cin >> copies;

    Book book(a_name, t_name, p_name, price, copies);
    booklist.push_back(book);
}
void buy_book(vector<Book> &booklist)
{
    string a_name, t_name;
    cout << "\n Enter Title Name: " << endl;
    cin >> t_name;
    cout << "\n Enter Author Name: " << endl;
    cin >> a_name;

    cout << "Vector: ";

    for(auto i = booklist.cbegin(); t_name != &booklist(i); ++i)
    {
        cout << *t_name << " ";
    }
}

int main()
{
    // in a main function you request user inputs, than then you use to create the book object
    // Or to call to the book methods
    // Book book1("Kalle Anka", "Stina", "Frank", 200, 2);
    // Book book2("Bullerbyn", "Astrid Lindgren", "Ilon Wiklund", 55, 76);
    // Book book3("Alfons Åberg", "", "", 150, 53);
    // Book book4("Madicken", "Astrid L", "Frank", 45, 300);
    
    vector<Book> book;

    print_menu();
    menu_selection(book);

    for (int i = 0; i < 100; i++)
    {
        print_menu();
        menu_selection(book);
    }

    return 0;
}