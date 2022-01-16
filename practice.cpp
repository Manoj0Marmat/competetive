/*
Sun 16 Jan 2022
hackerEarth 
Xsquare And Double Strings
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
int t;cin>>t;
while(t--){
	string s;cin>>s;
	int n= s.size();
	bool flag = 0;
	int hsh[26] = {0};


	if ( n==1)
	{
		cout<<"No"<<endl;
		continue;		
	}

	for (int i = 0; i < n; ++i)
	{
		hsh[s[i]-'a']++;
	}	

	for (int i = 0; i < 26; ++i)
	{
		if (hsh[i]>=2)
		{
			flag = 1;
		}
	}	

	if (flag == 1)
	{
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	cout<<endl;
	
  }
return 0;
}
