#include "Point.h"
#include <iostream>
#include <exception>;
#include <stdexcept>;

using namespace std;

int main()
{
	Point l;
	bool result;
	do 
	{
		try
		{
			result = true;
			cin >> l;
		}
		catch (bad_exception& e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (invalid_argument e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (BadException e)
	{
		cerr << e.what() << endl;
		result = false;
	}
	} while (!result);
	cout << l;
	l.distance();
	cout << endl;
	cout << "inkrement(prefiksna forma)" << endl;
	++l;
	cout << l;
	cout << endl;
	cout << "dykryment(prefiksna forma)" << endl;
	--l; 
	cout << l;
	cout << endl;
	cout << "inkryment(postfiksna forma)" << endl;
	l++; 
	cout << l;
	cout << endl;
	cout << "dykrement(postfiksna forma)" << endl;
	l--; 
	cout << l;
	return 0;
}