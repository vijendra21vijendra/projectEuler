#include<bits/stdc++.h>
using namespace std;

int terms(long long n){
	int cnt=1;
	while(n!=1){
		if(n%2==0){
			n = n/2;
		}else{
			n = 3*n + 1;
		}
		++cnt;
	}
	return cnt;
}

int main()
{
  int maxi=0;
  int num=0;
  const int mil = 1e6;
  for(int i=1;i<=mil;++i){
  	 int temp = terms(i);
  	 if(temp > maxi){
  	 	maxi = temp;
  	 	num  = i;
	   }
  }
  cout<<num<<" "<<maxi<<endl;// 837799 525

return 0;
}

