#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[10]={6, 4, 9, 3, 5, 6, 7, 2, 1, 8}, sum=0, i;
    for(i=0; i<10; i++)
        sum+=a[i];
    cout<<"The sum of 10 numbers is " <<sum <<".\n";
    return 0;
}
