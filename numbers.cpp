/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: LAB 5A

I wrote a program  that defines a function. If n is divisible by d, the function should return true, otherwise return false.
*/


#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
if(d==0)return false;
if(n%d==0)
{
return true;
}
else
{
return false;
}
}

int main()
{

  int num,div;

cout<<"Enter the value of dividend"<<endl;
cin>>num;

cout<<"Enter the value of divisor"<<endl;
cin>>div;

bool ans = isDivisibleBy(num,div);

if(ans)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
return 0;
}
