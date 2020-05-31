#include<bits/stdc++.h>
using namespace std;

int divisors(long long n){
	int divs = 0;
	long long val=1;
	while(val*val < n){
		if(n%val==0){
			divs +=2;
		}
		++val;
	}
	if(val * val == n){
		++divs;
	}
	return divs;
}

int main()
{
  long long n=1;
  long long i=1;
//  cout<<divisors(76576500)<<endl;
 // return 0;
  while(divisors(n)<=500){
  	++i;
  	n = (i*(i+1))/2;
  }
  cout<<n<<endl;// 76576500
return 0;
}

