#include<iostream>
using namespace std;
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
bool isPalindrome(long long n){
	long long newn=0;
	long long temp = n;
	while(n){
		newn = newn*10 + n%10;
		n = n/10;
	}
	return temp==newn;
}
long long max(long long n, long long m){
	return n>=m?n:m;
}
int main()
{
   long first,second,maxi=0;
   first = 999;
   while(first>=100){
   	 second = 999;
   	 while(second >=100){
   	 	    long long val = first * second;
   	 	  if(isPalindrome(val)){
   	 	  	     maxi = max(val, maxi);
			  }
			  --second;
		}
		--first;
   }
 cout<<maxi<<endl;// 906609
return 0;
}

