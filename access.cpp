#include<iostream>

using namespace std;

class demo
{
	public:
		int x;

	private:
		int y;

	public:
		demo()
		{
			x = 10;
			y = 20;
			x--;


		}

		void fun()
		{
			cout<<"inside public fun\n";

		}
	private:
		void gun()
		{
			cout<<"inside public fun\n";

		}

};




int main()

{
	demo obj;
	cout<<obj.x<<"\n";
	//cout<<obj.y<<"\n";




	obj.fun();
	//obj.gun();

	
	return 0;

}