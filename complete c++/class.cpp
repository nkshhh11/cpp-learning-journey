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




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//   }
//   map<int , int>mpp;
//   for(int i=0 ; i<n ; i++){
//     mpp[arr[i]]++;
//   }
//   int q;
//   cin>>q;
//   while(q--){
//     int number;
//     cin>number;
//     cout<<map[number]<<endl;
//   }
// }




// #include <bits/stdc++.h>
// using namespace std;
// void selection_sort(int arr[] , int n){
//   for(int i=0 ; i<n-1 ; i++){
//     int min = i;
//     for(int j=i+1 ; j<n ; j++){
//       if(arr[j]<arr[min]){
//         min = j;
//       }
//     }
//     int temp = arr[min];
//     arr[min]=arr[i];
//     arr[i]=temp;
//   }
// }
// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//    }
//     selection_sort(arr , n);
//     for(int i=0 ; i<n ; i++){
//       cout<<arr[i]<<" ";
//     }
// }






// #include <bits/stdc++.h>
// using namespace std;
// void bubble_sort(int arr[] , int n){
//   for(int i=n-1 ; i>=0 ; i--){
//     for(int j=0 ; j<=i-1 ; j++){
//       if(arr[j]>arr[j+1]){  // phle or uske doosre ko compare yaani adjacent ko compare krke swap ka kaam
//       int temp = arr[j+1];
//       arr[j+1]=arr[j];
//       arr[j]=temp;
//     }
//   }
// }
// }
// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//    }
//     bubble_sort(arr , n);
//     for(int i=0 ; i<n ; i++){
//       cout<<arr[i]<<" ";
//     }
// }









// #include <bits/stdc++.h>
// using namespace std;
// void insertion_sort(int arr[] , int n){
//   for(int i=0 ; i<=n ; i++){
//     int j=i;
//     while(j>0 && arr[j-1] > arr[j]){
//       int temp=arr[j-1];
//       arr[j-1]=arr[j];
//       arr[j]= temp;
//        j--;
//     }
//   }
// }
// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0 ; i<n ; i++){
//     cin>>arr[i];
//    }
//     insertion_sort(arr , n);
//     for(int i=0 ; i<n ; i++){
//       cout<<arr[i]<<" ";
//     }
// }










// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to merge two halves of the array
//     void merge(vector<int>& arr, int low, int mid, int high) {
//         // Create temp arrays
//         vector<int> temp;
//         int left = low, right = mid + 1;

//         // Merge two sorted halves
//         while (left <= mid && right <= high) {
//             if (arr[left] <= arr[right])
//                 temp.push_back(arr[left++]);
//             else
//                 temp.push_back(arr[right++]);
//         }

//         // Copy remaining elements from left half
//         while (left <= mid)
//             temp.push_back(arr[left++]);

//         // Copy remaining elements from right half
//         while (right <= high)
//             temp.push_back(arr[right++]);

//         // Copy sorted elements back to original array
//         for (int i = low; i <= high; i++)
//             arr[i] = temp[i - low];
//     }

//     // Recursive merge sort function
//     void mergeSort(vector<int>& arr, int low, int high) {
//         if (low >= high)
//             return;

//         // Find the middle index
//         int mid = (low + high) / 2;

//         // Recursively sort left half
//         mergeSort(arr, low, mid);

//         // Recursively sort right half
//         mergeSort(arr, mid + 1, high);

//         // Merge the two sorted halves
//         merge(arr, low, mid, high);
//     }
// };

// int main() {
//     vector<int> arr = {5, 2, 8, 4, 1};
//     Solution sol;
//     sol.mergeSort(arr, 0, arr.size() - 1);
//     for (int x : arr)
//         cout << x << " ";
//     cout << endl;
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to perform quicksort
//     void quickSort(vector<int>& arr, int low, int high) {
//         // Base case: if low is not less than high
//         if (low < high) {
//             // Find pivot index after partitioning
//             int pivotIndex = partition(arr, low, high);

//             // Recursively sort elements before pivot
//             quickSort(arr, low, pivotIndex - 1);

//             // Recursively sort elements after pivot
//             quickSort(arr, pivotIndex + 1, high);
//         }
//     }

//     // Function to partition the array
//     int partition(vector<int>& arr, int low, int high) {
//         // Choose the last element as pivot
//         int pivot = arr[high];

//         // Initialize i to place smaller elements
//         int i = low - 1;

//         // Traverse the array
//         for (int j = low; j < high; j++) {
//             // If element is smaller than or equal to pivot
//             if (arr[j] <= pivot) {
//                 // Increment i and swap with j
//                 i++;
//                 swap(arr[i], arr[j]);
//             }
//         }

//         // Place pivot in correct position
//         swap(arr[i + 1], arr[high]);

//         // Return pivot index
//         return i + 1;
//     }
// };

// int main() {
//     // Sample array
//     vector<int> arr = {10, 7, 8, 9, 1, 5};

//     // Create solution object
//     Solution sol;

//     // Apply quicksort
//     sol.quickSort(arr, 0, arr.size() - 1);

//     // Print sorted array
//     for (int num : arr)
//         cout << num << " ";
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max)
        max=arr[i];
    }
    int slarge st=-1;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>slargest && arr[i]!=max)
        slargest=arr[i];
    }
    cout<<slargest;
    return 0;
}