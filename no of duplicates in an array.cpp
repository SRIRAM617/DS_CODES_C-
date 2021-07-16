#include<iostream>

using namespace std;

int main()
{
    int sizeA,length,i,j;
    cout<<"Enter size of the array"<<endl;
    cin>>sizeA;
     int  A[sizeA];
    cout<<"Enter the length of the array"<<endl;
    cin>>length;
    cout<<"Enter the elements"<<endl;
    for(int k=0;k<length;k++)
    {
        cin>>A[k];
    }
   for(i=0;i<length-1;i++)
   {
      if(A[i]==A[i+1])
      {
          j=i+1;
          while(A[j]==A[i]){
            j++;
          }
          cout<<"The repeated element is "<<A[i]<<". And it is repeated "<<j-i<<" times"<<endl;
          i=j-1;
      }


   }
   }






