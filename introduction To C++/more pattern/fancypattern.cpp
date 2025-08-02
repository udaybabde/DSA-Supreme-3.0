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

int main(){
    int n;
    cin>>n;
    fancy(n);

    return 0;
}