/*Problem Description

Write a program to input N numbers array, a number X and a number Y from user and insert an element Y in it at specified position X. X is based on 1-based indexing
Note: When an element is inserted at position X, all elements that were already present at position >= X, gets shifted to one position right, not replaced.

Problem Constraints

1 <= N <= 100

1 <= A[i] <= 1000

1 <= X <= N

1 <= Y <= 1000

Input Format
First line is N which represents number of elements.
Second line contains N space separated integers.
Third line is X position where Y has to be inserted.
Fourth line is Y which is the value to be inserted.

Output Format
N+1 space separated integers of the input array after inserting the element at required position.
Example Input

Input 1:
5
2 3 1 4 2
3
5

Example Output
Output 1:
2 3 5 1 4 2

Example Explanation
Explanation 1:
Clearly after inserting 5 at 3rd position, new array is 2 3 5 1 4 2.*/

#include<iostream>
using namespace std;

int main() 
 {
    
    int n;
    cout<<"enter no of ele:";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter T what position you want to insert :";
    cin>>x;
    cout<<"enter the element you want to insert :";
    int y;
    cin>>y;

    for(int i=n-1;i>=x-1;i--)
    {
        arr[i+1] = arr[i];

    }
    arr[x-1]=y;
    n++;

    cout<<"after inserting :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

return 0;
}