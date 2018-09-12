#include <iostream>
#include <vector>
#include "Data.h"
using namespace std;

int main ()
{
	vector <Data> V;
	
	V.pushback ({7,21.01});
	
	Data d;
	
	V.pushback(d);
	
	d.setX(10);
	d.setY(12.10);
	
	V.pushback(d);
	
	for (int i=0; i<V.size();i++)
	{
		cout << V[i].getX()<< " ";
		cout << V[i].getY()<<endl;
	}
}
