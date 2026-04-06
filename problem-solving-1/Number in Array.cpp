#include <iostream>
#include <string>
using namespace std;

void read_arr (float arr[9] , int &length) {
    cout << "Enter How num:" << endl;
    cin >> length;
    for (int i = 0; i < length; i++) {
        cout << i + 1 <<" "<< "Enter A Number:" << endl;
        cin >> arr[i];
    }
}


float sum_arr (float arr[9] , int length) {
    float sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    float arr[9];
    int length;
    read_arr(arr , length);
    cout << sum_arr(arr , length) << endl;
    return 0;
}