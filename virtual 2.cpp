#include<iostream>


using namespace std;

class base
{
	
	public:
	int x,y;

};

class derived : public base
{
	public:
	int i,j;

};

int main()
{
	
	base *bp = new base();  //no casting
	derived *dp = new derived ();
	 // no casting


	base *bp1 = new derived();
	derived *dp1 = new base();

	return 0;
}