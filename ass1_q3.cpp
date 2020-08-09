//Programme to find sum of 1 + 1/2 + 1/3 + ... till sum does not change by more than 0.001

#include <iostream>
using namespace std;

int main()
{   

    double i = 1, sum = 0;

    while ((1/i) > 0.001){
        sum += (1/i);
        i++;
    }

    cout << "sum of 1 + 1/2 + 1/3 + ... till sum does not change by more than 0.001 is found to be " << sum <<endl;

    return 0;
}