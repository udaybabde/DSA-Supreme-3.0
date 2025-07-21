#include<iostream>
using namespace std;

int main(){
     
    int length;
    cout<<"enter length"<<endl;
    cin>>length;

    int width;
    cout<<"enter width"<<endl;
    cin>>width;

 for(int row=0;row<length;row++){
        for(int col=0;col<width;col++){
            if(row==0 || row==length-1 || col==0 || col==width-1){
                cout<<"* "<<" ";
            }
            else{
                cout<<"   ";
            }
          
        }
        cout<<endl;
    }


    return 0;
}