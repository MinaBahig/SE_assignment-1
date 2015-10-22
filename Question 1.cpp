#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	string name;
	string accnumber;
	float balance;
public:
	Account(string x ,string y , float z)
	{
		name = x;
		accnumber = y;
		balance = z;
	}
	void show()
	{
		cout << endl << "Your name is: " << name << endl << "Your account number is: " << accnumber
			<< endl << "Your balance is: " << balance << " $" << endl;
	}
	void deposit(float cash) 
	{
		balance += cash;
		show();
	}
	void withdraw(float cash) 
	{
		balance -= cash;
		show();
	}
};

void main()
{
	string name, accnumber;
	float balance, in, out;
	int flag;

	cout<< "Please enter your name: ";
	getline(cin,name);
	cout<< "Please enter your account number: ";
	getline(cin,accnumber);
	cout<< "Please enter your balance, in dollars: ";
	cin >> balance;

	Account acc(name,accnumber,balance);
	acc.show();
	
	loop:
	cout << endl << "Please enter 1 to deposit, 2 to withdraw: ";
	cin >> flag;

	if ( flag == 1 )
	{
		cout << "Please enter the amount to deposit in dollars; ";
		cin >> in;
		acc.deposit(in);
		goto loop;
	}
	else if ( flag == 2 )
	{
		cout << "Please enter the amount to withdraw in dollars; ";
		cin >> out;
		acc.deposit(out);
		goto loop;
	}
	else
	{
		cout << endl << "error !" ;
		goto loop;
	}

}