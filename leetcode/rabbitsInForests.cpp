#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	map<int, int> map;
	for (int i = 0; i < n; ++i)
	{
		map[arr[i]]++;
	}
	int count = 0;

	for (auto i: map)
	{
		int x = i.first;
		int y = i.second;

		if (y%(x+1) == 0)
		{
			count += (y/(x+1))*(x+1);
		}else{
			count += (y/(x+1)+1)*(x+1);
		}
		
	}
	cout<<count;
	return 0;
}

// C++ program for the above approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the minimum
// // number of rabbits in the forest
// int minNumberOfRabbits(int answers[], int N)
// {

// 	// Initialize map
// 	map<int, int> Map;

// 	// Traverse array and map arr[i]
// 	// to the number of occurences
// 	for (int a = 0; a < N; a++) {
// 		Map[answers[a]]++;
// 	}

// 	// Initialize count as 0;
// 	int count = 0;

// 	// Find the number groups and
// 	// no. of rabbits in each group
// 	for (auto a : Map) {
// 		int x = a.first;
// 		int y = a.second;

// 		// Find number of groups and
// 		// multiply them with number
// 		// of rabbits in each group
// 		if (y % (x + 1) == 0)
// 			count = count + (y / (x + 1)) * (x + 1);
// 		else
// 			count = count + ((y / (x + 1)) + 1) * (x + 1);
// 	}

// 	// count gives minimum number
// 	// of rabbits in the forest
// 	return count;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1, 1, 1, 1, 2  };
// 	int N = sizeof(arr) / sizeof(arr[0]);

// 	// Function Call
// 	cout << minNumberOfRabbits(arr, N) << endl;

// 	return 0;
// }

// This code is contributed by divyeshrabadiya07
