#include<iostream>
using namespace std;


//inverted hollow full pyramid
void invertedhollowfullpyramid(int n){
 for(int row=0;row<n;row++){
//space
        for(int col=0;col<row;col++)
            cout<<" ";
//star
    for(int col=0;col<n-row;col++)
    if(row==0 || row==n-1 || col==0 || col==n-row-1){
        cout<<"* ";
    }
    else{
        cout<<"  ";
    }
                cout<<endl;       
    }
}

int main(){
       int n;
    cin>>n;
    invertedhollowfullpyramid(n);

    return 0;
}