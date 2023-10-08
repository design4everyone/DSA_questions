/*Q5. Copy the Array

Problem Description

You are given a constant array A and an integer B.

You are required to return another array where outArr[i] = A[i] + B.



Problem Constraints

1 <= A.size() <= 10000

1 <= A[i] <= 10000

1 <= B <= 10000



Input Format

First argument is a constant array A.

Second argument is an integer B.



Output Format

You have to return an integer array.



Example Input

Input 1:

A = [1,2,3,2,1]
B = 3
Input 2:

A = [1,1,10]
B = 6


Example Output

Output 1:

 [4,5,6,5,4] 
Output 2:

 [7,7,16] 


Example Explanation

Explanation 1:

A[0] + 3 = 1 + 3 = 4
A[1] + 3 = 2 + 3 = 5
A[2] + 3 = 3 + 3 = 6
A[3] + 3 = 2 + 3 = 5
A[4] + 3 = 1 + 3 = 4 */

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> copy(vector<int> &A,int B)
{
    int l=A.size();
    vector<int> ans(l);
    for(int i=0;i<l;i++)
    {
        ans[i]=A[i]+B;
    }

    return ans;

    /*cout<<"printing ans :";
    for(int i=0;i<l;i++)
    {
        cout<<ans[i]<<" ";
    }*/

}

int main()
{
    int n;
    cout<<"enter size of array :";
    cin>>n;
    vector<int> A;
    int c;
    cout<<"enter ele :";
    for(int i=0;i<n;i++)
    {
        cin>>c;
        A.push_back(c);
    }
    int B;
    cout<<"enter ele to be added :";
    cin>>B;

   vector<int> res= copy(A,B);
   cout<<"printing the ans :";
   for(int i=0;i<n;i++)
   {
        cout<<res[i]<<" ";
   }
    return 0;

    
}
