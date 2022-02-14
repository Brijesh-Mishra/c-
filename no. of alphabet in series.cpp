/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int c = 0;
    
    cout<<"Enter series of characters";
    do 
    {
        cin>>ch;
        if(ch>=97 && ch<=122)
            c++;
    }while(ch!='g');
    
    cout<<"no. of alphabet in series"<<c;
    return 0;
}
