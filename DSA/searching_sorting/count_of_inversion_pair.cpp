// first approach

#include<bits/stdc++.h>
using namespace std;
typedef long long int ulli;
#define mod 1000000007

 

int merge(int Arr[], int temp[],int start, int mid, int end) 
{
	
	int i = start;
    int j = mid;
    int k = start;
    int ans=0;
	while(i <= mid-1 && j <= end) 
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
            ans=ans+(mid-i);
		}
	}

	while(i <= mid-1)
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
          for (i = start; i <= end; i++)
        Arr[i] = temp[i];
 
    
    //cout<<ans;
    return ans;
	
}


int  mergeSort(int Arr[],int temp[], int start, int end) 
{
    
    int mid;
    int ans=0;
	if(start < end) 
    {
		int mid = (start + end) / 2;
		ans+=mergeSort(Arr, temp,start, mid);
		ans+=mergeSort(Arr,temp, mid+1, end);
		ans+=merge(Arr, temp,start, mid+1, end);
	}
    //cout<<ans;
    return ans;
}
int _mergeSort(int Arr[], int array_size)
{
    int temp[array_size];
    return mergeSort(Arr, temp, 0, array_size - 1);
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int Arr[5] = { 1, 20, 6, 4, 5};
    
    int ans1=_mergeSort(Arr,5);
    for(int i=0;i<5;i++)
    cout<<Arr[i]<<" ";
    cout<<endl<<ans1;
  
 return 0;
}


// second approach


#include<bits/stdc++.h>
using namespace std;
typedef long long int ulli;
#define mod 1000000007

 

int merge(int *Arr, int start, int mid, int end) 
{
	int temp[end-start+1];
	int i = start;
    int j = mid;
    int k = 0;
    int ans=0;
	while(i <= mid-1 && j <= end) 
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
            ans=ans+(mid-i);
		}
	}

	while(i <= mid-1)
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
          for (i = start; i <= end; i++)
        Arr[i] = temp[i-start];
 
    
    //cout<<ans;
    return ans;
	
}


int  mergeSort(int *Arr, int start, int end) 
{
    
    int mid;
    int ans=0;
	if(start < end) 
    {
		int mid = (start + end) / 2;
		ans+=mergeSort(Arr,start, mid);
		ans+=mergeSort(Arr,mid+1, end);
		ans+=merge(Arr, start, mid+1, end);
	}
    //cout<<ans;
    return ans;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
    int Arr[5] = { 1, 20, 6, 4, 5};
    
    int ans1=mergeSort(Arr,0,4);
    for(int i=0;i<5;i++)
    cout<<Arr[i]<<" ";
    cout<<endl<<ans1;
  
 return 0;
}






