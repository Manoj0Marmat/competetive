#include<bits/stdc++.h>

using namespace std;

bool isValid(char board[9][9]){

	set <string> seen;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (board[i][j] != '.')
			{
				if (! seen.insert("row"+to_string(i)+to_string(board[i][j])).second || !seen.insert("col"+to_string(j)+to_string(board[i][j])).second) return 0;
				if (! seen.insert( "box" + to_string((i/3)*3+j/3) + to_string( board[i][j] ) ).second ) return 0;
			}
		}
	}


	return 1;

	// unordered_set <string> seen;
        
 //        for(int i=0; i<9;++i){
 //            for(int j=0;j<9;++j){
 //                if(board[i][j] != '.'){    
 //                if(! seen.insert("row"+to_string(i)+to_string(board[i][j]) ).second || !seen.insert("col"+to_string(j)+to_string(board[i][j]) ).second || !seen.insert("box"+to_string((i/3)*3+j/3)+to_string(board[i][j])).second  ) return false;
 //            }
 //                }
 //        }
        
 //        return true;
}

int main(){

	char arr[9][9];
	char a;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cin >> a;
			arr[i][j] = a;
		}
	}
	
	cout<<isValid(arr);

	return 0;
}