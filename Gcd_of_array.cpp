#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else{
        return gcd(b , a%b);
    }
}

void gcdArray(int arr[], int n){
    if(n == 1){
        cout<<arr[0]<<endl;
        return;
    }
    int ans = gcd(arr[1], arr[0]);
    for(int i = 2; i<n ;i++){
        ans = gcd(ans, arr[i]);
    }
    cout<<ans<<endl;
}

int main() {
    int test; cin>>test;
    while(test--){
        int n; cin>>n;
        int arr[n];
        for(int i = 0; i<n ;i++) cin>>arr[i];
        gcdArray(arr, n);
    }
	return 0;
}
