#include<bits/stdc++.h>

using namespace std;

int main(){

	string s,t;
	cin>>s>>t;
     if(s.length()!=t.length()){
            return 0;
        }
        
     int hsh[26] = {0};
     for(int i=0;i<s.length();++i){
        hsh[s[i]-'a']++;
        hsh[t[i]-'a']--;
       }
     for(int i=0;i<26;++i){
        if(hsh[i]!=0){
            return 0;
         }
      }
      return 1;
		// cout<< flag;


	return 0;
}