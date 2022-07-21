#include<iostream>

usinge namespace std;

class demo
{
	public:
	{
		int i;
	}
	private:

	{
		int j;
	}
	protected:
	{
		int k;
	}


};


class hello : public demo
{
	publi:
		int x;
	private:
		int y;
	protected:
		int z;


};



int main()
{
	


	demo dobj;

	cout<<dobj.i<<"\n";
	//cout<<dobj.j;
	//cout<<dobj.k;


	hello hobj;
	cout<<hobj.x<<"\n";
	//cout<<hobj.y;
	//cout<<hobj.z;
	cout<<hobj.i<<"\n";
	//cout<<hobj.j;
	cout<<hobj.k<<"\n";


	cout<<sizeof(hello)<<"\n";

	return 0;

}