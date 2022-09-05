#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    printf("\n");
    int x; cin >> x;
    printf("The factorial of 5 is %d", factorial(x));
    return 0;
}
