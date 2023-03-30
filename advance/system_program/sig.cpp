#include<iostream>
#include<climits>
using namespace std;
int max_sub_array(int a[],int size)
{
     int max_ending_here=0,max_so_far=INT_MIN;
     for(int i=0;i<size;i++)
     {
         max_ending_here+=a[i];
         if(max_so_far<max_ending_here)
           max_so_far=max_ending_here;
         if(max_ending_here<0)
           max_ending_here=0;
     }
     return max_so_far;
}
int main()
{
  int n;
  cout<<"Enter the number of value you want to insert :";
  cin>>n;
  int array[n];
  cout<<"Enter the value of the array:\n";
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
  cout<<"\nAfter input\n";
  for(int i=0;i<n;i++)
  {
      cout<<array[i]<<" ";
  }
  cout<<endl;
  cout<<"The summation of the sub array is : "<<max_sub_array(array,n)<<endl;
  return 0;
}