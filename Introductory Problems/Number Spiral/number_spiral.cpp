/*

    Title: Number Spiral
    Time limit: 1.00 s 
    Memory limit: 512 MB
    
    A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

    https://cses.fi/problemset/task/1071

    Your task is to find out the number in row y and column x.

    Input

    The first input line contains an integer t: the number of tests.

    After this, there are t lines, each containing integers y and x.

    Output

    For each test, print the number in row y and column x.

    Constraints
    1 ≤ t ≤ 10^5
    1 ≤ y,x ≤ 10^9

    Example

    Input:
    3
    2 3
    1 1
    4 2

    Output:
    8
    1
    15

*/

unsigned long long int pow2(unsigned long long int x){
    return x*x;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    unsigned long long int r,c;

    for(unsigned long long int i=0;i<n;i++){
        
        cin >> r >> c;

        if(r>c){

            unsigned long long int start;

            if(r==1){
                start = 1;
                cout<<1<<endl;;
            }
            else if(r%2==1){
                start = pow2(r-1) + 1;
                cout<<start + c - 1<<endl;
            }else{
                start = pow2(r);
                cout<<start - c + 1 <<endl;
            }
        }else{
            unsigned long long int start;
            if(c==1){
                start = 1;
                cout<<1<<endl;
            }
            else if(c%2==1){
                start = pow2(c);
                cout<<start - r + 1 <<endl;
            }else{
                start = pow2(c-1) + 1;
                cout<<start + r - 1<<endl;
            }
        }

    }
    
    return 0;
    
}
