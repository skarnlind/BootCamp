#pragma once

#ifndef Bookstore
#define Bookstore
#include <vector>
#include <string>
#include <iostream>

using namespace std;



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


void add_books(vector<Book> &booklist);
void menu_selection(vector<Book> &booklist);
void buy_book(vector<Book> &booklist, int index);
int search_book(vector<Book> &booklist);
void edit_book(vector<Book> &booklist, int counter);

#endif

