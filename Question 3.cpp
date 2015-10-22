#include <iostream>

using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	 Move(double a = 0, double b = 0) // sets x, y to a, b
	{
		x = a;
		y = b;
	}
	void showmove() const // shows current x, y values
	{
		cout << " ( x , y ) = ( " << x << " , " << y << " )" << endl;
	} 
Move add(const Move & m) const
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
{
	Move p;
	p.x = x + m.x;
	p.y = y + m.y;
	return p;
}

	
void reset(double a = 0, double b = 0) // resets x,y to a, b
	{
		x = a;
		y = b;
	} 
};

void main()
{
	double x,y,a,b;

	cout << "Please enter x: ";
	cin >> x;
	cout << "Please enter y: ";
	cin >> y;
	Move p(x,y);
	p.showmove();

	cout << "Please enter amount of change to x: ";
	cin >> a;
	cout << "Please enter amount of change to y: ";
	cin >> b;
	Move q(a,b);
	p = p.add(q);
	p.showmove();

	cin.ignore(1);
	int c;
	printf("Press <enter> to reset the coordinates: ");
	fflush(stdout);
	while ((c = getchar()) != '\n' && c != EOF) {
		/* nothing */
	}

	p.reset(x,y);
	p.showmove();

}