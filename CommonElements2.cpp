
#include <iostream>
#include<vector>
using namespace std;


void change(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;
    while(i!=n1 && j!=n2 && k!=n3)
    {
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;j++;k++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr2[j]<arr3[j])
        j++;
        else
        k++;
    }
}


int main() {
	int t=0,n1=0,n2=0,n3=0,i=0;
	cin>>t;
	while(t--)
	{
	  cin>>n1>>n2>>n3;
	  int *arr1=NULL;
	  int *arr2=NULL;
	  int *arr3=NULL;
	  arr1=new int[n1];
	  arr2= new int [n2];
	  arr3 = new int[n3];
	  for(i=0;i<n1;i++)
	  cin>>arr1[i];
	  for(i=0;i<n2;i++)
	  cin>>arr2[i];
	  for(i=0;i<n3;i++)
	  cin>>arr3[i];

	  change(arr1,arr2,arr3,n1,n2,n3);
	  cout<<endl;
	}
	return 0;
}
