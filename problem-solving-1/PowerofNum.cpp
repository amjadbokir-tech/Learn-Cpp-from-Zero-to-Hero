#include <iostream> 
using namespace std;

int power(int num , int m) {
    int temp = num;
    for (int i = 1; i < m; i++) {
        temp *= num;
    }
    return temp;
}

int main() {
    int num , m;
    cout << "Enter a number:";
    cin >> num;
    cout << "Enter the power: ";
    cin >> m;

    cout << "num = " << num << "  " <<"power = " << m << "  " <<"result = " << power(num , m) << endl;
    

 


    return 0;
}