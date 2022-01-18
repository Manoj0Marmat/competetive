#include<bits/stdc++.h>

using namespace std;

int main(){

int n,k;

cin>>n>>k;

int a[n];

for(int i=0;i<n;cin>>a[i++]);

unordered_set<int>s;

int flag=0;

for(int i=0;i<n;i++){
	auto check = s.end();
	cout << check<< " ";

	if(s.find(a[i])==s.end()){

		s.insert(k-a[i]);

	}else{

		flag=1;

		break;
	}

}

if(flag==1)

cout<<"YES";

else

cout<<"NO";

}