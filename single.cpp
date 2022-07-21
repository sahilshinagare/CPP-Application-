#include<iostream>

using namespace std;

class base
{
	public:
		int i,j;
		base()
		{
			cout<<"base constructor\n";

		}
		~base()
		{
			cout<<"base destructor\n";

		}
};

class derived : public base
{
	public:
		int i,j,k;
		derived()
		{
			cout<<"derived constructor\n";
		}
		~derived()
		{
		cout<<"derived destructor\n";

		}
};

class derived1 : public derived
{
	public:
		int j,k;
		derived()
		{
			cout<<"derived constructor\n";
		}
		~derived()
		{
			cout<<"deived destructor\n";

		}
};

int main()
{
	derived dobj;

	return 0;

}