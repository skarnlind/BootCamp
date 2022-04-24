#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_menu();
bool user_exit = false;

class Book
{
    string author_name, publisher_name, b_title;
    int price, copies;

public:
    Book(string a, string t, string p, int pr, int c) {
        
        this->author_name = a;
        this->publisher_name = p;
        this->b_title = t;
        this->price = pr;
        this->copies = c;
    }
    Book()
    {
        author_name = " ";
        publisher_name = " ";
        b_title = " ";
        price = 0;
        copies = 0;
    }

    void add_books(vector<Book> &booklist);
    void menu_selection(vector<Book> &booklist);
    void buy_book(vector<Book> &booklist, int index);
    int search_book(vector<Book> &booklist);
    void edit_book(vector<Book> &booklist, int counter);
};

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

void Book::menu_selection(vector<Book> &booklist)
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
    {
        int index = search_book(booklist);
        buy_book(booklist, index);
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
        edit_book(booklist, index);
        break;
    }
    case 5:
    {
        cout << "Exits Menu" << endl;
        bool user_exit = false;
        break;
    }
    default:
        cout << "Please select an option number from the menu: " << endl;
    }

    /*
        cout << "\n (menu_selection)Available books: " << endl;
        for (unsigned counter=0; counter<booklist.size(); ++counter)
        {
            cout << ' ' << counter << "-";
            cout << ' ' << booklist[counter].b_title << endl;
        }*/

    cout << "\nPress enter to continue..." << endl;
    cin.ignore();
}

void Book::add_books(vector<Book> &booklist)
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
}
void Book::buy_book(vector<Book> &booklist, int index)
{
    int cop;
    if (booklist.size() > index)
    {
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
    }
    cin.ignore();
    // Access the book to decrease the number of available copies
    // if (a_name == booklist[counter].author_name || t_name == booklist[counter].b_title)
    //     {
    //         cout << "How many copies would you like?: " << endl;
    //         cin >> cop;
    //         if (cop <= booklist[counter].copies)
    //         {
    //             cout << "Total cost: " << booklist[counter].price * cop << endl;
    //         }
    //         else
    //         {
    //             cout << "Number of Copies not in Stock";
    //         }
    //         book_found = true;
    //     }
}
int Book::search_book(vector<Book> &booklist)
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
    }

    return index;
}

void Book::edit_book(vector<Book> &booklist, int counter)
{
    string a_name, p_name, t_name;
    int price, copies;

    if (counter < booklist.size())
    {
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
    }
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

    bool user_exit = false;
    do
    {
        print_menu();
        void Book::menu_selection(booklist);
    } while (true);

    return 0;
}
