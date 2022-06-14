/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main ()
{
    int n,
    arr[MAX];
    
    cout<<"ENter a number N: "<<endl;
    cin>>n;
    
    //inputting values in an array
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    
    //outputting the unsorted array
    cout<<"unsorted array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    //sorting an array
    for(int i = 0; i < n; i++)
    {
        //ascending order
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[i])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    //display the sorted array
    cout<<"sorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}


