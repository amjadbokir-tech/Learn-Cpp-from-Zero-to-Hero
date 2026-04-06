#include <iostream>
#include <cmath>
using namespace std;


int DeterminingDivisibleNum(int num) {
    int sum = 1;
    int sqrt_num = sqrt(num);
    for (int i = 2; i <= sqrt_num; i++) {
        if (num % i == 0) {
            sum += i;
            
            int Divisible = num / i;
            if (Divisible != i) {

                sum += Divisible;
            }
        }
        
        
    }
    return sum;
}



bool CheakPerfectNum (int num) {
    if (num <= 1) {
        return false;
    }
    else if (DeterminingDivisibleNum(num) == num) {
        return true;
    }
    else{
        return false;
    }
}




int main() {
    int number;
    cout << "Wellcom to Cheak if Perfect Num..." << endl;
    cout << "Enter a Number:";
    cin >> number;

    if (CheakPerfectNum(number)) {
        cout << "This is A Perfect Number." << endl;
    }
    else {
        cout << "This is not A Perfect Number." << endl;
    }
    return 0;
}