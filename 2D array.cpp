/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a[3][3],i,j;
    cout<< "Enter elements";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           cin>>a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           cout<<a[i][j];
           cout<<" ";
        }   
    cout<<"\n";       
    
    }
    return 0;
}
