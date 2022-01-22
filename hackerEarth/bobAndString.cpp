#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	const int ct = t;
	while(t--){
		int hsha[26] = {0};
		int hshb[26] = {0};
		int count = 0;
		string a,b;
		cin >> a>>b;
		for (int i = 0; i < a.size(); ++i)
		{
			hsha[a[i]-'a']++;
		}
		for (int i = 0; i < b.size(); ++i)
		{
			hshb[b[i]-'a']++;
		}
		// for (int i = 0; i < 26; ++i)
		// {
		// 	cout<<hsha[i];
		// }
		// cout<<endl;
		// for (int i = 0; i < 26; ++i)
		// {
		// 	cout<<hshb[i];
		// }
		// cout<<endl;
		// cout<<endl;
		for (int i = 0; i < 26; ++i)
		{
			count += abs(hsha[i]-hshb[i]);
		}
		cout<<count<<endl;

	}	
	return 0;
}
