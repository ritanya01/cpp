using namespace std;
#include<iostream>
int main(){
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    num1=num2;
    num2=num1;
    cout<<"The first no is:"<<num1<<"The second no is:"<<num2;
    return 0;
}
