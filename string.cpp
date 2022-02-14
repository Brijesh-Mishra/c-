/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string str;
    int i;
 
    cout << "Please enter your name: \n";
    getline(cin, str);
    for(i=0; i<str.length(); i++)
    {
        if (str[i]==' ')
        str[i]='_';
    }
    cout <<str;
         
    return 0;
}