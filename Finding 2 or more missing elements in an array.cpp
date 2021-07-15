#include<iostream>
using namespace std;
int main()
{
    int sizeA,length,result,diff;
    int sum=0;
    cout<<"Enter size of the array"<<endl;
    cin>>sizeA;
    int A[sizeA];
    cout<<"Enter the length of the array"<<endl;
    cin>>length;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>A[i];
    }
    diff=A[0]-0;
    for(int i=1;i<length;i++)
    {

        if(A[i]-i!=diff)
        {
            while(diff<A[i]-i)
            {
                cout<<endl<<"The missing element is "<<i+diff<<endl;
                diff++;
            }

        }



    }



}
