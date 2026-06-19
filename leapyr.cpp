using namespace std;
#include <iostream>
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year%4==0&&year%100!=0)||(year%400 == 0))
        cout<<year<<"is a Leap Year"<<"\n";
    else
        cout<<year<<"is not a Leap Year"<<"\n";
    return 0;
}
