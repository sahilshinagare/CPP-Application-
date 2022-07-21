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
	}

	demo(int a,int b) :(a),j(b)
	{
		cout<<"inside parametrised\n";


	} 

};

int main()
{
	demo obj(11,21);
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";


	obj.j++;


	return 0;

}