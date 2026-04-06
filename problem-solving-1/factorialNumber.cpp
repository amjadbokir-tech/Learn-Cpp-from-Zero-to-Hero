#include <iostream>
#include <string>
using namespace std;

int factoreal_num (long long int num) {
    for (int i = num - 1; i != 0; i--) {
        num *= i;
    }
    return num;
}
int main () {
    long long int num;
    cout << "Enter a number:" << endl;
    cin >> num;

    cout << factoreal_num(num) << endl;
    return 0;






}