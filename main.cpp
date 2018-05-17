#include <iostream>
#include<bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[100];
int k=8;
int counter=0;

void print_array();
void quick_sort(int low, int high);
int sort_array(int low, int high);

int main()
{

    //read data
    for (int i=1;i<=k;i++)
    {
        f>>A[i];
    }

    //write data
    for(int i=1;i<=k;i++)
    {
        g<<A[i];
    }

    print_array();
    quick_sort(1,k);
    print_array();
    return 0;
}

void print_array()
{
    for (int i=1; i<=k;i++)
    {
        cout<<A[i]<<" ";
    }
    printf("\n");
}

void quick_sort(int low, int high)
{
    int mid= sort_array(low,high);
    if(low<high)
    {
        quick_sort(low,mid-1);
        quick_sort(mid+1,high);
    }

}

int sort_array(int low, int high)
{
    int b[100];
    int l=low;
    int h=0;
    for(int i=low;i<high;i++)
    {
        if (A[i]<=A[high])
        {
            b[l]=A[i];
            l++;
        }
        else
        {
            b[high-h]=A[i];
            h++;
        }
    }
    b[l]=A[high];

    // in ra array A
    for (int i=low;i<=high;i++)
    {
        A[i]=b[i];
    }
    return l;
}
