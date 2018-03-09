#include <vector>
#include <iostream>

using namespace std;

int main () {
        vector<float> v;

        v.assign( 8, 16.3 );
        v[2] = 16.4; v[3] = 20.6;
        v.push_back(17.8);
        v.push_back(-7.3);

        for( int i = 0; i < v.size(); i++ ) {
                cout << v[i] << " ";
                }
        cout << endl;
        cout << v.front() << " "  << v.at(2) << " "  << v.back() << endl;

        vector<float>::iterator iter;
        for( iter = v.begin(); iter != v.end(); iter++ ) {
                cout << *iter << endl;
        }
}