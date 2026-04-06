#include <iostream>
#include <string>
using namespace std;

void read_result (float  arr[4]) {
    for (int i = 0; i < 5; i++) {
        cout <<"["<<i + 1<<"]"<<" "<< "Enter the result:" << endl;
        cin  >> arr[i];
    }
}

void Compir(float arr[4] , char star) {
    
    for (int i = 0; i < 5; i++) {
        int stars = arr[i] / 10;
        string result(stars , star);
        cout << arr[i] <<":"<< result << endl;
    }
}
int main () {
    char star = '*';
    float arr[4];
    read_result(arr);
    Compir(arr , star);
    return 0;
}