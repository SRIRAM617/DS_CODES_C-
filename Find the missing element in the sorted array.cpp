#include<iostream>
using namespace std;
int main()
{
    int sizeA,length,formulae;
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
    for(int i=0;i<length;i++)
    {

        sum+=A[i];
    }
    cout<<endl<<"The sum is "<<sum;
    formulae=((length+1)*((length+1)+1))/2;
    cout<<"Formulae is "<<formulae;
    cout<<endl<<"The missing element is"<<formulae-sum;

}
