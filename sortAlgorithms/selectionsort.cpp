/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//swap two elements
void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

//locate the smallest element
int locOfSmallest(int a[], int s, int e)
{
    int i = s,
    j = i;
    while(i <= e)
    {
        if(a[i] < a[j])
        {
            j = i;
        }
        i++;
    }
    return j;
}

//selectionSort
void selSort(int a[], int n)
{
    int i = 0;
    while(i < n - 1)
    {
        int j = locOfSmallest(a, i, n-1);
        swap(a, i, j);
        i++;
    }
}

//display the array
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
    int arr[] = {34, 678, 46, 797, 12, 23, 1, 4, 10, 6};
    int size = sizeof(arr)/sizeof(int);
    
    display(arr, size);
    selSort(arr, size);
    display(arr, size);

    return 0;
}