#include <iostream>
using namespace std;

// Function to calculate the greatest common factor (GCF) or greatest common divisor (GCD)
int gcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // a % b gives the remainder when a is divided by b
        a = temp;
    }
    return a;  // When b becomes 0, a contains the GCF
}
