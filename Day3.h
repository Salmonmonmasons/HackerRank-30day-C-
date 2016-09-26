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
using namespace std;


int main(){
  int N;
  string ans;
  cin >> N;
  if(N%2 == 0)
  {
    if( 2<=N  && N<=5 )
    {
      ans = "Not Weird";
    }
    if( 6<=N  && N<=20 )
    {
      ans = "Weird";
      
    }
    if(N>20)
    {
      ans = "Not Weird";
    }
  }
  if(N%2!=0)
  {
    ans = "Weird";
  }
  cout<< ans;
    return 0;
}