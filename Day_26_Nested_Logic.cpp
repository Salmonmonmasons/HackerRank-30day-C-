#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dd,mm,yy,d,m,y,fine;
    cin>>dd>>mm>>yy;
    cin>>d>>m>>y;
    if(y==yy)
        {
         if(mm-m>0)
             fine=500*(mm-m);
         else if(mm-m<0)
             fine=0;
         else
             fine= 15*(dd-d);
        }
    else if(yy-y>0) fine=10000;
    else fine=0;
    cout<<fine;
    return 0;

}
