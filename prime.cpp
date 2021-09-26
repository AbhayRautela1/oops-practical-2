#include<iostream>
using namespace std;
void prime(int x)
{
if(x<0 || x>1000)
{
cout<<"Sorry you crossed the limits"<<endl;
}
else if(x>=1 && x<=1000)
{
int flag=0;
for(int i=2;i<=x/2;i++)
{
if(x%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
cout<<"Entered Number is prime"<<endl;
}
else{
cout<<"Entered Number is not prime"<<endl;
}
}
else{
cout<<"Entered Number is not prime"<<endl;
}
}
int main()
{
int n;
cin>>n;
prime(n);
return 0;
}
