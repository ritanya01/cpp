using namespace std;
#include <iostream>

int main() {
    string name;
    int    age;
    float height;
    float salary;

    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your age:"; 
    cin >> age;
    cout << "Enter your height:"; 
    cin >> height;
    cout << "Enter your salary:"; 
    cin >> salary;

    cout << "Name:   " << name   << "\n";
    cout << "Age:    " << age    << "\n";
    cout << "Height: " << height << "\n";
    cout << "Salary: " << salary << "\n";
    return 0;
}
