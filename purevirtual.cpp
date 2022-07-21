#include<iostream>

using namespace std;

class base
{
	public:
		int x,y;


		void fun()  //concrete non virtual
		{
			cout<<"base fun\n";
		}

		virtual void gun() //concreate virtual
		{
			cout<<"base gun\n";

		}
		virtual void sun()  //concrete virtual 
		{
			cout<<"base sun\n";

		}

		virtual void run() = 0;

};


class derived : public base
{
	
	public:
		int i,j;

		
		void fun()  //redefination (concreate) function
		{
			cout<<"derived fun\n";

		}
		virtual void gun()   //overiding
		{
			cout<<"derived gun\n";

		}
		
		void run()   //concrete function
		{
			cout<<"derived run\n";

		}

};

int main()
{
	//base bobj;  // not allowed
	derived dobj;

	base *bp = NULL;
	bp = &dobj;  //upcasting

	cout<<sizeof(base)<<"\n";
	cout<<sizeof(derived)<<"\n";



	bp->fun();  //base fun
	bp->gun();  //derived gun
	bp->sun(); //base sun
	bp->run();  //derived run 





	return 0;
}