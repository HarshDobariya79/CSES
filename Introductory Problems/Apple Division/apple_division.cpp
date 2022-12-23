/*

    Title: Apple Division
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    There are n apples with known weights. Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.

    Input

    The first input line has an integer n: the number of apples.

    The next line has n integers p1,p2,…,pn: the weight of each apple.

    Output

    Print one integer: the minimum difference between the weights of the groups.

    Constraints
    1 ≤ n ≤ 20
    1 ≤ pi ≤ 10^9

    Example

    Input:
    5
    3 2 7 4 1

    Output:
    1

    Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8).

    Learnings:

    - Don't try to over optimize. Just look at the constraints.

*/


#include<bits/stdc++.h>
using namespace std;

long long int ans = LLONG_MAX;

void solve(vector<long long int> &a,int i,int &n,long long int sum1=0,long long int sum2=0){
    if(i==n){
        if(abs(sum1-sum2)<ans){
            ans = abs(sum1-sum2);
        }
        return;
    }

    solve(a,i+1,n,sum1+a[i],sum2);
    solve(a,i+1,n,sum1,sum2+a[i]);

}


int main(){
    
    int n;
    cin>>n;
    
    vector<long long int> a(n);
    
    for(auto &i : a){
        cin>>i;
    }

    solve(a,0,n);

    cout<<ans<<endl;
    
    return 0;
    
}
