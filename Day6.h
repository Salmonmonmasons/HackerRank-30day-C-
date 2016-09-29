#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/* Array Display: takes in a string  displays all the even char of string spaces then displays the odd chars*/ 
int ard(string S,int N, int n)
{
  
  for(int i = 0; i < N;i++)
  {
    cout << S[i];
    i++;
  }
  cout << " ";
  for(int i = 1; i < N;i++)
  {
    cout << S[i];
    i++;
  }
  cout << endl;
  return 0;
}
int main() 
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  int N,n;
  int i = 0;
  char L;
  string S;
  cin >> n;
  while(i!=n)
  {
    cin >> S;
    N = S.length();
    ard(S,N,n);
    i++;
  }
  return 0;
}
