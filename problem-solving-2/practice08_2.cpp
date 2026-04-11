#include <iostream>
#include <string>
using namespace std;

 

void RepetedNum(int num , int target) {
    int reminder = 0;
    int count = 0;
    while (num > 0)
    {
        reminder = num % 10;
        if (target == reminder) {
            count++;
        }
        num = num / 10;
  

        
        
    }
    cout << "The num is = " << target << endl;
    cout << "The target number reprted " << count << " Times." << endl;
   
}



int main() {
    int num , target;
    cout << "Enter a Postivie Number: ";
    cin >> num;
    cout << "Enter the target number: ";
    cin >> target;
    RepetedNum(num , target);
    return 0;
}