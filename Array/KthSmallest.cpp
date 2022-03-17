//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    void swap(int *xp, int *yp)
    {
        int temp = *xp;
        *xp=*yp;
        *yp = temp;
    }
    void bubbleSort(int arr[], int r)
    {
        for(int i=0;i<r;i++)
            for(int j=0;j<r-i;j++)
                if(arr[j] > arr[j+1])
                    swap(&arr[j],&arr[j+1]);
    }
    int kthSmallest(int arr[], int l, int r, int k) 
    {
        //code here
        r++;
        sort(arr,arr+r);
        return arr[k-1];
    }

};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends