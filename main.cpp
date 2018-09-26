#include <iostream>
#include <vector>
#include "Data.h"
using namespace std;

void insertionSort (auto &V);

int main ()
{
	vector <Data> V;
	
	V.push_back ({7,21.01});
	
	Data d;
	
	V.push_back(d);
	
	d.setX(10);
	d.setY(12.10);
	
	V.push_back(d);
	insertionSort(V);
	
	for (int i=0; i < V.size();i++)
	{
		cout << V[i].getX()<< " ";
		cout << V[i].getY()<<endl;
	}
}

void insertionSort (auto &V)
{
	for (int i=1; i < V.size();i++)
	{
		int j=i;
		
		while ( j>0 && V[j].getX() < V[j-1].getX() )
		{
				swap(V[j], V[j-1]);
				j--;
		}
	}
}
