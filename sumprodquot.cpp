using namespace std;
#include <iostream>
int main() {
    int a, b;
    cout<<"Enter two integers: ";
    cin >>a>>b;

    cout<<"\nSum:" << a+b<< "\n";
    cout<<"Difference:" << a-b<< "\n";
    cout<<"Product:" << a*b<< "\n";

    if (b != 0)
        cout<<"Quotient:" << (float)a / b << "\n";
    else
        cout<<"Quotient:Not available";
    return 0;
}
