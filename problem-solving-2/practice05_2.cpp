#include <iostream>
#include <string>
using namespace std;

 

int Calc_length(int num) {
    string number = to_string(num);
    int count = 0;
    for (int i = 0; number[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void print_num(int num) {
    string number = to_string(num);
    for (int i = 0; i < Calc_length(num); i++) {
        cout << number[i] << endl;
    }
}

int main() {
    int long long number;
    cout << "Enter a Number: ";
    cin >> number; 
    print_num(number);

    return 0;
}