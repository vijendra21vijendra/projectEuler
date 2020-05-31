#include<bits/stdc++.h>

using namespace std;
//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.

int main()
{
  long long val,i,a,b,c;
  for(a=1;a<=500;++a){
  	for(b=a;b<=500;++b){
  		c = 1000 - a - b;
  		if(c*c == a*a + b*b){
  			val = a*b*c;
  			cout<<val<<endl;// 31875000
  			return 0;
		  }
	  }
  }
 cout<<val<<endl;
return 0;
}

