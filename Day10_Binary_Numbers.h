#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
/*

cin >> integer and then returns the maximum number of 1's (in arrow) of the intigers binary equivalant.

Sample Case 1: 
The binary representation of  is , so the maximum number of consecutive 's is .
Sample Case 2: 
The binary representation of  is , so the maximum number of consecutive 's is .
*/
using namespace std;


int main(){
  int n,rem;
  cin >> n;
  int s = 0;
  int t = 0;
  while(n>0)
  {
    rem = n%2;
    n = n/2;
    if(rem == 1)
    {
      s++;
      if(s>t)
      {
        t=s;
      }
    }
    else
    {
      s = 0;
    }    
  }
    cout << t <<" ";
    return 0;
}