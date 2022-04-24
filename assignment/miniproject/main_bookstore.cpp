#include <iostream>
#include <vector>
#include <string>
#include "Bookstore.hpp"
using namespace std;

int main()
{
    vector<Book> booklist; //vector declaration
    // Creates books of class Book to start with.
    Book book1("Stina", "Kalle Anka", "Frank", 200, 2);
    Book book2("Astrid Lindgren", "Bullerbyn", "Ilon Wiklund", 55, 76);
    Book book3("Gunilla Bergström", "Alfons Åberg", "Bonnier", 150, 53);
    Book book4("Astrid L", "Madicken", "Frank", 45, 300);

    //Filling the vector with 4 books to start with.
    booklist.push_back(book1);
    booklist.push_back(book2);
    booklist.push_back(book3);
    booklist.push_back(book4);

    menu_selection(booklist); //Program goes to menu_selection function.

    return 0;
}