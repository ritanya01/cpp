using namespace std;
#include <iostream>
int main() {
    float celsius;
    cout<<"Enter temp in celsius: ";
    cin>>celsius;
    float fahrenheit=(celsius*9.0/5.0)+32;
    cout<<celsius<<"C is "<<fahrenheit<<"F"<<"\n";
    return 0;
}
