#include<iostream>
using namespace std;


class demo
{
	public:

		int addition(int no1, int no2)//CALL1000
		{
			int ans = 0;
			ans = no1 + no2;
			return ans;
		}

		int addition(int no1, int no2, int no3)//CALL2000
		{
		int ans = 0;
		ans = no1 + no2 + no3;
		return ans;
		}

		int addition(int no1, int no2, int no3, int no4)//CALL 3000
		{
		int ans = 0;
		ans = no1 + no2 + no3 + no4;
		return ans;
		}






};

int main()
{
	demo obj;
	int ret = 0;
	//PUSH10
	//PUSH11
	//CALL1000
	ret = obj.addition(10,12);//obj.addition@ii
	cout<<ret<<"\n";
	//PUSH20
	//PUSH23
	//PUSH22
//CALL2000
	ret = obj.addition(20,23,22);//obj.addition@iii
	cout<<ret<<"\n";
	//PUSH90
	//PUSH11
	//PUSH22
	//PUSH33
	//CALL3000
	ret = obj.addition(90,11,22,33);//on=bj.addition@4iiii
	cout<<ret<<"\n";


	return 0;
}
/*
/////////////////////////allowed/////////////////////////////////////////
changing number of argument
void fun(int, int);
void fun(int , int , int);


changing datatype of argument
void fun(int , int)
void fun(double,double);

changing sequence of argument
void fun(char,int,float)
void fu(int,float ,char);
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////not allowed/////////////
changing return value 
int fun();
float fun();


*/