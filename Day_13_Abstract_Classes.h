/*

Objective
Today, we're taking what we learned yesterday about Inheritance and extending
it to Abstract Classes. Because this is a very specific Object-Oriented
concept, submissions are limited to the few languages that use this construct.
Check out the Tutorial tab for learning materials and an instructional video!

*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};
//Write MyBook class
class MyBook: public Book
{
    private:
        int price;
    public:

        MyBook(string title,string auther,int price) : Book(title, auther)
            {
                this->price=price;
            }
        virtual void display()
        {
            cout << "Title: "<< title;
            cout << "Auther: "<< auther;
            cout << "Price: "<< price;
        };
};
int main()
{
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
