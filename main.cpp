#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int y; cin >> y;
    while(y < 0) {
        printf("You have entered a negative number, please enter a positive number\n");
	cin >> y;
    }
    cout << "Factorial of " << y << " is " << factorial(y) << "\n";
    return 0;
}
