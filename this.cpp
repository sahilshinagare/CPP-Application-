#include<iostream>
                                  
using namespace std;

class demo
{
	
	public:
		int x;
		int y;

	demo(int a = 10, int b = 20)
	{
		x = a;
		y = b;

	}
};

int main()
{
	demo obj1;
	demo obj2(11);
	demo obj3(11,21);


	return 0;

}