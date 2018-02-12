/*
 *Simple Example for function overloading
 */
  
#include <iostream>

using namespace std;

/*Prototypes of functions*/
void display(int);
void display(float);
void display(int, float);

int main() {

    int		a;
    float   b;
    
	a = 5; 
	b = 5.5;

    display(a);
    display(b);
    display(a, b);

    return 0;
}

void display(int var) {
    cout << "Integer number: " << var << endl;
}

void display(float var) {
    cout << "Float number: " << var << endl;
}

void display(int var1, float var2) {
    cout << "Integer number: " << var1;
    cout << " and float number:" << var2;
}