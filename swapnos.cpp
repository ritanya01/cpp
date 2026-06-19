using namespace std;
#include<iostream>
int main(){
    int num1,num2,temp;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"The first number is"<<num1<<"The second number is"<<num2;
    return 0;
}
