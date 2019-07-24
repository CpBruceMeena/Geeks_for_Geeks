#include <iostream>
using namespace std;
#define m 100

void searchMatrix(int arr[][m], int a, int b, int k){
    int i = a-1, j = 0;
    while(i>=0 and j>=0 and i<a and j<b){
        if(arr[i][j] > k){
            i--;
        }
        else if(arr[i][j] < k){
            j++;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }
    cout<<0<<endl;
    return;
}

int main() {
	int test; cin>>test;
	while(test--){
	    int a, b; cin>>a>>b;
	    int arr[m][m];
	    for(int i = 0; i<a; i++){
	        for(int j = 0; j<b; j++){
	            cin>>arr[i][j];
	        }
	    }
	    int k; cin>>k;
	    searchMatrix(arr, a, b, k);
	}
	
	return 0;
}
