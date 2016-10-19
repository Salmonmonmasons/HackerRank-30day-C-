#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool prime = n >= 2;
        for (int d = 2; prime && d*d <= n; prime = n%d++);
        cout << (prime ? "Prime" : "Not prime") << "\n";
    }
    return 0;
}
