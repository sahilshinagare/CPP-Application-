#include<iostream>

using namespace std;

class demo
{
	public:
		int i,j;             //intance variable (non staic)
		static int x;        //class variable  (static)

		demo(int a =10, int b = 20)
		{
			cout<<"inside constructor\n";

			this->=a;
			this->=b;

		}

		//void fun(demo *this,int no)

		void fun(int no)
		{
			cout<<"inside non static fun\n";
			cout<<this->i<<"\n";
			cout<<this->j<<"\n";

		}
		//staic void gun(int value)
		static void gun(int value)
		{
			cout<<"inside static gun\n";

		}
};


int demo::x= 30;

int main()
{
	
	cout<<demo::x<<"\n";
	demo::gun(11);


	demo obj(11);


	obj.fun(21);
	cout<<sizeof(obj)<<"\n";



	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";


	obj gun(11);



	return 0;
}