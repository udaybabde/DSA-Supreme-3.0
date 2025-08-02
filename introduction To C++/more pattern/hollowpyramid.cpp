#include<iostream>
using namespace std;


//full pyramid
void hollowfullpyramid(int n){
 for(int row=0;row<n;row++){

//space
        for(int col=0;col<n-row-1;col++)
            cout<<" ";
//star
    for(int col=0;col<row+1;col++)
     if(row==0 || row==n-1 || col==0 || col==row+1-1){
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
    hollowfullpyramid(n);

    return 0;
}