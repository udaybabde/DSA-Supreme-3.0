#include<iostream>
using namespace std;

//first function
//create
int sum(int a,int b){
    int totalsum=a+b;
    return totalsum;
}

// int main(){
//     //function call
//     int ans=sum(5,20);
//     cout<<ans;

//     return 0;
// }

//void function 
void printmyname(){
    cout<<"uday";     //no return type
}

//calling
// int main(){
//     printmyname();
 
// }



//homework problems

int printcounting(){
    for(int i=1;i<=100;i++){
        cout<<i<<" ";
    }
}

    int simpleintrest(int amount,int year,int intrest){
      int totalamount=(amount*year*intrest/100);
      return totalamount;
    }

// vote or not 1
// void vote(){
//     int age;
//     cout<<"enter your age"<<endl;
//      cin>>age;
//     if(age>=18){
//         cout<<"your are eligible for vote"<<endl;
//     }
//     else{
//         cout<<"you are not eligible to vote"<<endl;
//     }
// }

//2
void iseligible(int num){
    if(num>=18){
        cout<<"your are eligible for vote"<<endl;
    }
    else{
        cout<<"you are not eligible to vote"<<endl;
    }

}



//prime no  (incorrect logic)
// void primeno(){
//     for(int n=2;n<=100;n++){
//         for(int i=2;i<n/2;i++){
//             if(n%i==0){
//                 break;
//             }
//             if(i>n/2){
//                 cout<<n<<"";
//             }
//         }
//         }
    
//     }

void primeno(){
    for(int i=2;i<=100;i++){
       bool isprime=true;

        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<i<<" ";
        }
    }
}


int main(){
       printcounting();

    int output=simpleintrest(10000,3,12);
        cout<<"simple intrest : "<<" "<<output<<endl;

        iseligible(20);

        primeno();

    return 0;
    
}

