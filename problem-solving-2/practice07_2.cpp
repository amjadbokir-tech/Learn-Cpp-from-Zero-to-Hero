#include <iostream>
#include <string>
using namespace std;

int read_positive_num(string massage) {
    int num = 1;
    do {
    
        cout << massage;
        cin >> num;
    } while (num <= 1);
    return num;
}

int DigitNum(int num) {
    int reminder = 0 , reversNum = 0;
    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        reversNum = reversNum * 10 + reminder;
    }
    return reversNum;
    
}

int main() {

    cout << DigitNum(read_positive_num("Enter a NUmber: "));
    return 0;
}