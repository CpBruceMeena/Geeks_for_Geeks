#include <iostream>
using namespace std;

long long int gcd(long long int a,long long int b){
    if(b == 0) return a;
    else{
        return gcd(b, a%b);
    }
}

void lcmGcd(long long int a, long long int b){
    long long int g = gcd(a, b);
    long long int l = (a*b)/g;
    cout<<l<<' '<<g<<endl;
}

int main() {
	int test; cin>>test;
	while(test--){
	    long long int a, b;
	    cin>>a>>b;
	    lcmGcd(a, b);
	}
	return 0;
}
