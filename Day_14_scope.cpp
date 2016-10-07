/*
The absolute difference between two integers, a and b, is written as |a-b|.
The maximum absolute difference between two integers in a set of
positive integers,elements , is the largest absolute difference between any
two integers in .

The Difference class is started for you in the editor. It has a private
integer array (elements) for storing N non-negative integers, and a public
integer (maximumDifference) for storing the maximum absolute difference.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
    // Add your code here
    Difference(vector<int>& a)
    { //Construct expects "&" to pass as ref
       elements = a;     //Make elements vector = reference
    }
    void computeDifference()
    {  //void because not returning anything
       sort(elements.begin(), elements.end()); // sort from small->large
       maximumDifference = (elements.back() - elements.front()); //last-1st
    }

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
