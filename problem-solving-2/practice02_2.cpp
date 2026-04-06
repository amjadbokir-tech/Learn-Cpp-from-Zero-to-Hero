#include <iostream>
#include <cmath>
using namespace std;


bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    bool ist_prime = false;

    for (int i = 2; i * i <= num ; i++) {
        
        int prime = num % i;
        if (prime == 0) {
            ist_prime = true;
            break;
        }
    }

    if (ist_prime) {
         return false;
    } 
    else {
        return true;
    }
     
}

void printNum (int num) {
    for (int i = 1; i <= num; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
        else {
            cout << "\n";

        }
    }
}

int main() {
    int number;
    cout << "\tWellcome to print from 1 to number prime program." << endl;
    cout << "Enter a number:";
    cin >> number;

    printNum(number);

    return 0;
}