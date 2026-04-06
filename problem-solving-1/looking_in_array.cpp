#include <iostream>
using namespace std;

void read (int arr[9]) {
    for (int i = 0; i < 10; i++) {
        cout <<"["<< i + 1 <<"]"<< "Enter a ten number:" << endl;
        cin >> arr[i];
    }
    
}

void looking (int arr[9] , int num) {
    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            cout << "The num in index:" <<" ["<<i + 1 <<"] "<<num <<" "<< "=" <<" "<< arr[i] << endl;
        }
        else {
            cout <<"number not found at index"<<" ["<<i + 1<<"] "<< endl;
        }
    }
}

int main () {
    int arr[9];
    read(arr);
    int num;
    cout << "Enter a num:" << endl;
    cin >> num;
    looking(arr , num);
    return 0;
}