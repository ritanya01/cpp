using namespace std;
#include <iostream>
int main() {
    int n;
    cout<<"Enter a no:";
    cin>>n;
    if(n > 0)
        cout<<"positive"<<"\n";
    else if (n < 0)
        cout<<"negative"<< "\n";
    else
        cout<<"zero"<<"\n";
    return 0;
}
