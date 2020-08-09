#include <iostream>
using namespace std;

int main()
{   
    cout << "Programme to print sum of 1 to n integers" <<endl;
    cout << "Enter a integer n: ";

    int n, sum = 0;
    cin >> n;

    if (n <= 0){
        cout << "Please enter the positive number" <<endl;
    }
    else{
        for (int i = 1; i <= n; ++i){
            sum += i;
        }
        cout << "Sum of 1 to "<< n << " is " << sum <<endl;
    }

    return 0;
}