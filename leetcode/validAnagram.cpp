#include<bits/stdc++.h>

using namespace std;

int main(){

	string s,t;
	cin>>s>>t;
     if(s.length()!=t.length()){
			cout<< false;
		}
		int a[26] = {0};
		for(int i=0;i<s.length();i++){
			a[s[i]-'a']++;
			a[t[i]-'a']--;
		}
		bool flag=true;
		for(int i=0;i<26;i++){
			cout<<a[i];
			if(a[i]!=0){
				flag=false;
				break;
			}
		}
		// cout<< flag;


	return 0;
}