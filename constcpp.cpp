#include<iostream>

using namespace std;

class demo
{
	public:
		int i;
		const int j;
	demo(): j(20)
	{
		i = 10;

		//j = 20;
	}

};



int main()
{
	demo obj;


	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";


	return 0;

}

