#include<iostream>
#include <cstring>
#include<cmath>
#include "book.h"
using namespace std;
int i;

int main(){
	string title_;
	string author_;
	int option;
	book b[100];
	while(1){
	cout << "Welcome to bookshop inventory system! " << endl;
	cout << "What would you like to do? " << endl;
	cout << "Create a book: (0)" << endl;
	cout << "Buy book: (1)" << endl;
	cout << "Search book: (2)" << endl;
	cout << "Edit book details: (3)" << endl;
	cout << "Exit: (4)" << endl;
	cin >> option;
	switch(option){
		case 0: 
				b[i].create();
				++i;
				cout << "-----------------------" << endl;
				break;
		case 1: 
				cout << "Enter Author Name: " << endl;
				cin >> author_;
				cout << "Enter title Name: " << endl;
				cin >> title_;
				for(int a=0; a<i; ++a){
					if(b[a].verify(author_, title_)){
						b[a].buy();
					}
				}
				cout << "-----------------------" << endl;
				break;
		case 2: 
				cout << "Enter Author Name: " << endl;
				cin >> author_;
				cout << "Enter title Name: " << endl;
				cin >> title_;
				for(int a=0; a<i; ++a){
					if(b[a].verify(author_, title_) == 1){
						b[a].search();
					}
				} 
				cout << "-----------------------" << endl;
				break;
		case 3:
				cout << "Enter Author Name: " << endl;
				cin >> author_;
				cout << "Enter title Name: " << endl;
				cin >> title_;
				for(int a=0; a<i; ++a){
					if(b[a].verify(author_, title_)){
						b[a].edit();
					}
				} 
				cout << "-----------------------" << endl;
				break;
		case 4:
				cout << "Exiting program..." << endl;
				exit(0);

		default: 
				cout << "Invalid option! Try again." << endl;
			
	}
	}
	return 0;

}

