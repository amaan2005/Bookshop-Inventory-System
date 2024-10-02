#include <iostream>
#include <cstring>
#include <cmath>
#include "book.h"
using namespace std;

void book::create(){
    cout << "Enter Author Name: " << endl;
    cin >> author;
    cout << "Enter Title Name: " << endl;
    cin >> title;
    cout << "Enter Publisher Name: " << endl;
    cin >> publisher;
    cout << "Enter Price: " << endl;
    cin >> price;
    cout << "Enter Stock Position: " << endl;
    cin >> count;
    cout << "Done!" << endl;
}

void book::buy(){
    cout << "How many would you like to buy?" << endl;
    int nums;
    cin >> nums;
    while(nums>count){
        cout << "Error: Requested count greater than stock. Try again." << endl;
        cin >> nums;
    }
    count -= nums;
    cout << nums << " books of " << title << " purchased successfully" << endl;
    double total = price*nums;
    cout << "Price: " << total << endl;
}

void book::search(){
    cout << "Found!" << endl;
    cout << "Author Name: " << author << endl;
    cout << "Title Name: " << title << endl;
    cout << "Publisher Name: " << publisher << endl;
    cout << "Price: " << price << endl;
    cout << "Stock: " << count << endl;
}

void book::edit(){
    cout << "Enter new author name: " << endl; cin >> author;
    cout << "Enter new title name: " << endl; cin >> title;
    cout << "Enter new publisher name: " << endl; cin >> publisher;
    cout << "Enter new price: " << endl; cin >> price;
    cout << "Enter new stock: " << endl; cin >> count;
    cout << "Done!" << endl;
}

int book::verify(string author_param, string title_param){
    if((author.compare(author_param)==0) && (title.compare(title_param)==0)){
        return 1;
    }else{
        return 0;
    }
}