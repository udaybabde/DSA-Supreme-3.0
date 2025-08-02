#include<iostream>
using namespace std;

void fancy(int n){
   //outer loop
    for(int row=0;row<n;row++){
        for(int col=0;col<2*row+1;col++){
            if(col%2==0){
               cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }cout<<endl;
    }
}

void fullfancy12(int n){
    fancy(n);

n--;

    for(int row=0;row<n;row++){
        for(int col=0;col<2*n-2*row-1;col++){
            if(col%2==0)
                cout<<n-row;
            
            else
                cout<<"*";
            
        }cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    fullfancy12(n);
    return 0;
}