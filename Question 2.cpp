

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
		for (int i=0; i<LIMIT;i++)
		{		
			fname[i] = *fn;
			if (*fn == '\0')
			{
				fname[i] = '\0';
				break;
			}
			else *fn++;
		}
		lname = ln;
	}// #2

	void Show() const
	{
		cout << "Welcome, " << fname << " " << lname ;
	}
	void FormalShow() const
	{
		cout << "Welcome, " << lname << " " << fname ;
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