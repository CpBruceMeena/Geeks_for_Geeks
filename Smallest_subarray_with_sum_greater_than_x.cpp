#include <iostream>
#include<limits.h>
using namespace std;

int min(int a, int b){
    return(a<=b?a:b);
}

void smallestSubarray(int arr[], int n, int sum){
    int temp = 0;
    int curr = 0;
    int ans = INT_MAX;
    for(int i = 0; i<n; i++){
        curr += arr[i];
        if(curr > sum){
            int j =-1;
            int temp = curr;
            while(temp>sum){
                j++;
                temp = temp - arr[j];
            }
            ans = min(ans, i+1 - j);
        }
    }
    cout<<ans<<endl;
}

int main(){
	int test;  cin>>test;
	while(test--){
	    int n, sum; cin>>n>>sum;
	    int arr[a];
	    for(int i = 0; i<n; i++) cin>>arr[i];
	    smallestSubarray(arr, n, sum);
	}
	return 0;
}
