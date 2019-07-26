{
// C Program for counting sort
#include <stdio.h>
#include <string.h>
#define RANGE 255
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(char arr[]);
// Driver program to test above function
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
        countSort(arr);
    printf("%s
", arr);
    }return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
// The main function that sort the given string arr[] in
// alphabatical order

void countSort(char arr[])
{
    int count[26];
    for(int i = 0; i<26; i++) count[i] = 0;
    for(int i = 0; i<strlen(arr); i++){
        count[arr[i]-'a']+=1;
    }
    int t = 0;
    for(int i = 0; i<26; i++){
        while(count[i] != 0){
            arr[t++] = char('a' + i);
            count[i]-= 1;
        }
    }
}
