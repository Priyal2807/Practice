#include <iostream>
#include <vector>
using namespace std;
void change(long long int n)
{
    long long int a = n;
    vector<int> g1;
    while(n!=0)
    {
        int r = n%10;
        g1.push_back(r);
        n=n/10;
    }
    int i=0;
    int s=g1.size();
    int *arr= NULL;
    arr= new int[s];
    arr[0]=1;
    for(i=1;i<s;i++)
    {
       arr[i]=0;
    }
    int *ans=NULL;
    ans= new int [s-1];
    int k=0,sum=0;

    for(i=s-2;i>=0;i--)
    {
        ans[k]=g1[i];
        k++;
        sum+=ans[k];
    }
    if(ans[0]>5)
    {
       for(i=0;i<s-2;i++)
       {
           g1[i]=0;
       }
       g1[s-2]=g1[s-2]+1;
       if(g1[s-2]==10)
       {
           g1[s-2]=0;
           g1[s-1]=g1[s-1]+1;
       }
    }
    else if(ans[0]==5 && sum>5)
    {
        for(i=0;i<s-2;i++)
       {
           g1[i]=0;
       }
       g1[s-2]=g1[s-2]+1;
       if(g1[s-2]==10)
       {
           g1[s-2]=0;
           g1[s-1]=g1[s-1]+1;
       }

    }
    else
    {
     for(i=0;i<s-2;i++)
       {
           g1[i]=0;
       }
    }

    for(i=s-1;i>=0;i--)
    {
        cout<<g1[i];
    }
    cout<<endl;

}

int main() {
	long long int n=0;
	int t=0;
	cin>>t;
	while(t!=0)
	{
	    cin>>n;
	    change(n);

	    t--;
	}
	return 0;
}
