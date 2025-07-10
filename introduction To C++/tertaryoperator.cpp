#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"enter age"<<endl;
    cin>>age;

    //using normal if else statement 

    // if(age>18){
    //     cout<<"you can vote";
    // }
    // else{
    //     cout<<"you cannot vote";
    // }


    //using ternary statements
    (age>18) ? cout<<"you can vote" : cout<<"you cannot vote";



    return 0;
}