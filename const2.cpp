#include<iostream>
using namespace std;


class demo
{
	public:
		int i;
		const int j;
	demo(): j(23)
	{
		i = 21;

	}
	demo(int a,int b) :j(b)
	{
		cout<<"inside parametrised\n";
	}
};

int main()
{
	demo obj ;

	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";

	return 0;

}