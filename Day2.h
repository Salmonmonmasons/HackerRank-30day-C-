#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float total , tax, tip;
    double mealcost;
    int tipprice;
    int taxpercent;

    cin >> mealcost;
    cin >> tipprice;
    cin >> taxpercent;
    
    tax = mealcost*taxpercent/100;
    tip = mealcost*tipprice/100;
    total = round(mealcost+tip+tax);
    

    cout << "The total meal cost is " << total << " dollars.";
    
 
    return 0;
}