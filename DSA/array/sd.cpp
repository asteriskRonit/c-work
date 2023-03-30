#include <iostream>
using namespace std;
void swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
       cin>>a[i];
    for(int i=0;i<3;i++)
       cout<<a[i]<<" ";    
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
                swap((a+i),(a+j));
        }
    }  
    cout<<"After sorting:";  
    for(int i=0;i<5;i++)
      cout<<a[i]<<" ";
    /*cout<<"Enter the numbers:";
    for(int i=0;i<5;i++)
        cin>>a[0];
    cout<<"After taking the inputs\n";   
    for(int i=0;i<5;i++)
       cout<<a[i];*/    
    return 0;
}