// #include<bits/stdc++.h>

// using namespace std;

// int *getProfit(int c[], int d[],int n,int a){
// 	int *arr;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		arr[i] = (d[i] - c[i] + 1) * a - (d[i] + c[i] + 2) - (c[i] - d[i])*(c[i] - d[i]);
// 	}
// 	return arr;

// };

// int getMax(int *profits, int n){
// 	int max = INT_MIN;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (max<profits[i])
// 		{
// 			max = profits[i];
// 		}
// 	}
// 	return max;


// };

// int main(void){

// 	int t;cin>>t;
// 	while(t--){
// 		int n,a;cin>>n>>a;
// 		int c[n],d[n];
// 		for (int i = 0; i < n; ++i) cin >>c[i]>>d[i];
// 		int *profits = getProfit(c,d,n,a);
// 		cout <<getMax(profits, n);
// 	}


// 	return 0;
// }

// created by aspire7star
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
	int TC; cin >> TC;
	while(TC--)
	{
	    int N,A; cin >> N >> A;

	    int C[N+1],D[N+1],pf[N+1]; pf[0]=0;

	    for(int i=1;i<=N;i++){
	        cin >> C[i] >> D[i];
	        pf[i] = pf[i-1] + C[i];
	    }
	    int maxAns=0;
	    for(int l=1;l<=N;l++){

	        int maxx = D[l],minn = D[l];


	        for(int r=l;r<=N;r++){

	            maxx = max(maxx,D[r]);
	            cout<<(((r-l+1)*A) - (pf[r] - pf[l-1]) - ((maxx-minn)*(maxx-minn)))<<'\n';

	            minn = min(minn,D[r]);

	            // maxAns=max(maxAns,;
	        }
	    }
	//     cout << maxAns << '\n';
	}
	return 0;
}


