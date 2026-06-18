#include <iostream>
using namespace std;

int main() {
    int num = 2;
    while (num <= 100) {
        int i = 2;
        while (i < num) {
            if (num % i == 0)
                break;
            i++;
        }
        if (i == num)
            cout << num << " "<<"\n";
        num++;
    }

    return 0;
}