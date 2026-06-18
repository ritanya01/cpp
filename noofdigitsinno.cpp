using namespace std;
#include<iostream>
int main(){
    int n,count;
    cout<<"Enter a number:";
    cin>>n;
    count=0;
    while(n!=0){
        n/=10;
        count=count+1;
    }
cout<<"The number of digits:"<<count;
return 0;
}