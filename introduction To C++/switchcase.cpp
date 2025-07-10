#include<iostream>>
using namespace std;

//if else if
int main(){


    char grade;
    cout<<"enter your grade :: ";
    cin>>grade;


    //using if else if statement

    // if(grade=='A'){
    //     cout<<"range of marks between 90 to 100"<<endl;
    // }
    // else if(grade=='B'){
    //        cout<<"range of marks between 80 to 90"<<endl;
    // }
    // else if(grade=='C'){
    //        cout<<"range of marks between 70 to 80"<<endl;
    // }
    
    // else if(grade=='D'){
    //        cout<<"range of marks between 60 to 70"<<endl;
    // }

    // else{
    //        cout<<"range of marks between 0 to 60"<<endl;
    // }



    //using switch case
    switch(grade){

    case'A':cout<<"range of marks between 90 to 100"<<endl;
    break;
    case'B':cout<<"range of marks between 80 to 90"<<endl;
    break;
    case'C':cout<<"range of marks between 70 to 80"<<endl;
    break;
    case'D':cout<<"range of marks between 60 to 70"<<endl;
    break;
    default:cout<<"range of marks between 0 to 60"<<endl;
    }



    return 0;
}    


