#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class BubbleSwap {
    public:
        void swapper(int n, vector<int> a) {
            int numOfSwaps = 0;
            for (int x = 0;x < n;x++) {

                for(int y = 0;y < n - 1;y++) {
                    if(a[y] > a[y+1]) {
                        swap(a[y], a[y+1]);
                        numOfSwaps++;
                    }
                }
                if(numOfSwaps == 0) {
                    break;
                }
            }
            cout << "Array is sorted in " << numOfSwaps << " swaps." << endl << "First Element: " << a[0] << endl << "Last Element: " << a[n - 1] << endl;
        }
};

int main(){
    int n, swaps;
    BubbleSwap bs;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    bs.swapper(n, a);
    return 0;
}
