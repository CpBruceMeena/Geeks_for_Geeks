#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
    return(a>=b?b:a);
}

void solve(string s){
    set<char> temp;
    int n = s.size();
    int text[256] = {0};
    int pat[256] = {0}, final_ans = INT_MAX;
    for(int i = 0; i<s.size(); i++) temp.insert(s[i]);
    for(auto itr = temp.begin(); itr != temp.end(); itr++){
        pat[*itr]++;
    }    
    int count = 0, start = 0;
    int len = temp.size();
    for(int i = 0; i<n; i++){
        text[s[i]]++;
        if(pat[s[i]] != 0 and text[s[i]] <= pat[s[i]]) count++;
        
        if(count == len){
            while(text[s[start]] > pat[s[start]] or pat[s[start]] == 0){
                if(text[s[start]] > pat[s[start]])
                    text[s[start]]--;
                start++;
            }
            int curr = i - start + 1;
            final_ans = min(curr, final_ans);
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
