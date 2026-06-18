using namespace std;
#include<iostream>
int main(){
    int N,i,sum;
    cout<<"Enter a number";
    cin>>N;
    sum=0;
    for(i=2;i<=N;i+=2){
        sum+=i;
    }
    cout<<"The sum of even numbers is:"<<sum;
    return 0;

}