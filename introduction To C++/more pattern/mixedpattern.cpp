#include<iostream>
using namespace std;

//part1
void mixed(int n){
    for(int row=0;row<n;row++){
      //part 1
        //1 star
        for(int col=0;col<n-row;col++)
            cout<<"*";

            
          //2 space
            for(int col=0;col<2*row+1;col++)
            cout<<" ";
        
        //3 star
          for(int col=0;col<n-row;col++)
            cout<<"*";
          cout<<endl;
    }

    //part 2
    for(int row=0;row<n;row++){

    
    //star
    for(int col=0;col<row+1;col++)
    cout<<"*";

    //space
       for(int col=0;col<2*n-2*row-1;col++)
    cout<<" ";

       //star
       for(int col=0;col<row+1;col++)
    cout<<"*";
    cout<<endl;
}
}

int main(){
    int n;
    cin>>n;

    mixed(n);

    return 0;
}