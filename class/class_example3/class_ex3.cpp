/*
 * Simple Example for Inheritance
 */

#include<iostream>
using namespace std;

class animal{
	public:                  /*Access specifier*/
		void print(){
			cout << "This is base class=>ANIMAL" << endl;
            cout << "4legs" << endl;
        }
};


class dog:public animal {    /*Dog Acquiring the properties of Animal*/
	public:
		void print2() {
			cout << "This is derived class=>dog"<<endl;
            cout << "bow-bow"<<endl;
		}
};

class cat:public animal {    /*Cat Acquiring the properties of Animal*/
	public:
		void print1(){
			cout << "This is derived class=>cat" << endl;
            cout << "Meow-Meow" << endl;
		}
};

int main()
{
	/*Creating objects for the classes*/
	animal		obj;
	cat			obj1;
	dog 		obj2;

	/*Accessing the classes by using objects */
    
	obj1.print();	
	obj1.print1();
    
	obj2.print();
	obj2.print2();

	return 0;
}






