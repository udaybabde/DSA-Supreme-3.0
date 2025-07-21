#include<iostream>
using namespace std;

int main(){
     
    int length;
    cout<<"enter length"<<endl;
    cin>>length;

    for(int row=0;row<length;row++){
        for(int col=0;col<length;col++){
            if(row==0 || row==length-1 || col==0 || col==length-1){
                cout<<"* "<<" ";
            }
            else{
                cout<<"   ";
            }
          
        }
        cout<<endl;      //bhul jate hais
    }


    return 0;
}