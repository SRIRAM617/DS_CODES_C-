#include<iostream>

using namespace std;

int main()
{
    int sizeA,length,lower,upper,mini,maxi;
    cout<<"Enter size of the array"<<endl;
    cin>>sizeA;
     int  A[10];
    cout<<"Enter the length of the array"<<endl;
    cin>>length;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>A[i];
    }
    mini=A[0];
    for(int i=1;i<length;i++)
    {
        if(mini>A[i])
        {
            mini=A[i];

        }

    }
     cout<<"Minimum "<<mini<<endl;
     maxi=A[0];
    for(int i=1;i<length;i++)
    {
          if(maxi<A[i])
        {
            maxi=A[i];

        }

    }
    cout<<"Maximum "<<maxi<<endl;



int H[]={0,0,0,0,0,0,0,0,0,0,0,0,0};
for(int i=0;i<length;i++)
    {
        H[A[i]]++;
}
for(int i=1;i<=maxi;i++)
{
    if(H[i]==0)
    cout<<"The missing elements are "<<i<<endl;
}
}


