#include<iostream>
using namespace std;


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
    invertedfullpyramid(n);

    return 0;
}