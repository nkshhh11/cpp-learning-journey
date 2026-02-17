#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"enter marks : " ;
   cin>>n;
   if(n>=81 && n<=100){
        cout<<"very good";
   }
   if(n>=61 && n<=80){
        cout<<"good";
   }
   if(n>=41 && n<=60){
        cout<<"better";
   }
   if(n<40){
        cout<<"fail";
   }
}