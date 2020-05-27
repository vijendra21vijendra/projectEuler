#include<iostream>
using namespace std;

/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

int main()
{
  long long n =600851475143;
  //n=13195;
  long prev=1,fac=2;
  while(n>1)
  {
  	if(n%fac==0){
  		n = n/fac;
  		prev = fac;
	  }else{
	  	++fac;
	  }
	 // cout<<fac<<endl;
  }
  cout<<fac<<endl;// 6857
  
  return 0;
}

