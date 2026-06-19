using namespace std;
#include <iostream>
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b)
        cout<<"Largest:"<<a<<"\n";
    else if (b > a)
        cout<<"Largest:"<<b<<"\n";
    else
        cout <<"Equal"<<"\n";
    return 0;
}
