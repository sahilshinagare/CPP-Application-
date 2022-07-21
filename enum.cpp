#include<iostream>

using namespace std;

int main()
{
	int Input = 0;
	enum days{sun,mon,tue,wed,thus,fri,sat};

	enum days obj;

	obj = tue;

	cout<<obj<<"\n";

	cout<<sizeof(obj)<<"\n";

	enum gender {female = 1 , male = 2};
	cout<<"Enter your gender\n";
	cout<<"`1:female\n";
	cout<<"2:male\n";


	cin>>Input;

	switch(Innput)
	{
		case female:
			cout<<"tax free limit is 3,00,000\n";

		case male:
			cout<<"tx free limit is 2,00,000\n";
			break;


		default :
			cout<<"invalid gender\n";


	}


	return 0;

}