#include <iostream>
#include<map>
#include<iterator>
#include<utility>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    map<string, int> m;
	    int count = 0; 
	    string s[n];
	    for(int i = 0; i<n; i++){
	        cin>>s[i];
	        m[s[i]]++;
	    }
	    int j =2;
	    string temp, ans;
	    while(j--){
	        count = 0;
	        for(auto itr = m.begin(); itr != m.end(); itr++){
	            if(itr->second > count){
	                count = itr->second;
	                temp = itr->first;
	            }
	        }
	        if(j == 1) m[temp] = 0; 
	    }
	    cout<<temp<<endl;
	}
	return 0;
}
