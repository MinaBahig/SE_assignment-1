# SE_assignment-1

####الاسم: مينا بهيج  
####رقم الجلوس: 33845  

* #### Question 1  
A class is a user-defined type, including all data and methods associated with this type.


* #### Question 2  
Encapsulation is achieved by protecting the data, and the functions that use them.  
Data hiding is achieved by hiding the data and functions.  
Abstraction is achieved by interacting with the class through an interface.

* #### Question 3  
 A class is a user-defined type, while an object is an istant of the class.

* #### Question 4  
 Usually, data is private and methods are public.

* #### Question 5  
```
class Account
{
private:
	string name;
	string accnumber;
	float balance;
public:
	Account(string x ,string y , float z = 0.0);
	void show() ;
	void deposit(float cash);
	void withdraw(float cash);
};
```

* #### Question 6  
 A constructor is called to create an instance of the class, the destructor is called to terminate this instance.

* #### Question 7  
```
Account(string x ,string y , float z = 0.0)
{
	name = x;
	accnumber = y;
	balance = z;
}
```

* #### Question 8  
 A default constructor has no arguments, it can be used to create an un-intitialized object.

* #### Question 9  
```
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
class Stock
{
private:
	std::string company;
	int shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }
public:
	Stock(); // default constructor
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock(); // do-nothing destructor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	const Stock & topval(const Stock & s) const;
	string showname()const { return company; }
	int showshares()const { return shares; }
	int showshareval()const { return share_val; }
	int showtotalval()const { return total_val; }
};
#endif
```
* #### Question 10  
 "this" is the address of the object in which "this" is used, and "*this" represents the object itself.

* ## End of Questions
