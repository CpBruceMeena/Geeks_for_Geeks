#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

void fill(map<char, int> &mymap, set<char> temp){
    for(auto itr= temp.begin(); itr!=temp.end(); itr++){
        mymap[*itr]++;
    }
}

int min(int a, int b){
    return(a>=b?b:a);
}

void solve(string s){
    set<char> temp;
    int n = s.size();
    for(int i = 0; i<n; i++){
        temp.insert(s[i]);
    }
    int final_ans = INT_MAX;
    for(int i = 0; i<= n-temp.size(); i++){
        map<char, int> mymap;
        fill(mymap, temp);
        int t = temp.size();
        int len = 0;
        int j = i;
        while(len != t and j <n){
            if(mymap[s[j]] != 0 and len != t){
                len++, mymap[s[j]]--;
            }
            j++;
        }
        if(len == t){
            final_ans = min(final_ans, j - i);
        }
    }
    cout<<final_ans<<endl;
}

int main() {
    int test; cin>>test;
    while(test--){
        string s; cin>>s;
        solve(s);
    }
	return 0;
}
