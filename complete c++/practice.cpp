// #include<iostream>
// using namespace std ;
// int main(){
//     int a;
//     cout<<"enter the year : ";
//     cin>>a;
//     if((a%4==0 && a%100!=0)||(a%400==0)){
//         cout<<"yes it is a leap year";
//     }
//      else 
//         cout<<"it is not leap year";
// }






// #include<iostream>
// using namespace std ;
// int main(){
//    int a;
//    int fact=1;
//    cout<<"enter the number : ";
//    cin>>a;
//    for(int i=a ; i>=1 ; i--){
// fact=fact*i;
//    }
//    cout<<fact;
// }








// #include<iostream>
// using namespace std ;
// int main(){
//    int a , rev=0 , digit;
//    cout<<"enter the number : ";
//    cin>>a;
//    for(int i=a ; i>0 ; i=i/10){
//     digit=i%10;
//     rev=rev*10+digit;
//    }
//    cout<<rev;
// }



// #include<iostream>
// using namespace std ;
// int main(){
//  int a=12;
//  int* ptr = &a;
//  cout<<ptr<<endl;
//  cout<<a<<endl;
//  cout<<&a;
// } 

//#include <bits/stdc++.h>  



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a=4;
//    int *ptr = &a;
//    cout<<ptr<<endl;
//    cout<<&a<<endl;
//    cout<<a<<endl;
//    cout<<*(&a)<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
//     class teacher {
//         public:
//         string name;
//         string dept;
//         string sec;
//         string subject;
//         teacher(string name , string sec){
//         }
//         void getinfo(){
//             cout<<name;
//         }
//     };
// int main(){
//     teacher  t1("prashant verma" , "cse 29");
//     t1.getinfo();
// }





// #include<iostream>
// using namaespace std;
// int main(){
//     int arr[];
//     for(int i=0 ; i<=arr[] ; i++){
//         cin>>
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[]={n};
//     int x;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         if(x!=arr[i])
//         cout<<-1;
//         else 
//         cout<<arr[i];
//     }
// }





// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int strt=0 ; strt<n ; strt++){
//         for(int end=strt ; end<n ; end++){
//             for(int i=strt ; i<end ;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n=5;
//    int arr[5]={1,2,3,6,5};
//   int maxsum=INT_MIN;
//   for(int st=0;st<n;st++){
//     int currsum=0;
//     for(int end=st;end<n;end++){
//         currsum+=arr[end];
//         maxsum=max(currsum,maxsum);
//     }
//   }
//    cout<<"max subarray sum = "<<maxsum<<endl;
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//    int n=5;
//    int arr[5]={1,2,3,4,5};
//    int maxsum = INT_MIN , currsum = 0;
//    for(int i=0 ; i<n ;i++){
//     currsum+=arr[i];
//     maxsum=max(currsum , maxsum);
//     if(currsum<0){
//       currsum=0;
//     }
//    }
//     cout<<maxsum<<endl;
// }



// #include <bits/stdc++.h>
// using namespace std;
// vector<int> pairsum(vector<int>num , int target){
//   vector<int>ans;
//   int n=num.size();
//   for(int i=0 ; i<n ;i++){
//    for(int j=i+1 ; j<n ; j++){
//       if(num[i]+num[j]==target){
//          ans.push_back(i);
//          ans.push_back(j);
//       }
//    }
//   }
//   return ans;
// }

// int main() {
//    vector<int>num={1,2,3,4,5};
//    int target=7;
//    vector<int>ans=pairsum(num , target);
//    cout<<ans[0]<<" , "<<ans[1]; 

// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n=5;
//     int arr[n]={1,2,3,4,9};
//     int currsum=0 , maxsum=INT_MIN;
//     for(int i=0 ; i<n ; i++){
//       currsum+=arr[i];
//       maxsum=max(currsum , maxsum);
//       if(currsum<0){
//          currsum=0;
//       }
//     }
//     cout<<maxsum;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
   int n=5x;
   int arr[n]={1,2,3,4,5};
   int maxsum=INT_MIN;
   for(int st=0 ; st<n ; st++){
      int currsum=0;
      for(int end=st ; end<n ; end++){
         currsum+=arr[end];
         maxsum=max(currsum , maxsum);
      }
   }
   cout<<maxsum;
}