/*
    Title: Two Sets
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

    Input
    The only input line contains an integer n.

    Output
    Print "YES", if the division is possible, and "NO" otherwise.
    After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
    
    Constraints
    1 ≤ n ≤ 10^6
    
    Example 1
    
    Input:
    7
    
    Output:
    YES
    4
    1 2 4 7
    3
    3 5 6
    
    Example 2
    
    Input:
    6
    
    Output:
    NO
    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n;
    cin>>n;

    vector<int> s1;
    vector<int> s2;

    long long int sum = 0;
    long long int target = n*(n+1)/2;

    if(target&1){
        cout<<"NO"<<endl;
        return 0;
    }

    target /= 2;

    cout<<"YES"<<endl;

    for(long long int i=n;i>0;i--){
        if((sum+i)<=target){
            s1.push_back(i);
            sum += i;
        }else{
            s2.push_back(i);
        }
    }
    
    cout<<s1.size()<<endl;

    for(auto &i : s1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<s2.size()<<endl;

    for(auto &i : s2){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
    
}