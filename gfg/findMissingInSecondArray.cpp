#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[6]={1, 2, 3, 4, 5, 6};
	int b[3]={1, 2, 3};
	int i,j;
	unordered_set <long long> s;

	for(int i=0; i<3; ++i){
	        s.insert(b[i]);
	    }
	for(int i=0;i<6;++i){
	        if(s.find(a[i])==s.end()){
	        	cout<<a[i]<<" ";
	        }
	    }


	return 0;
}