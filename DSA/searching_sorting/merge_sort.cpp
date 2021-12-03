#include<bits/stdc++.h>
using namespace std;
typedef long long int ulli;
#define mod 1000000007
void merge(int *Arr, int start, int mid, int end) 
{
	int temp[end - start + 1];

	int i = start;
    int j = mid+1;
    int k = 0;

	while(i <= mid && j <= end) 
    {
		if(Arr[i] <= Arr[j]) 
        {
			temp[k] = Arr[i];
			k++; 
            i++;
		}
		else 
        {
			temp[k] = Arr[j];
			k++;
            j++;
		}
	}

	while(i <= mid)
    {
		temp[k] = Arr[i];
		k++;
        i++;
	}

	while(j <= end)
    {
		temp[k] = Arr[j];
		k++; 
        j++;
	}

	for(i = start; i <= end; i += 1)
    Arr[i] = temp[i - start];
	
}


void mergeSort(int *Arr, int start, int end) 
{

	if(start < end) 
    {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid+1, end);
		merge(Arr, start, mid, end);
	}
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
  int arr[7]={2,6,5,7,3,1,4};
    mergeSort(arr,0,6);
    for(int i=0;i<7;i++)
    cout<<arr[i]<<" ";
  
 return 0;
}
