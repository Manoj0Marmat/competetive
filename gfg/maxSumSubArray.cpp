#include<bits/stdc++.h>

using namespace std;

unordered_set <int> s;

int main(){

	int n,k; cin>> n>>k;
	int arr[n];
	long long int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int res=0,sum=0;
       for(int i=0;i<v.size()&&k+i<=v.size();i++){
       int sum=0;
       for(int j=i;j<k+i;j++){
           sum=sum+v[j];
       }
       res=max(res,sum);
   }
   cout<<res;
	
	return 0;

}