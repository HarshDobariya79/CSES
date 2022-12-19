/*

    Title: Repetitions
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

    Input

    The only input line contains a string of n characters.

    Output

    Print one integer: the length of the longest repetition.

    Constraints
    1 ≤ n ≤ 10^6

    Example

    Input:
    ATTCGGGA

    Output:
    3

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;

    int ans = 1, count = 1;
    int n = s.length();

    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            count++;
        }else{
            ans = max(ans,count);
            count = 1;
        }
    }

    ans = max(ans,count);

    cout<<ans<<endl;
    
    return 0;
    
}
