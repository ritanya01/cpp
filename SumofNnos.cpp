using namespace std;
#include<iostream>
int main(){
    
    int num,totalno,count,sum;

    cout<<"Enter a number:";
    cin>>totalno;
    count=1;
    sum=0;
    
    while(count<=totalno){
        cout<<"Enter the number:";
        cin>>num;
        sum=sum+num;
        count=count+1;
    }
    
    cout<<"The total sum is"<<sum;
    return 0;

    
}

   