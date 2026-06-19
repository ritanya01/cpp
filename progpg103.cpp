using namespace std;
#include<iostream>
int main(){
    int sal,bonus,amt;
    char ch;
    cout<<"Enter the gender of the employee:";
    cin>>ch;
    cout<<"Enter the salary of the employee:";
    cin>>sal;
    if (ch=='m')
       bonus=0.05*sal;
    else
       bonus=0.10*sal;
    if (sal<10000)
       bonus=bonus+0.2*sal;
    amt=sal+bonus;
    cout<<"Salary="<<sal<<"\n";
    cout<<"Bonus="<<bonus<<"\n";
    cout<<"Amount to be paid"<<amt<<"\n";
    return 0;
}
