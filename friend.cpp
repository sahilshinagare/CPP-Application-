#include<iostream>

using namespace std;

class demo
{
	public:
		int x;
		int y;


	demo(int i = 0,int j = 0)
	{
		x = i;
		y = j;

	}

};
demo operator +(demo op)
{
	return op;

}

demo operator -(demo op)
{
	return  demo(-op.x,-op.y);

}

int main()
{
	
	demo obj1(11,-21);
	demo obj2(51,-101);
	demo robj1(0,0);
	demo robj
}