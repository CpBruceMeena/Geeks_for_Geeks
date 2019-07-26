#include <iostream>
#include<string.h>
using namespace std;

void checkAnagram(string a, string b){
    int c = a.size(), d = b.size(); 
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for(int i = 0; i<c; i++){
        arr[a[i] - 'a']++;
    }
    for(int i =0 ;i <d; i++){
        arr[b[i] - 'a']--;
    }
    for(int i = 0; i<26; i++){
        if(arr[i] != 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main() {
	int test; cin>>test;
	while(test--){
	    string a, b;
	    cin>>a>>b;
	    checkAnagram(a, b);
	}
	return 0;
}
