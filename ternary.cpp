using namespace std;
#include<iostream>
int main(){
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    (a>b)?((a>c)?cout<<a:cout<<c):((b>c)?cout<<b:cout<<c);
    return 0;

}