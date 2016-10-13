#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic
{
    public:
        virtual int divisorSum(int n)=0;
};
//Write your code here
class Calculator :public AdvancedArithmetic
{

        int divisorSum(int n)
        {
            int awn = 1;
            for(int i = 2;i<=n;i++)
            {
                if(n % i==0)
                {
                    awn = awn+i;
                }
            }
            return awn;
        };
};
int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
