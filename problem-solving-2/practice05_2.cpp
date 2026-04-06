#include <iostream>
#include <string>
using namespace std;

string IntTOstr(int long long num) {
    string number;
    number = to_string(num);
    return number;
}

int Calc_length(string num) {
    int count = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void print_num(string num) {
    for (int i = 0; i < Calc_length(num); i++) {
        cout << num[i] << " " << endl;
    }
}

int main() {
    int long long number;
    cout << "Enter a Number: ";
    cin >> number; 
    print_num(IntTOstr(number));

    return 0;
}