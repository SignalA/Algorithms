/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void bubble(int a[], int p, int n)
{
    int i = n-1;
    while(i > p)
    {
        if(a[i] < a[i-1])
        {
            swap(a, i, i-1);
        }
        i--;
    }
}

void bblSort(int a[], int n)
{
    int i = 0;
    while(i < n - 1)
    {
        bubble(a, i, n);
        i++;
    }
}

void bblSort1(int a[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        for (int j = n-1; j > i; j--)
        {
            if (a[j] < a[j-1])
            {
                swap(a, j, j-1);
            }
        }
        i++;
    }
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
    int a[] = {56,34,45,23,12,7,6,9,4,155};
    int size = sizeof(a)/sizeof(int);
    
    display(a, size);
    bblSort1(a, size);
    display(a, size);

    return 0;
}