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




bool CheckPerfectNum (int num) {
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



void printPerfectNumfrom1toZ(int num) {
    for (int i = 6; i < num / 2; i++) {
        if (CheckPerfectNum(i)) {
            cout << "perfect Number = " << "(" << i << ")" << endl;
        }
    }
}


int main() {
    int number;
    cout << "Wellcome to print perfect number from 1 to Z..." << endl;
    cout << "Enter a Number:";
    cin >> number;

    printPerfectNumfrom1toZ(number);
 
    return 0;
}