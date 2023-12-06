// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string name = "Franklin";
    // ABC ....65 - 90
    // abc ....97 - 122
    
    // small to caps
    
    for( int i=0 ; i<name.length() ; i++ ) {
        if( name[i]>=97 && name[i]<=122 ) { //check whether small
            name[i] = name[i]-32; // converting to caps
        }
    }
    cout << "Caps Name : " << name << endl;
    
    for( int i=0 ; i<name.length() ; i++ ) {
        if( name[i]>=65 && name[i]<=90 ) { //check whether big
            name[i] = name[i]+32; // converting to small
        }
    }
    cout << "Small Name : " << name;

    return 0;
}
