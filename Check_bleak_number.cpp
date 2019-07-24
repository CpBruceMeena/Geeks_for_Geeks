#include <iostream>
using namespace std;

//Defining countSetBits for counting the number of bits in the given number
int countSetBits(int n){
    int count = 0;
    while(n > 0){
        n = n&(n-1);
        count++;
    }
    return count;
}

//Using the concept of ceil log2n, to reduce the time complexity
int ceilLog(int n){
    int count = 0;
    n -= 1;
    while(n > 0){
        n = n>>1;
        count++;
    }
    return count;
}

//Definition of bleakNumber function
void bleakNumber(int n){          
    for(int i = n-ceilLog(n); i<n; i++){
        if(i + countSetBits(i) == n){
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
}

int main() {
	int test; cin>>test;    // Contains the number of test cases;
	while(test--){
	    int n; cin>>n;  
	    bleakNumber(n);     //Function to check whether the given number is bleak or not;
	}
	return 0;
}
