#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> arr;
	vector<int> uarr;
	for (int a, i = 0; i < 5; ++i)
	{
		cin>>a;
		arr.push_back(a);
	}
	for (auto i:arr)
	{
		if(count(arr.begin(), arr.end(),i)==1) uarr.push_back(i);
	}
	for (auto i:uarr)
	{
		cout<<i;
	}
	return 0;

}