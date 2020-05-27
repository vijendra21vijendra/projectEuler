#include<iostream>
using namespace std;
/*

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
int main()
{
  long long sum=0, n;
  n = 1000;
  for(int i=1;i<n;++i){
  	if(i%3==0 || i%5==0) sum+= i;
  }
  cout<<sum<<endl;
  sum =0;
  int k,l,m;
  k = (n-1)/3;
  l = (n-1)/5;
  m = (n-1)/15;
  sum = (k*(k+1)/2)*3 + ((l*(l+1))/2)*5 - ((m*(m+1))/2)*15;
  cout<<sum<<endl; // 233168

return 0;
}

