/*

    Title: Bit Strings
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    Your task is to calculate the number of bit strings of length n.

    For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

    Input

    The only input line has an integer n.

    Output

    Print the result modulo 109+7.

    Constraints
    1 ≤ n ≤ 10^6

    Example

    Input:
    3

    Output:
    8

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    long long int ans = 1;

    for(int i=0;i<n;i++){
        ans = (ans*2)%1000000007;
    }

    cout<<ans<<endl;
    
    return 0;
    
}
