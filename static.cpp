#include<iostream>


using namespace std;

class demo
{
	public:
		int i,j;
		static int x;


		demo()
		{
			cout<<"inside default constructor\n";
			i = 10;
			j = 20;
		}
};

int demo ::x = 30;


int main()
{
	cout<<demo::x<<"\n";
	demo obj1;
	demo obj2;


	cout<<sizeof(obj1)<<"\n";
	cout<<sizeof(obj2)<<"\n";
	cout<<obj1.i<<"\n";
	cout<<obj2.i<<"\n";




	return 0;

}