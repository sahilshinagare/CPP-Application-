#include<iostream>

using namespace std;


float Area(float fradious, float PI = 3.14)
{
	float fans = 0.0;
	fans = PI * fradious * fradious;
	return fans;

}


int main()
{
	
	float fret = 0.0;

	fret = Area(10.4,7.2);

	cout<<fret<<"\n";

	fret  = Area(10.6);
	cout<<fret<<"\n";

	return 0;

}