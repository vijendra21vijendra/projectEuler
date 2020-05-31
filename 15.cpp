#include<bits/stdc++.h>
using namespace std;
long long fac(long long n){
	if(n==1||n==0) return 1;
	return n*fac(n-1);
}
//Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
//
//
//How many such routes are there through a 20×20 grid?
long long mul(long long start, long long step, long long count){
	long long ans = 1;
	for(long long i=0;i<count;++i){
		ans = ans * (start + i*step);
	}
	return ans;
}
int main()
{
	// so i have 20,20 different-different  things 20|> and 20 -> and i have to arrange them  is answer of this pow(2,20) / (fac(20))
	long long p = mul(21,2,10);
	p *= (pow(2,5));
	p = p/(fac(5));
	 p = p/(mul(1,2,5));
	 cout<<p<<endl;// 137846528820
return 0;
}

