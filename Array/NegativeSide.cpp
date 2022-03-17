#include <iostream>
using namespace std;

void ArrayNegative(int arr[],int n)
{
    int temp,j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            if( i != j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;                
            }
            j++;
        }
    }
}


int main() 
{
	//code
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	ArrayNegative(arr,n);
	for(int i=0; i<n;i++)
	{
	    cout<<arr[i]<<",";
	}
	return 0;
}