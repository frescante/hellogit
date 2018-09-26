#include "Data.h"

Data::Data ()
{
	x=0;
	y=0;
}
Data::Data(int a, float b)
{
	x=a;
	y=b;
}
int Data::getX()
{
	return x;
}
float Data::getY()
{
	return y;
}
void Data::setX(int a)
{
	x=a;
}
void Data::setY(float b)
{
	 y=b;
}
