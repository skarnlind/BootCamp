#include <iostream>
#include <vector>
#include <string>
using namespace std;

// bool user_exit = false;

class Book
{
public:
    string author_name, publisher_name, b_title;
    int price, copies;

    Book(string a, string t, string p, int pr, int c)
    {
        author_name = a;
        publisher_name = p;
        b_title = t;
        price = pr;
        copies = c;
    }
    Book()
    {
        author_name = " ";
        publisher_name = " ";
        b_title = " ";
        price = 0;
        copies = 0;
    }
};

void print_menu();
void add_books(vector<Book> &booklist);
void menu_selection(vector<Book> &booklist);
void buy_book(vector<Book> &booklist, int index);
int search_book(vector<Book> &booklist);
void edit_book(vector<Book> &booklist, int counter);

void print_menu()
{
}

void menu_selection(vector<Book> &booklist)
{
    int value = 0;
    // bool user_exit;

    while (value != 5)
    {

        cout << "\n ------MENU------ " << endl;
        cout << "1. Entry of New Book " << endl;
        cout << "2. Buy Book " << endl;
        cout << "3. Search for Book " << endl;
        cout << "4. Edit Details of Book " << endl;
        cout << "5. Exit " << endl;
        cout << endl;

        cout << "Enter your Choice: " << endl;

        cin >> value;
        switch (value)
        {
        case 1:
            add_books(booklist);
            break;
        case 2:
        {
            int index = search_book(booklist);
            if (booklist.size() > index)
            {
                buy_book(booklist, index);
            }
            break;
        }
        case 3:
        {
            search_book(booklist);
            break;
        }
        case 4:
        {
            int index = search_book(booklist);
            if (index < booklist.size())
            {
                edit_book(booklist, index);
            }
            break;
        }
        case 5:
        {
            cout << "Exits program" << endl;
            return;
        }
        default:
            cout << "Please select an option number from the menu: " << endl;
        }

        cout << "\nPress enter to continue..." << endl;
        cin.ignore(5, '\n');
    }
}

void add_books(vector<Book> &booklist)
{
    string a_name, p_name, t_name;
    int price, copies;

    cout << "\n Enter Author Name: " << endl;
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

    cin.ignore();
}
void buy_book(vector<Book> &booklist, int index)
{
    int cop;
    cout << "How many copies would you like?: " << endl;
    cin >> cop;

    if (cop <= booklist[index].copies)
    {
        cout << "Total cost: " << booklist[index].price * cop << endl;
    }
    else
    {
        cout << "Number of Copies not in Stock";
    }

    cin.ignore();
}
int search_book(vector<Book> &booklist)
{
    string a_name, t_name;
    cout << "\n Enter Author Name: ";
    cin.ignore();
    getline(cin, a_name);
    cout << "\n Enter Title Name: ";
    cin.ignore();
    getline(cin, t_name);

    bool book_found = false;
    int index;

    for (unsigned counter = 0; counter < booklist.size(); ++counter)
    {
        if (a_name == booklist[counter].author_name || t_name == booklist[counter].b_title)
        {
            cout << "Book available: " << endl;
            cout << ' ' << counter << "-" << endl;
            cout << "Author: " << booklist[counter].author_name << endl;
            cout << "Book title: " << booklist[counter].b_title << endl;
            cout << "Publisher: " << booklist[counter].publisher_name << endl;
            cout << "Price: " << booklist[counter].price << endl;
            cout << "Copies: " << booklist[counter].copies << endl;
            book_found = true;
            index = counter;
        }
    }

    if (!book_found)
    {
        cout << "Book NOT found" << endl;
        index = booklist.size();
    }
    return index;
}

void edit_book(vector<Book> &booklist, int counter)
{
    string a_name, p_name, t_name;
    int price, copies;

    cout << "\n Enter Author Name: " << endl;
    cin >> booklist[counter].author_name;
    cout << "\n Enter Title Name: " << endl;
    cin >> booklist[counter].b_title;
    cout << "\n Enter Publisher Name: " << endl;
    cin >> booklist[counter].publisher_name;
    cout << "\n Enter Price: " << endl;
    cin >> booklist[counter].price;
    cout << "\n Enter Number of Copies: " << endl;
    cin >> booklist[counter].copies;

    cin.ignore();
}

int main()
{
    vector<Book> booklist;
    // books to start with
    Book book1("Stina", "Kalle Anka", "Frank", 200, 2);
    Book book2("Astrid Lindgren", "Bullerbyn", "Ilon Wiklund", 55, 76);
    Book book3("Gunilla Bergström", "Alfons Åberg", "Bonnier", 150, 53);
    Book book4("Astrid L", "Madicken", "Frank", 45, 300);

    booklist.push_back(book1);
    booklist.push_back(book2);
    booklist.push_back(book3);
    booklist.push_back(book4);

    // bool user_exit = false;

    print_menu();
    menu_selection(booklist);

    return 0;
}
