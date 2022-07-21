#include<iostream>

using namespace std;


int main()
{
	


	enum marvellous_batches{PPA = 0,LB = 1,LSP = 2,python = 3}; 

	const int Fees[] = {15000,16000,17000,18000};
	const float duration[] = {3,5,4,0,3,5,4,5,};

	int choice = 0;

	cout<<"Select the batch that you want\n";

	cin>>choice;


	switch(choice)
	{
		case PPA:
			cout<<"thank you selecting pre placement batch\n";
			cout<<"duration is : "<<duration[PPA]<<"\n";
			cout<<"fees are :"<<Fees[PPA]<<"\n";
			cout<<"thank you for visiting marvel\n";
			
			break;



		case LB:
			cout<<"thank you selecting logic building batch\n";
			cout<<"duration is : "<<duration[LB]<<"\n";
			cout<<"fees are :"<<Fees[LB]<<"\n";
			break;


		case LSP:
			cout<<"thank you selecting angular batch\n";
			cout<<"duration is : "<<duration[LSP]<<"\n";
			cout<<"fees are :"<<Fees[LSP]<<"\n";
			break;


		case python:
			cout<<"thank you selecting python batch\n";
			cout<<"duration is : "<<duration[python]<<"\n";
			cout<<"fees are :"<<Fees[python]<<"\n";
			break;




			default:
				cout<<"there is no batch\n";
				cout<<"contact admin: 9011247166\n";


	}
	 





	return 0;

}