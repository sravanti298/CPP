
/*
 *Database of students using classes -Simple example for Abstraction 
 */

#include<iostream>
using namespace std;

class Student_data{
	
	private:                          //Hiding the internal details and Implementing
		string		name;
		int 		roll_num;
		int			marks;
	public:                          
		void input();
		void display();
};

void Student_data::input() {
	cout << "enter the student name:";
	cin >> name;

	cout << "enter the roll number:";
	cin >> roll_num;

	cout << "enter the marks:";
	cin >> marks;

}

void Student_data::display() {
	cout << "NAME:" << name << endl;
	cout << "ROLL_NUM:" << roll_num << endl;
	cout << "MARKS:" << marks << endl;
}


int main()
{
    /*Creating object*/
	Student_data stu;
	stu.input();
	stu.display();
	return 0;  
}





