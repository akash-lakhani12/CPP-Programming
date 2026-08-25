#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
        cin>>nums[i];
        
    int counter=0,sum=1;
    int i,j,k;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
               if(i!=j && i!=k && j!=k)
               {
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum==0)
                        counter++;
               } 
            }   
        }
    }
    cout<<counter<<endl;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
               if(i!=j && i!=k && j!=k)
               {
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum==0)
                        cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<" "<<endl;
               } 
            }   
        }
    }
    return 0;
}
