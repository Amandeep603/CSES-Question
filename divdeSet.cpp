// in this program you have to divide the array into two halfes
#include<iostream>
using namespace std;
void printArray(int arr[] , int n)
{
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        arr[i] = i+1;
    }
    int totalSum = n*(n+1)/2;
    int sp = 0,fp = n-1;
    if(totalSum%2==0)
    {
        cout << "Yes" << endl;
        //  now you have to print the two arrays
        // [1,2,3,4,5,6,7]
        int reqSum = totalSum/2;
        int ans1[n/2];
        int ans2[n/2],sum = 0,k=0,j=0;
        for(int i = n-1;i>=0;i--)
        {
            if(sum<reqSum || arr[i]<=reqSum)
            {
            sum +=arr[i];
            reqSum -=arr[i];
            ans1[k++] = arr[i];
            arr[i] = 0;
            }
            else
            {
                ans2[j++] = arr[i];
            }
        }
        printArray(ans1,k);
        cout << endl;
          printArray(ans2,j);
    }
    else
    {
        cout << "NO" << endl;
    }
}