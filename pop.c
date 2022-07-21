//Accept two number and perform addition and substraction
#include<stdio.h>

int addition(int ino1,int ino2)
{
	int ians=0;

	ians = ino1 + ino2;

	return ians;

}

int substraction(int ino1, int ino2)
{

	int ians = 0;
	ians = ino1 - ino2;
	return ians;
}


int main()
{
	int ivalue1 = 0, ivalue2 = 0, iret = 0;

	printf("Enter first number\n");
	scanf("%d",&ivalue1);

	printf("Enter second number\n");
	scanf("%d",&ivalue2);


	iret = addition(ivalue1,ivalue2);
	printf("Addition is %d\n",iret);




	return 0;
}