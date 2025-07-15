#include<iostream>
using namespace std;
int main()
{
    //unary operator
    int a=5;
    cout<<a<<endl;
    cout<<(++a)<<endl;
    cout<<(a++)<<endl;
    cout<<(a++)<<endl;
    cout<<(--a)<<endl;
    cout<<(a--)<<endl;


    //arithmatic operator

    int b=5;
    int c=2;
 cout<<(b+c)<<endl;
  cout<<(b-c)<<endl;
   cout<<(b/c)<<endl;
    cout<<(b%c)<<endl;      //reminder
     cout<<(5/2)<<endl;     //return integer value
      cout<<(5.0/2)<<endl;    //return float
       cout<<(5/2.0)<<endl;     //return float
    
    
       //relational operator

    cout<<(10>5)<<endl;
    cout<<(10==5)<<endl;
    cout<<(10<=10)<<endl;
    cout<<(10!=5)<<endl;


    //logical operator
    bool cond1=true;
    bool cond2=false;
    bool cond3=true;

    if(cond1 && cond2 && cond3){
        cout<<"all conditions are true"<<endl;
    }

       else if(cond1 || cond2 || cond3){
        cout<<"some conditions are true"<<endl;
    }

       else{
        cout<<"all conditions are false"<<endl;

       }


       //assignment operators
       int abc=4;
       abc=(abc+2);
       cout<<abc<<endl;
       cout<<(abc+=2)<<endl;     //same as upper onr


       //bitwise operator
       cout<<(5&4)<<endl;
       cout<<(5|4)<<endl;
       cout<<(~4)<<endl;
       cout<<(5<<1)<<endl;
       cout<<(5>>1)<<endl;
       cout<<(5^4)<<endl;

return 0;
}