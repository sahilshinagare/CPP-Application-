#include<iostream>
using namespace std;

int main()
{
	
	int arr[10];
	int *p = NULL;

	//p = (int *)malloc(sizof(int)*10);

	p = new int[10];
	if(p==NULL)
	{
		cout<<"unable to locate meomary\n";

	}
	else
	{
		cout<<"meomary get allocated succed address::\n"<<p<<"\n";
	}

	delete []p;
	//free
	return 0;
}