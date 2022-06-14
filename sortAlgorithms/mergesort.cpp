/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void combile(int a[], int s, int m, int e)
{
    int * buffer = new int [e+1];
    
    int k = s;
    while(k <= e)
    {
        buffer[k] = a[k];
        k = k+1;
    }
    int i = s;
    int j = m+1;
    k = s;
    
    while(i <= m && j <= e)
    {
        if(buffer[i] < buffer[j])
        {
            a[k] = buffer[i];
            i++;
        }
        else
        {
            a[k] = buffer[j];
            j++;
        }
        k++;
    }
    while(i <= m)
    {
        a[k] = buffer[i];
        i++;
        k++;
    }
    
    while(j <= e)
    {
        a[k] = buffer[j];
        j++;
        k++;
        
    }
    delete[] buffer;
}

void merge(int a[], int s, int m, int e)
{
    int *buffer = new int[e+1];
    int k = s;
    while(k <= e)
    {
        buffer[k] = a[k];
        k++;
    }
    
    int i = s,
    j = m + 1;
    k = s;
    while(i <= m && j <= e)
    {
        if(buffer[i] < buffer[j])
        {
            a[k] = buffer[i];
            i++;
        }
        else
        {
            a[k] = buffer[j];
            j++;
        }
        k++;
    }
    
    while(i <= m)
    {
        a[k] = buffer[i];
        i++;
        k++;
    }
    while(j <= e)
    {
        a[k] = buffer[j];
        j++;
        k++;
    }
    
}

//auxiliary function
void mrgSort(int a[], int s, int e)
{
    if(s >= e)
    {
        return;
    }
    int m = (s + e)/2;
    mrgSort(a, s, m);
    mrgSort(a, m+1, e);
    merge(a, s, m, e);
}

void mrgSort1(int a[], int n)
{
    mrgSort(a, 0, n-1);
}

void display(int a[], int n)
{
    int i = 0;
    while(i < n)
    {
        cout<<a[i]<<", ";
        i++;
    }
    cout<<endl;
}

int main()
{
    int arr[] = {45, 45, 78, 12, 34, 42, 1, 5, 4, 2};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    if(size > 1)
    {
        mrgSort(arr, 0, size-1);
  
    }
    display(arr, size);
    

    return 0;
}