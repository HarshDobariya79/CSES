/*

    Title: Increasing Array
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    Problem definition:
    
    You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

    On each move, you may increase the value of any element by one. What is the minimum number of moves required?

    Input

    The first input line contains an integer n: the size of the array.

    Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

    Output

    Print the minimum number of moves.

    Constraints
    1 ≤ n ≤ 2⋅10^5
    1 ≤ xi ≤ 10^9
    
    Example

    Input:
    5
    3 2 5 1 7

    Output:
    5

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    long long int temp;
    cin>>temp;

    long long int target = temp,ans = 0;

    for(int i=1;i<n;i++){
        cin>>temp;
        target = max(target,temp);

        if(temp<target){
            ans += target - temp;
        }

    }

    cout << ans << endl;
    
    return 0;
    
}
