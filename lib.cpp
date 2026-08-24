#include<iostream>
using namespace std;
int main()
{
int id1,id2,id3;
string title1,title2,title3;

cout<<"Enter your book 1 id :-";
cin>>id1;

cin.ignore();
cout<<"Enter your book 1 title :-";
getline(cin,title1);

cout<<"Enter your book 2 id :-";
cin>>id2;

cin.ignore();
cout<<"Enter your book 2 title :-";
getline(cin,title2);

cout<<"Enter your book 3 id :-";
cin>>id3;

cin.ignore();
cout<<"Enter your book 3 title :-";
getline(cin,title3);

cout<< "\n====LIBRARY BOOKS===="<<id1;

cout<< "\nbook id :-"<<id1;
cout<<"\nbook title :-"<<title1;

cout<<"\nbook id :-"<<id2;
cout<<"\nbook title :-"<<title2;

cout<<"\nbook id :-"<<id3;
cout<<"\nbook title :-"<<title3;

return 0;
}
