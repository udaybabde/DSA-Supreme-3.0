#include<iostream>
using namespace std;

void abcde(int n){
    //outer loop for rows
    for(int row=0;row<n;row++){
        char ch='A';

        //innerloop
        for(int col=0;col<row+1;col++){
            cout<<ch;
            ch++;
        }
        ch--;
        while(ch>'A'){
            ch--;
            cout<<ch;
        }
     cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    abcde(n);
    return 0;
}