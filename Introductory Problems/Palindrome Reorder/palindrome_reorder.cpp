/*

    Title: Palindrome Reorder 
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

    Input

    The only input line has a string of length n consisting of characters A–Z.

    Output

    Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

    Constraints
    1 ≤ n ≤ 10^6

    Example

    Input:
    AAAACACBA

    Output:
    AACABACAA

    Learnings:

    - Never erase something from map while iterating it.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    map<char,int> mp;

    for(auto &i : s){
        mp[i]++;
    }

    int count = 0;
    deque<char> dq;

    char oddElement;
    int occurence;

    for(auto &i : mp){
        if(i.second%2){
            count++;
            oddElement = i.first;
            occurence = i.second;
            // mp.erase(i.first);                                               VERY DANGEROUS
        }
        if(count>1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
    }  

    if(count==1){
        for(int i=0;i<occurence;i++){
            dq.push_back(oddElement);
        }
    }

    for(auto &i : mp){
        if(i.second%2) continue;
        for(int j = 0;j<i.second/2;j++){
            dq.push_back(i.first);
            dq.push_front(i.first);
        }
    }

    for(auto &i:dq){
        cout<<i;
    }cout<<endl;
    
    return 0;
    
}
