#include <iostream>
#include <string>
using namespace std;

int read_positive_num(string massage) {
    int num = 0;
    do {
    
        cout << massage;
        cin >> num;
    } while (num <= 0);
    return num;
}

void DigitNum(int num) {
    int reminder = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        cout << reminder << endl;
    }
    
}

int main() {

    DigitNum(read_positive_num("Enter a NUmber: "));
    return 0;
}