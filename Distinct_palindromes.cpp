#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int i = 0; int j = s.size()-1;
    while(i < j){
        if(s[i] != s[j]) return false;
        i++, j--;
    }
    return true;
}

void distinctPalindrome(string s){
    int n = s.size();
    map<string, int> mymap;
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n-i+1;j++){
            if(isPalindrome(s.substr(j, i))){
                mymap[s.substr(j, i)]++;
            }
        }
    }
    cout<<mymap.size()<<endl;
}

int main() {
    int test; cin>>test;
    while(test--){
        string s; cin>>s;
        distinctPalindrome(s);
    }
	return 0;
}
