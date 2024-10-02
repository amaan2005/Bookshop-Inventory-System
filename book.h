#include<iostream>
#include<cmath>
using namespace std;

class book{
    
    public:
    string name;
    string title;
    string author;
    string publisher;
    double price;
    int count;
    book() = default;
    void create();
    void buy();
    void search();
    void edit();
    int verify(string author_param, string title_param);
    

    


    

};