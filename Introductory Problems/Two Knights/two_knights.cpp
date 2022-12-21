/*

    Title: Two Knights
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

    Input

    The only input line contains an integer n.

    Output

    Print n integers: the results.

    Constraints
    1 ≤ n ≤ 10000

    Example

    Input:
    8

    Output:
    0
    6
    28
    96
    252
    550
    1056
    1848

    Learnings: 

    - a knight can reach 2*3 or 3*2 cells only.
    - so the problem is reduced to finding number of 2*3 or 3*2 cells.
    - in each 2*3 or 3*2 there are two ways to place two knights so they can attack each other.


*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int x;
    cin>>x;

    for(long long int n=1;n<=x;n++){
        cout<<((n*n)*((n*n)-1)/2) - (4*(n-1)*(n-2))<<endl;
    }
    
    return 0;
    
}
