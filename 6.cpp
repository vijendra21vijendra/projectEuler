#include<iostream>
using namespace std;
/*
The sum of the squares of the first ten natural numbers is,

12+22+...+102=385
The square of the sum of the first ten natural numbers is,

(1+2+...+10)2=552=3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025-385=2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
int main()
{
 long long n=100;
 long long diff;
 long long temp1,temp2;
 temp1 = ((n)*(n+1))/2;
 diff = temp1*temp1 - (temp1*(2*n+1))/3;
 cout<<diff<<endl;// 25164150


return 0;
}

