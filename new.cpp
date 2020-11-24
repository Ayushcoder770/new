//this is a code
//this is a code to calculate table 
#include<iostream>
using namespace std;
int main()
{
int n=0,i,a;
cout<<"menu"<<endl;
cout<<"1. table"<<endl;
cout<<"2.febonacci series"<<endl;
cout<<"enter your choice"<<endl;
cin>>a;
switch(a)
      {
         case1 :cout<<"enter a num:";
                 cin>>n;  
                 for(i=1;i<=10;i++)
                 {
                   cout<<n<<"*"<<i<<"="<<n*i<<endl;
                 }
                 break;
         
         case2: int b,t1=0,t2=1,nt=0;
                cout <<"enter the number of terms:"<<endl;
                cin>>b;
               
               cout<<"fibonacci series"<<endl;
                   for(i=1;i<=n;i++)
                  {
                     if (i==1)
                   {
                      cout<<" "<<t1;
                      continue;
                   }
                      if(i==2) 
                  {
                     cout<<" "<<t2;
                     continue;
                  }
                  nt=t1+t2;
                  t1=t2;
                  t2=nt;

                  cout<<nt<<" ";
                  }
                  break;
      }

return(0);
}
