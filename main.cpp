#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int x; cin >> x;
    while(x < 0) {
        printf("You have entered a negative number, please enter a positive number\n");
	cin >> x;
    }
    cout << "Factorial of " << x << " is " << factorial(x) << "\n";
    return 0;
}
