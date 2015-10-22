

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name

public:

	Person() // #1
	{
		lname = "";
		fname[0] = '\0'; 
	} 

	Person(const string & ln, const char * fn = "Heyyou")
	{
		fn = &fname[0];
		lname = ln;
	}// #2

	Person(const string & ln)
	{

		fname[0] = '\0';
	}

	void Show() const
	{
		cout << "Welcome, " << fname << lname ;
	}
	void FormalShow() const
	{
		cout << "Welcome, " << lname << fname ;
	}

};

void main ()
{
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument
	Person three("Dimwiddy", "Sam"); // use #2, no defaults
	
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;

	
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;

	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;			
}