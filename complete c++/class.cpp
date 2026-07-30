// #include <bits/stdc++.h>
// using namespace std;
// int cnt=0;
// void print(){
//    if(cnt==5)
//    return;
//    cout<<cnt<<endl;
//    cnt++;
//    print();
// }
// int main(){
//    print();
// }




// #include <bits/stdc++.h>
// using namespace std;
// void fun(int i , int n){
//    if(i>n)
//    return ;
//    cout<<i<<endl;
//    fun(i+1 , n);
// }
// int main(){
//    int n;
//    cin>>n;
//    fun(1 , n);
// }




// #include <bits/stdc++.h>
// using namespace std;
// void fun(int i , int n){
//    if(i<1)
//    return;
//    cout<<i<<endl; 
//       fun(i-1 , n);
// }
// int main() {
//    int n;
//    cin>>n;
//    fun(n , n);
// }



// #include <bits/stdc++.h>
// using namespace std;
// void fun(int i , int n){
//   if(i>n)
//   return;
// fun(i+1 , n );
// cout<<i<<endl;
// }
// int main() {
//     int n;
//     cin>>n;
//     fun(1 , n);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int i , int n){
//   if(i>n)
//   return;
// cout<<i<<endl;
// fun(i+1 , n);
// }
// int main() {        //print 1 to n
//    int n;
//    cin>>n;
//    fun(1 , n);
// }








// #include <bits/stdc++.h>
// using namespace std;
// void fun(int i , int n , int sum){
// if(i>n){
// cout<<sum<<endl;
// return ;
// }
// fun(i+1 , n , sum+i);
// }
// int main() {
//    int n;
//    cin>>n;
// fun(1 , n , 0);
// }








// #include <bits/stdc++.h>
// using namespace std;
// int sum=0;
// void fun(int i , int n ){
// if(i>n)
// return;
// sum=sum+i;
// cout<<sum<<endl;
// fun(i+1 , n);
// }
// int main() {
//    int n;
//    cin>>n;
// fun(1 , n);
// }




// #include <bits/stdc++.h>
// using namespace std;
// int fun(int n){
//   if(n==0)
//   return 0;
// return n+fun(n-1);
// }                            //sum of first n number using functional method 
// int main() {
//    int n ;
//    cin>>n;
//    cout<<fun(n);
// }







// #include <bits/stdc++.h>
// using namespace std;
// int fact=1;
// void fun(int i , int n){
//   if(i>n){
//   cout<<fact;
//     return;
//   }
//   fact=fact*i;
//   fun(i+1 , n);
// }
// int main() {
//   int n;
//   cin>>n;
//   fun(1 , n);
    
// }





// #include <bits/stdc++.h>
// using namespace std;
// int fun(int n){
// if(n==0)
// return 1;
// return n*fun(n-1);
// }

// int main() {
//    int n;
//    cin>>n;
//    cout<<fun(n);
// }




// #include <bits/stdc++.h>
// using namespace std;
// void fun(int arr[] , int s , int e){
//   if(s>=e)
//   return;
// swap(arr[s] , arr[e]);
// fun(arr , s+1 , e-1);
// }
// int main() {
//   int n;
//   cin>>n;
//    int arr[n];
//    for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//    }
//    fun(arr , 0 , n-1);
//    for(int i=0 ; i<n ;i++){
//   cout<<arr[i]<<" ";
// }
// }



// #include <bits/stdc++.h>
// using namespace std;
// void fun(int st , int arr[] , int n){
//   if(st>=n/2)
//   return;
// swap(arr[st] , arr[n-st-1]);
// fun(st+1 , arr , n);
// }
// int main() {
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//   }
//   fun(0 , arr , n);
//   for(int i=0 ; i<n ; i++){
//     cout<<arr[i]<<" ";
//   }
// } 




// #include <bits/stdc++.h>
// using namespace std;
// bool fun(int i , string &name){
//   if(i>=name.size()/2)
//   return true;
//   if(name[i]!=name[name.size()-i-1])
//   return false;
//   return fun(i+1 , name);
// }
// int main() {             //check string is palindrome or not 
//    string name="madsm";
//    cout<<fun(0,name);
// }




// #include <bits/stdc++.h>
// using namespace std;
// int fun(int n){
//   if(n<=1)
//   return n;
// int last=fun(n-1);
// int seclast=fun(n-2);    //fibonacci series
// return last+seclast;
// }
// int main() {
//   int n;
//   cin>>n;
//   cout<<fun(n);
// }



// #include <bits/stdc++.h>
// using namespace std;
// int fun(int n){
//   if(n<=1)
//   return n;
// int last=fun(n-1);
// int slast=fun(n-2);
// return last + slast;
// }
// int main() {
//    int n;
//    cin>>n;
//    cout<<fun(n);
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     int hash[13]={0};
//     for(int i=0 ; i<n ; i++){
//         hash[arr[i]]+=1;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
// cout<<hash[number]<<endl;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    string s;
//    cin>>s;
//    int q;
//    cin>>q;
//    int hash[26]={0};
//    for(int i=0 ; i<s.size() ; i++){
//     hash[s[i]-'a']++;
//    }
//    while(q--){
//     char c;
//     cin>>c;
//     cout<<hash[c-'a'];
//    }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0 ; i<n ; i++){
    cin>>arr[i];
  }
  map<int , int>mpp;
  for(int i=0 ; i<n ; i++){
    mpp[arr[i]]++;
  }
  int q;
  cin>>q;
  while(q--){
    int number;
    cin>number;
    cout<<map[number]<<endl;
  }
}