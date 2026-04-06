#include <iostream>
#include <string>
using namespace std;

void print_up_num() {
    for (int i = 1; i <= 10; i++) {
        cout <<"\t  "<< i <<"\t";
    }
    cout << "________________________________________________________________________________________________" << endl;
}

 
 
string colmuns(int i) {
    if (i < 10) {
        return "   |";
    }
    else {
        return "  |";
    }
}

void mult() {
    print_up_num();
    

    for (int i = 1; i <= 10; i++) {


        cout << " " << i << colmuns(i) << "\t";




        for (int j = 1; j <= 10; j++) {
            cout << "\t" << j * i <<"\t";
        }
        cout << endl;






    }
}


int main() {
    mult();
    return 0;
}