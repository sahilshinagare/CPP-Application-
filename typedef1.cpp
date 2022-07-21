#include<iostream>

using namespace std;

int main()
{
	struct demo
	{
		int no1;
		int no2;

	};


	typedef struct demo DEMO;
	typedef struct demo *PDEMO;
	typedef struct demo **PPDEMO;

	typedef struct demo
	{
		int no1;
		int  no2;

	}DEMO,*PDEMO,**PPDEMO;struct demo *p = &
	//struct demo obj;
	DEMO obj;

	//struct demo *p = &obj;
	PDEMO p = &obj;


	//struct demo **q = &p;

















	return 0;

}