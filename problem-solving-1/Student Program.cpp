#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    unsigned short int age;
    float grade;
};

void read_array (Student student[100] , int &length) {
    cout << "Enter the number of Students: " << endl;
    cin >> length;
    for (int i = 0; i < length; i++) {
        cout << "\n======================================\n";
        cout << i + 1 << " - " << "Enter the name:" << endl;
        cin >> student[i].name;
        cout <<  i + 1 << " - " <<"Enter age:" << endl;
        cin >> student[i].age;
        cout <<  i + 1 << " - " <<"Enter grade:" << endl;
        cin >> student[i].grade;
        cout << "\n======================================\n";

    }
}


void print_array (Student student[100] , int length) {
    for (int i = 0; i < length; i++) {
        cout << "\n======================================\n";
        cout << "Your name is: " << " " << student[i].name << endl;
        cout << "Your age is: " << " " << student[i].age << endl;
        cout << "Your grade is: " << " " << student[i].grade << endl;
        cout << "\n======================================\n";
    }
}

void Compire (Student student[100] , int length) {
        for (int i = 0; i < length; i++) {
        if (student[i].grade <= 50) {
            cout << student[i].name <<" "<< "Fail!" << endl;
            cout << endl;

        }
        else{
            cout <<student[i].name <<" " "Success." << endl;
        }
        
    }
}

void Compire_age (Student student[100] , int length) {
        for (int i = 0; i < length; i++) {
        if (student[i].age >= 30) {
            cout << student[i].name <<" "<< "you too old" << endl;
            cout << endl;

        }
        else{
            cout <<student[i].name <<" "<< "you are student." << endl;
        }
        
    }
}



int main() {
    Student student[100] ;
    int length;
    read_array( student, length);
    print_array(student , length);
    Compire(student , length);
    Compire_age(student , length);
    return 0;
}




