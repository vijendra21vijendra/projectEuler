#include<bits/stdc++.h>
using namespace std;
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
map<int,int> doIt(int n){
	int i=2;
	map<int,int> ans;
	while(n>1){
		if(n%i==0){
			++ans[i];
			n = n/i;
		}else{
			++i;
		}
	}
	return ans;
}

int main()
{
 
 // 2 , 3, 5, 7, 11 , 13, 17, 19
 int arr[20]={0};

 for(int i=1;i<=20;++i){
 	map<int,int> peacock = doIt(i);
 	for(auto p: peacock){
 		arr[p.first -1] = max(arr[p.first-1], p.second);
	 }
 }
 long long val=1;
 
 for(int i=0;i<20;++i){
 	val *= pow(i+1, arr[i]);
 }
 cout<<val<<endl;//232792560
return 0;
}

