#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int Factorial(int N)
{
    if(N>1)
    {
        N = N*Factorial(N-1);
    }

    return N;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int C;
    cin >> N;
    C = Factorial(N);
    cout << C;
    return 0;
}
