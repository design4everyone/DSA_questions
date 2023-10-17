/*Problem Description
You are given an integer array A, you have to return an integer array of same size whose ith element is the frequency count of A[i] in array A .



Problem Constraints
1 <= len(A) <= 1000

1 <= A[i] <= 100



Input Format
First argument is an array of integers representing array A.



Output Format
You have to return an array of integers as per the question.



Example Input
Input 1:

A = [1, 2, 5, 1, 5, 1 ]


Example Output
Output 1:

[3, 1, 2, 3, 2, 3]


Example Explanation
Explanation 1:

Clearly, In the given array we have 1 three times, 2 one time and 5 two times.



Expected Output
Provide sample input and click run to see the correct output for the provided input. Use this to improve your problem understanding and test edge cases
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &A)
{
    int l=A.size();
    vector<int> ans(l);
    for(int i=0;i<l;i++)
    {
        int count=0;
        for(int j=0;j<l;j++)
        {
            if(A[j]==A[i])
            {
                count++;
            }
        }
        ans[i]=count;
        
    }
  return ans;

}
int main()
{
    int n;
    cout<<"enter n :";
    cin>>n;
    vector<int> A;
    int c;
    cout<<"enter array ele :";
    for(int i=0;i<n;i++)
    {
        cin>>c;
        A.push_back(c);
    }
    vector<int> res= solve(A);
    cout<<"print res :";
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
