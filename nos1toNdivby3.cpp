using namespace std;
#include<iostream>
int main(){
    int N,count,i;
    cout<<"Enter a number:";
    cin>>N;
    count=0;
    for(i=1;i<=N;i++){
        if (i%3==0)
           count=count+1;
    }
    cout<<"The total count is"<<count;
    return 0;

}