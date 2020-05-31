#include<bits/stdc++.h>
using namespace std;
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?
bool isPrime(long long n){
	if(n==1) return false;
	if(n==2||n==3||n==5||n==7||n==11||n==13) return true;
	if(n%2==0 || n%3==0 || n%5==0 || n%7==0||n%11==0||n%13==0) return false;
	int i=15;
	while(i*i<=n){
		if(n%i==0) return false; 
		++i;
	}
	return true;
}
int main()
{
  const int n = 10001; // prime
  int cnt=0;
  long long i=2;
  while(cnt < n){
  	 if(isPrime(i)){
  	 	++cnt;
	   }
	   ++i;
  }
  cout<<i-1<<endl;// 104743
return 0;
}

