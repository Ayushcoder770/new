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
         case 1 :cout<<"enter a num:";
                 cin>>n;  
                 for(i=1;i<=10;i++)
                 {
                   cout<<n<<"*"<<i<<"="<<n*i<<endl;
                 }
                 break;
         
         case 2: { int b, q=0 , p=1 , nt=0 ;
                cout <<"enter the number of terms:"<<endl;
                cin>>b;
               
               cout<<"fibonacci series"<<endl;
                   for(i=1;i<=b;i++)
                  {
                     if (i==1)
                    {
                      cout<<" "<<q;
                      continue;
                    }
                      if(i==2) 
                    {
                     cout<<" "<<p;
                     continue;
                    }  
                  nt=q+p;
                  q=p;
                  p=nt;

                  cout<<nt<<" ";
                  }
                  break;
                 }
               
               

      default:cout<<"invaild choice";
                   break;
      }

return(0);
}
