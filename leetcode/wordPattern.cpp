#include<bits/stdc++.h>
using namespace std;


bool wordPattern(string pattern,string s){
	
	unordered_map <char, string> char_map;
	unordered_map <string, char> word_map;

	stringstream str(s);
	string word;

	int n = pattern.size(), i=0;

	while(str>>word){
		char c = pattern[i];

		if (i==n) return false;
		if (char_map.count(c) != word_map.count(word)) return false;
		if (char_map.count(c)){
			if ((word_map[word] != c) || (char_map[c] != word)) return false;
		}else{
			char_map.insert({c, word});
			word_map.insert({word, c});
		}
		++i;
	}
	return i == n;

	// unordered_map<char, string> char_map;
 //        unordered_map<string, char> word_map;
        
 //        stringstream str(s);
 //        string word;
 //        int n = pattern.size(), i = 0;
        
 //        while(str >> word){
 //            if(i == n) return false;
 //            char c = pattern[i];
 //            if(char_map.count(c) != word_map.count(word)) return false;
 //            if(char_map.count(c)){
 //                if( (word_map[word] != c) || (char_map[c] != word)) return false;
 //            } else {
 //                char_map.insert({c, word});
 //                word_map.insert({word, c});
 //            }
 //            i++;
 //        }
 //        return i == n;

}


int main(){

	string pattern,s;
	getline(cin,pattern);
	getline(cin,s);

	pattern.erase(remove(pattern.begin(),pattern.end(),'"'),pattern.end());
	s.erase(remove(s.begin(),s.end(),'"'),s.end());

	cout<< wordPattern(pattern, s);

	return 0;
}