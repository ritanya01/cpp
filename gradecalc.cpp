using namespace std;
#include <iostream>
int main() {
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if (marks>=90)
        cout<<"Grade:A"<<"\n";
    else if (marks >= 80)
        cout<<"Grade:B"<<"\n";
    else if (marks >= 70)
        cout<<"Grade: C"<<"\n";
    else
        cout<<"Grade:D"<<"\n";
    return 0;
}
