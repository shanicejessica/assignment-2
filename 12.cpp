#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float p,r,t,i,j,k,l;
cout<<"enter the principal sum(p)";
cin>>p;
cout<<"enter the rate of interest(r)";
cin>>r;
cout<<"enter time(t)";
cin>>t;
i=r/100;
j=1+i;
k=pow(j,t);
l=p*k;
cout<<"compound interest="<<l<<endl;
return 0;
}


