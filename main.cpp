#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    
    int x=56,y=98;
    cout<<"gcd of x and y is "<<gcd(x,y)<<endl;
    cout<<"gcd of x and y is "<<recursive_gcd(x,y)<<endl;

    return 0;
}
