#include<iostream>
using namespace std;  // Maxm and minimum in array
 int maxm(int ar[],int size)
{   // ko main funtion ke niche ni likhna hai
    int maxi=INT_MIN;
    for(int i=0; i<size; i++)
    {
      /*  if(ar[i]>max){
            max=ar[i];
        }
        */
        maxi=max(maxi,ar[i]); // shortcut function to find maxm
        
    }
    return maxi;
}

int minm(int a[],int n)
{
	int mi=INT_MAX; // INT_MAX(=2 ka power 31) ka matlab maan lete min bahut bada hai 
	for(int i=0; i<n; i++)
	{ /*
		if(a[i]<min)
		{
			min=a[i];
		}
		*/
		mi=min(mi,a[i]); // shortcut function for find minimum 
	}
	return mi;
}

int main()
{
cout<<"Enter the size of array :";
int size;
cin>>size;
cout<<"Enter element in array :";
    int ar[100];
    for(int i=0; i<size; i++)
    {
        cin>>ar[i];
    }
cout<<"Max is :"<<maxm(ar,size)<<endl;
cout<<"Min is :"<<minm(ar,size);
 return 0;
}
 

