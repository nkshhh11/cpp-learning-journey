// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int a,b,c;
// // //     cout<<"enter first number:";
// // //     cin>>a;
// // //     cout<<"enter second number:";
// // //     cin>>b;
// // //     cout<<"enter third number:";
// // //     cin>>c;
// // // // a>b and  b>c so a is also greater than c a>c a is greater
// // // if(a>b){
// // //     if(a>c){
// // //         cout<<"a is greatest";
// // //     }
// // //     else{
// // //         cout<<"c is greatest";
// // //     }
// // // }
// // // else{
// // //     if(b>c){
// // //         cout<<"b is greatest";
// // //     }
// // //     else{
// // //         cout<<"c is greatest";
// // //     }
// // // }
// // // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a,b,c;
// //     cout<<"enter first number";
// //     cin>>a;
// //     cout<<"enter second number";
// //     cin>>b;
// //     cout<<"enter third number";
// //     cin>>c;
// //     if(a>b){
// //         if(a>c){
// //             cout<<"a is greater";
// //         }
// //             else{
// //                 cout<<"c is greater";
// //             }
// //     }
// //     else{
// //         if(b>c){
// //             cout<<"b is greater";
// //         }
// //         else{
// //             cout<<"c is greater";
// //         }
// //     }
// // }



#include<iostream>
using namespace std;
int main(){
    int Ram , shyam , ajay;
    cout<<"enter Ram age : ";
    cin>>Ram;
    cout<<"enter shyam age : ";
    cin>>shyam;
    cout<<"enter ajay age : ";
    cin>>ajay;
    if(Ram>shyam){
        if(Ram>ajay){
            cout<<"ram is youngest";
        }
            else{
                cout<<"ajay is youngest";
            }
    }
    else{
        if(shyam>ajay){
            cout<<"shyam is youngest";
        }
        else{
            cout<<"ajay is youngest";
        }
    }
}



