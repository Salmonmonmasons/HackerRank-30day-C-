#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int t, n, k, time;
    vector<int> Time;
    vector<int>::iterator it;
    vector<int> N;
    bool x = false;
    t = rand() % 5 + 1;
    cout<<t<<endl;
    while(t--){
        do{
            do{
                n = rand() % 200 + 1;
            }while(n < 3);
            if(!N.empty()){
                for(it = N.begin(); it != N.end(); ++it){
                    if(n == *it){
                        x = true;
                        break;
                    }
                }
                if(it == N.end()) x = false;
            }
        }while(x);

        N.push_back(n);
        cout<<n<<" ";

        k = rand() % n + 1;
        cout<<k<<endl;

        Time.push_back(0);
        Time.push_back(1);
        Time.push_back(-1);
        n -= 3;
        while(n--){
            time = rand() % 2001 - 1000;
            Time.push_back(time);
        }
        for(vector<int>::iterator p = Time.begin(); p != Time.end(); ++p){
            cout<<*p<<" ";
        }
        cout<<endl;
        Time.clear();
    }
}
