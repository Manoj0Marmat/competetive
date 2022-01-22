#include<bits/stdc++.h>

using namespace std;

int main(){

	int t;cin>>t;
	while(t--){
		string s;cin>>s;

		int hsh[26] = {0};
		for (int i = 0; i < s.length(); ++i)
		{
			hsh[s[i]-'a']++;
		}
		int rubyadd[4] = {'r' - 'a', 'u' - 'a', 'b' - 'a', 'y' - 'a'};
		int inputrubyadd[4];
		for (int i = 0; i < 4; ++i)
		{
			inputrubyadd[i] = hsh[rubyadd[i]];
		}

		cout << *min_element(inputrubyadd,inputrubyadd+4)<<endl;

		

	}

	return 0;
}
// 0 3 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 4 0 0 2 0 0 0 2 0 
// 0 14 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 14 0 0 13 0 0 0 0 0 
