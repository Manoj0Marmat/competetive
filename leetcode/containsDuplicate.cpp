#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int>arr;

	for (int a, i = 0; i < 4; ++i)
	{
		cin>>a;
		arr.push_back(a);
	}

	set<int> s(arr.begin(),arr.end());

	cout<< !(s.size()==arr.size());


	// vector<int>carr;
	// for (int i = 0; i <4; ++i)
	// {
	// 	carr.push_back(count(arr.begin(),arr.end(),arr[i]));
	// }
	// int maxCount = *max_element(carr.begin(),carr.end());
	// if (maxCount == 1)
	// {
	// 	cout<<true;
	// }else{
	// 	cout<<false;
	// }
	// cout << arr.size(); 

	return 0;
}