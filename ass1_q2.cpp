#include <iostream>
using namespace std;

int main()
{   
    cout << "Program to find factorial of integer n" <<endl;
    cout << "Enter a integer n: ";

    int n, f = 1;
    cin >> n;

    if (n < 0){
        cout << "Please enter the non negative integer number" <<endl;
    }
    else{
        for (int i = 1; i <= n; ++i){
            f = f*i;
        }
        cout << "Factorial of "<< n << " is " << f <<endl;
    }

    return 0;
}