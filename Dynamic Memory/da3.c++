#include<iostream>
using namespace std;
int main()
{
    int row ;
    cout<<"enter no. of Row:"<<endl;
    cin>>row;
    int col;
    cout<<"Enter col:"<<endl;
    cin>>col;
    //creatig 2D array row*col=m*
    
    int **arr=new int*[row];
    for(int i=0; i<row; i++)
    {
        arr[i]=new int[col];
    }
// creating array
    for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
{
    cin>>arr[i][j];
}
}
cout<<" "<<endl;
// print
for(int i=0; i<row; i++)
{
for(int j=0; j<col; j++)
{
    cout<<arr[i][j]<<" ";
}
cout<<endl;
}

// release
for(int i=0; i<row; i++)
{
    delete []arr[i];
}
delete []arr;
 return 0;
}