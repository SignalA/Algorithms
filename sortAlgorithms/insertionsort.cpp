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

void insertion(int a[], int p)
{
    int i = p-1;
    while(i >= 0)
    {
        if(a[i] > a[p])
        {
            swap(a, i, p);
            p = i;
        }
        else break;
        i--;
    }
}

void insertIth(int a[], int p)
{
    int key = a[p];
    int j = p-1;
    while(j >= 0 && a[j] > key)
    {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = key;
}

void insSort(int a[], int n)
{
    if(n > 1)
    {
        int i = 1;
        while(i < n)
        {
            insertIth(a, i);
            i++;
        } 
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
    int a[] = {23,45,1,2,3,1,1,2};
    int size = sizeof(a)/sizeof(int);
    
    display(a, size);
    insSort(a, size);
    display(a, size);

    return 0;
}