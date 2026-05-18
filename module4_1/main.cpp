/******************************************************************************
Write a C++ program that finds the minimum number of replacements required to make 
the given string of braces balanced. The program should use stack STL.  

Sample Output:
Enter a string of braces: {{{
Minimum number of replacements required: 3

Enter a string of braces: {}{{{{
Minimum number of replacements required: 4

*******************************************************************************/
#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string mystring;
    stack<char, vector<char>> iStack;

    cout << "Enter a string of braces: ";
    cin >> mystring;
    
    int openbracescounter = 0;
    int closebracescounter = 0;

    for (int x = 0; x < mystring.size(); x++)
    {
        cout << "Pushing " << mystring[x] << endl;
        
        char currentChar = mystring[x];
        if (currentChar = '{'){
            cout << "open brace" << endl;
            openbracescounter++;
        }
        else if (currentChar = '}'){
            cout << "close brace" << endl;
            closebracescounter++;
        }
        
        iStack.push(currentChar);
    }
    cout << "Open Braces: " << openbracescounter << endl;
    cout << "Close Braces: " << closebracescounter << endl;
    
    int replacements = openbracescounter - closebracescounter;
    cout << "Minimum of replacements required: " << replacements << endl;
    
}
