using namespace std;
#include<iostream>
int main(){
    int i,n,factorial;
    factorial=1; 
    cout<<"Enter a number";
    cin>>n;
    i=1;
    while(i<=n){
        factorial*=i;
        i=i+1;
    }
    cout<<"The factorial of the number is"<<factorial;
    return 0;
}