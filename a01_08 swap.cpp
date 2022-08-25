#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a= 9, b=7;
    a+=b;
    b=a-b;
    a-=b;
    cout<<"a= " <<a <<" b= " <<b <<".\n";
    return 0;
}
