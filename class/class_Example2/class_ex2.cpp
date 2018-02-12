/*
 * Example for Class Creation-Implementing Inheritance
 */

#include<iostream>
using namespace std;


class person {
	public:                        //Access Specifier     
    void print() {
		cout << "person can walk" << endl;
		cout << "person can talk" << endl;
    }
};


class employee:public person {      /* Employee acquires the properties of person-Inheritance */
	public:
		void display(){
			cout << "employee can work" << endl;
		}
};



int main()
{
	employee obj;                /*Creating a object to a class */
    obj.print();
	obj.display();
    
    return 0;
}


