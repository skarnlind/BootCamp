#include <iostream>
#include <vector>
#include <string>
#include "Bookstore.hpp"
using namespace std;

void menu_selection(vector<Book> &booklist) //menu_selection function with booklist vector as a reference.
{
    int value = 0; //int value for while loop and switch loop.

    while (value != 5) //while loop for not printing the menu when exit choice is choosen.
    {
        //Menu for the user to chose
        cout << "\n ------MENU------ " << endl;
        cout << "1. Entry of New Book " << endl;
        cout << "2. Buy Book " << endl;
        cout << "3. Search for Book " << endl;
        cout << "4. Edit Details of Book " << endl;
        cout << "5. Exit " << endl;
        cout << endl;

        cout << "Enter your Choice: " << endl;
        //User to enter choice value 1-5.
        cin >> value;

        //switch function for the different user options
        switch (value)
        {
        case 1:
            add_books(booklist); //goes to add_books function
            break;//moves out of the switch loop
        case 2:
        {
            int index = search_book(booklist); //goes to search_book which gives the booklist "index" of the book
            buy_book(booklist, index); //then goes to buy_book and takes in booklist and index
            break;//moves out of the switch loop
        }
        case 3:
        {
            search_book(booklist); //goes search_book function to serach for book in booklist 
            break;
        }
        case 4:
        {
            int index = search_book(booklist);//goes to search_book which gives the booklist "index" of the book
            edit_book(booklist, index); ////then goes to edit_book function and takes in booklist and index
            break;
        }
        case 5:
        {
            cout<<"Exits program"<<endl; //Exit program
            return;
        }
        default:
            cout << "Please select an option number from the menu: " << endl; 
            // Anything else than a number in between 1-5 is entered as a choice of the user.
        }
      
        cout << "\nPress enter to continue..." << endl; //For not printing the menu just after the functions are finished
        cin.ignore(5,'\n'); //To clear buffer
        
    }
}

void add_books(vector<Book> &booklist)//add_books function which takes in booklist vector
{
    string a_name, p_name, t_name; //local parameters
    int price, copies;

    //User is asked to enter differnt facts about the book to be added.
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

    Book book(a_name, t_name, p_name, price, copies); //object book of class Book is created
    booklist.push_back(book); //book is added to the vector booklist

    cin.ignore(); //  Ignore or clear input buffer. 
}
void buy_book(vector<Book> &booklist, int index)//buy_book function which takes in booklist and index
{
    int cop; //local variable number of copies
    if (booklist.size() > index)//loop in order to knowing if book was found in booklist or not
    {
        cout << "How many copies would you like?: " << endl;
        cin >> cop; //user enters requested number of copies

        if (cop <= booklist[index].copies)//if the number of copies exists, total cost is printed
        {
            cout << "Total cost: " << booklist[index].price * cop << endl;
        }
        else//If requested number of copies does not exist, the following is printed.
        {
            cout << "Number of Copies not in Stock";
        }
    }
    cin.ignore(); //  Ignore or clear input buffer. 
}
int search_book(vector<Book> &booklist)//search_book function which takes in booklist
{
    string a_name, t_name; //local variables

    cout << "\n Enter Author Name: ";
    cin.ignore(); //  Ignore or clear input buffer. 
    getline(cin, a_name);//inputs author
    cout << "\n Enter Title Name: ";
    cin.ignore();//  Ignore or clear input buffer. 
    getline(cin, t_name);//inputs title

    bool book_found = false;//local variable
    int index;
    
    //loop for searcing trough the booklist if counter is smaller than booklist size
    for (unsigned counter = 0; counter < booklist.size(); ++counter)
    {   
        //If user writes a correct name of the author or a correct title name the following is printed
        if (a_name == booklist[counter].author_name || t_name == booklist[counter].b_title)
        {
            cout << "Book available: " << endl;
            cout << ' ' << counter << "-" << endl;
            cout << "Author: " << booklist[counter].author_name << endl;
            cout << "Book title: " << booklist[counter].b_title << endl;
            cout << "Publisher: " << booklist[counter].publisher_name << endl;
            cout << "Price: " << booklist[counter].price << endl;
            cout << "Copies: " << booklist[counter].copies << endl;
            book_found = true; //book_found boolean is set to true 
            index = counter;    //index variable is set to the value counter in order for 
                                //buy_book and edit_book functions to know the index in the booklist
        }
    }

    if (!book_found)//If book not found print the following
    {
        cout << "Book NOT found" << endl;
    }

    return index;
}

void edit_book(vector<Book> &booklist, int counter)//edit_book function that takes in booklist and counter/index
{
    string a_name, p_name, t_name; //local variables
    int price, copies;

    if (counter < booklist.size()) //if argument if counter is smaller than booklist size the book was found
    {
        //Knew values are added for booklist[counter]
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
    cin.ignore(); //  Ignore or clear input buffer. 
}