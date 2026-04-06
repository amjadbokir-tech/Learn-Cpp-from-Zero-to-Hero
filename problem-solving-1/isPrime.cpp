#include <iostream>
using namespace std;
 
void is_prime(int num) {
    if (num <= 1) {
        cout << "not a prime number." << endl;
    }
    bool ist_prime = false;

    for (int i = 2; i < num; i++) {
        
        int prime = num % i;
        if (prime == 0) {
            ist_prime = true;
            break;
        }
    }

    if (ist_prime) {
        cout << "This is not a prime Number." << endl;
    } 
    else {
        cout << "This is A prime Number." << endl;
    }
     
}

int main() {
    int num;
    cout << "Enter a number:";
    cin >> num;

    is_prime(num);
    return 0;
}