#include <iostream>
#include<vector>
#include<string.h>

using namespace std;
const int m = 1005;

void setOnes(int arr[][m], int row, int col, int a, int b){
    for(int i = 0; i<b; i++){
        arr[row][i] = 1;
    }
    for(int i =0 ; i<a; i++){
        arr[i][col] = 1;
    }
}

void booleanMatrix(int arr[m][m], int a, int b){
    int R[a], C[b];
    memset(R, 0 ,sizeof(R));
    memset(C, 0, sizeof(C));
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            if(arr[i][j] == 1){
                R[i] = 1;
                C[j] = 1;
            }
        }
    }
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            if(R[i] == 1 or C[j] == 1) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}

int main() {
	int test; cin>>test;
	while(test--){
	    int a, b;
	    cin>>a>>b;
	    int arr[m][m];
	    for(int i = 0; i<a; i++){
	        for(int j= 0; j<b; j++) cin>>arr[i][j];
	    }
	    booleanMatrix(arr, a, b);
	}
	return 0;
}
