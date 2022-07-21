#include<iostream>


using namespace std;

class Arthmatic
{
	

	public:
	//character 
	int ino1;
	int ino2;

	Arthmatic()//constructer
	{
		cout<<"inside default constructer\n";
		ino1 = 0;
		ino2 = 0;
	}
	~Arthmatic() //distructer
	{
		cout<<"inside parametrised constructer\n";
		ino1 = A;
		ino2 = B;
	}
	int Addition()
	{
		int ians = 0;
		ians = ino1 + ino2;
		return ians;
	}

	int subtraction()
	{
		int ians = 0;
		ians = ino1 - ino2;
		return ians;
	}
};


int main()
{
	auto int ivalue1 = 0, ivalue2 = 0, iret = 0;
	cout<<"Enter first number\n";
	cin>>ivalue1;
	cout<<"Enter second number\n";
	cin>>ivalue2;

	Arthmatic obj1();
	Arthmatic ob2(ivalue1,ivalue2);

	return 0;
}