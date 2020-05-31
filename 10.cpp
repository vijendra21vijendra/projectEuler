#include<bits/stdc++.h>
using namespace std;

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
	long long val=0;
	const long long n = 2e6;
	for(long long i=2;i<n;++i){
		if(isPrime(i)){
			val += i;
		}
	}
cout<<val<<endl;//142913828922

return 0;
}

