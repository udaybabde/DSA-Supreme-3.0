#include<iostream>
using namespace std;


//full pyramid
void fullpyramid(int n){
 for(int row=0;row<n;row++){
//space
        for(int col=0;col<n-row-1;col++)
            cout<<" ";
//star
    for(int col=0;col<row+1;col++)
                cout<<"* ";
                cout<<endl;       
    }
}


//inverted full pyramid
void invertedfullpyramid(int n){
 for(int row=0;row<n;row++){
//space
        for(int col=0;col<row;col++)
            cout<<" ";
//star
    for(int col=0;col<n-row;col++)
                cout<<"* ";
                cout<<endl;       
    }
}


int main(){
       int n;
    cin>>n;
    fullpyramid(n);
    invertedfullpyramid(n);

    return 0;
}