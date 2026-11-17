#include<iostream>
using namespace std;

class Book
{
	public:
	string Title;
	string Author;

Book(string t, string a)
{
	Title = t;
	Author = a;
}

Book(Book &b)
{
	Title = b.Title;
	Author = b.Author;
}

void Display()
{
	cout<<"Title of a Book : "<<Title<<endl;
	cout<<"Author of a Book : "<<Author<<endl;
}

};

int main()
{
	Book b1("To kill a Mockingbird", "Harper Lee");
	Book b2(b1);
	b1.Display();
	b2.Display();

return 0;
}
