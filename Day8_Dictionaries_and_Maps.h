#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // declairs the map phonebook witch contains two strings name and phone number
    map<string,string> phonebook;
    int n;
    cin >> n;
    for(int i = 0; i<n;i++)
    {
        string name, number;
        // reads int the name and number
        cin >> name;
        cin >> number;
        //sets the name in the phonebook equal to the number
        phonebook[name] = number;
    }
    /* sets iterator:::::iterator:pointing to some element in a range of elements (such as an     array or a container), has the ability to iterate through the elements of that range         using a set of operators (with at least the increment (++) and dereference (*)               operators).*/
    std::map<string,string>::iterator it;
    string query;
    while( cin >> query )
    {
        // .find searches container for string variable query
        it = phonebook.find(query);
        //Returns an iterator referring to the past-the-end element in the map container.
        if(it != phonebook.end())
        {
            // first & seceon refers to map<first,second>
            cout << it->first << "=" << it->second << '\n';
        }
        else
        {
            cout << "Not found" << '\n';
        }
    }

    return 0;
}
