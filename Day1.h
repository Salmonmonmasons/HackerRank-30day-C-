#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    
    int I;
    double D;
    string S;
    // Read and save an integer, double, and String to your variables.
    cin >> I;
    cin >> D;
    cin.ignore();  //ignores an end of line character 
    getline(cin, S); 
    // Print the sum of both integer variables on a new line.
    cout << I+i <<endl;
    // Print the sum of the double variables on a new line.
    cout << setprecision(1)<< fixed;
    cout << D+d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << S;
    

	return 0;
}