
#include <iostream>
#include <string> 
using namespace std;
 
 

int main () { 
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    int sum = 0;
    int count;
    for (count = 1; count <= num;count = count + 2 ) {
        sum += count;
        
        
    }
    cout << sum << endl;
    return 0;
}