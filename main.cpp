#include <iostream>

using namespace std;


int main()
{

int input,rem,res,count=0,i=0;
        cout<<"Enter the exponent";
        cout <<endl;
        cin>>input;
        int num=input;
        while(input > 0)
        {
            input=input/2;
            count++;
        }

        int arr[count];

        while(num > 0)
        {
            arr[i]=num%2;
            num=num/2;
            i++;
        }
        for(int i=count-1 ; i>=0 ; i--)
        {
            cout<<" " << arr[i]<<" ";
        }

        cout <<endl;


//////////////////////////////////////////////////////////////////////
int x=1;
int b,m;
cout <<"Enter the base "<<endl;
cin >>b;
cout <<endl;
cout <<"Enter the value of m"<<endl;
cin >>m;
int power =b%m;
for (int j=0;j<i;j++)
{

   if (arr[j]==1)
        x=(x*power)%m;
       power =(power*power)%m;
}
cout <<endl;
cout <<"The Answear is :"<<endl;
cout <<x;

    return 0;
}
