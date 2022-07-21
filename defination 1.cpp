#include<iostream>

using namespace std;

class demo
{
	public:
		int i,j;


		void fun()//defination
		{
			cout<<"inside fun\n";
		}
		void gun(int no)//overloded defination
		{
			cout<<"inside gun\n";
		}

};

class hello : public demo
{}

int main()
{




	return 0;

}
