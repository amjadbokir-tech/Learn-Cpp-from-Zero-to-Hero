#include <iostream>
#include <string>
using namespace std;

 

 

void DigitNum(int num) {
    int reminder = 0;
    int sum = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        sum += reminder;
        cout << reminder << endl;
        
    }
    cout << "_____________________" << endl;
    cout << "Sum of Digit number = "<< sum << endl;
    
}



int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << "NUMBER IS LESS THEN 1." << endl;
    }
    else {
        DigitNum(num);
        cout << "_________________" << endl;
    }
    return 0;
}