#include<iostream>

using namespace std;

class printData
{
	public:
		void print(int i)         // function 1
		{
			cout<<"Printing int: "<<i<<"\n";
		}
		void print(double  f)     // function 2
		{
			cout<<"Printing float: "<<f<<"\n";
		}
		void print(char* c)
		{
			cout<<"Printing characters (string): "<<c<<"\n";
		}
};

int main()
{

	printData pdobj;

	pdobj.print(5);      	      // called print() to print integer
	pdobj.print(50.434);         // called print() to print float
	pdobj.print("C++ Function Overloading");     // called print() to print string

	return 0;
}
