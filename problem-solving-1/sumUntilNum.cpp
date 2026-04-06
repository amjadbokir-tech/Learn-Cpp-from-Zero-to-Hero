#include <iostream>
using namespace std;

void no_num () {
    int sum , num , number;
    sum = 0;
    cout << "Enter the no number:";
    cin >> number;
    while (true) {
        cout << "Enter the number:";
        cin >> num;
        
        if (num == number) {
            
            break;
        }
        sum += num;
        cout << sum << endl;
    }

    
}

int main() {
    no_num();
    return 0;
}