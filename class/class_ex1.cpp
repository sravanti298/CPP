/*
 *Simple Example for class creation and accessing its elements
 */

#include<iostream>

using namespace std;


/* Creating a class */
class person {
	public:                    //Access specifier
		string name;
		int number;
};


int main()
{
	person 	obj;//creating object

	cout << "enter the name:\n";
	cin >> obj.name;

	cout << "enter the number:\n";
	cin >> obj.number;

	//Display the output
         
    cout << "displaying the class members:\n";
	cout << obj.name << endl;
	
    cout << obj.number;
    cout << "\n";
	return 0;
}
