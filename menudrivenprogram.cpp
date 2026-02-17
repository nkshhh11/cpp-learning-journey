// #include<iostream>
// using namespace std;
// int main(){
//     int a , b;
//     int choice;
//     do{
//         cout<<"======calculator menu======"<<endl;
//         cout<<"1. Addition\n";
//         cout<<"2. subtraction\n";
//         cout<<"3. multiplication\n";
//         cout<<"4. division\n";
//         cout<<"5. exit\n";
//         cout<<"enter your choice : ";
//         cin>>choice;
//         if(choice>=1 && choice<=4){
//             cout<<"enter two numbers=>"<<endl;
//         cout<<"enter your first number : ";
//         cin>>a;
//         cout<<"enter your second number : ";
//         cin>>b;
//         }
//         switch(choice){
//             case 1:
//             cout<<"result is : "<<a+b<<endl;
//             break;
//              case 2:
//             cout<<"result is : "<<a-b<<endl;
//             break;
//              case 3:
//             cout<<"result is : "<<a*b<<endl;
//             break;
//              case 4:
//             cout<<"result is : "<<a/b<<endl;
//             break;
//              case 5:
//             cout<<"exiting program.....";
//             break;
//             default:
//             cout<<"invalid choice";
//         }

//     }while(choice!=5);
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  int a , b;
  int choice;
  do{
    cout<<"=====proper calculator=====\n";
    cout<<"1. addition\n";
    cout<<"2. subtraction\n";
    cout<<"3. multiplication\n";
    cout<<"4. devision\n"; 
    cout<<"5. exit\n";
    cout<<"enter your choice : ";
    cin>>choice;
    if(choice>=1 && choice <=4){
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    }
  switch(choice){
    case 1:
    cout<<"addition of two number is : "<<a+b<<endl;
    break;
     case 2:
    cout<<"subtraction of two number is : "<<a-b<<endl;
    break;
     case 3:
    cout<<"multiplication of two number is : "<<a*b<<endl;
    break;
     case 4:
    cout<<"devision of two number is : "<<a/b<<endl;
    break;
     case 5:
    cout<<"exit the process>>>>>>>>>>>>"<<endl;
    break;
    default:
    cout<<"invalid choice";
  }
}while(choice!=5);
}