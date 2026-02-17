// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//  int a , b , swap;
//  cout<<"enter the first number : ";
//  cin>>a;
//  cout<<"enter the second number : ";
//  cin>>b;
//  swap=a;
//  a=b;
//  b=swap;
//  cout<<"swapped of a : "<<a<<endl<<"swap of b : "<<b;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a , b;
//    cout<<"enter the first number : ";
//    cin>>a;
//    cout<<"enter the second number : ";
//    cin>>b;
//    a=a+b;
//    b=a-b;
//    a=a-b;
//    cout<<a<<" "<<b;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a , b , c;
//     cout<<"enter first number : ";
//         cin>>a;
//     cout<<"enter second number : ";
//         cin>>b;
//     cout<<"enter third number : ";
//         cin>>c;
//         if(a>b && a>c)
//         cout<<"a is greater";
//     else if(b>a && b>c)
//     cout<<"b is greater";
// else if(c>a && c>b)
// cout<<"c is greater";
// else
// cout<<"some numers are may  be equal";
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a ;
//    cout<<"ENTER THE YEAR WHAT YOU WANT TO KNOW LEAP YEAR OR NOT : ";
//    cin>>a;
//    if((a%4==0)||(a%400==0))
//    cout<<"it is a leap year";
// else 
// cout<<"it is not leap year";

// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int a , b;
//     cout<<"enter the first number : ";
//     cin>>a;
//     char op;
//     cout<<"enter the operator : ";
//     cin>>op;
//     cout<<"enter the second number : ";

//     cin>>b;
//     switch(op){
//     case '+':
//     cout<<a+b;
//     break;
//     case '-':
//     cout<<a-b;
//     break;
//     case '/':
//     cout<<a/b;
//     break ;
//     case '*':
//     cout<<a*b;
//     break;
//     default:
//     cout<<"opertaor is invalid";
// }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cout<<"enter the number : ";
//   cin>>n;
//   for(int i = n ; i>=1 ; i--)
//   cout<<i<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//    int n , sum=0; 
//    cout<<"enter the number : ";
//    cin>>n;
//    for(int i=n ; i>=1 ; i--) {
//    sum=sum+i;
//    }
// cout<<sum;
// }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int n , digit , sum = 0, original;
//    cout<<"enter the number : ";
//    cin>>n;
//    original=n;
//    for(int i=n ; i>0 ; i=i/10){
//    digit=i%10;
//    sum=sum * 10 + digit;
//    }
//    if(original == sum)
//    cout<<"palindrome";
// else
// cout<<"not palindrome";
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n , original , reverse = 0 , digit , count=0;
//     cout<<"enter the number : ";
//     cin>>n;
//     original = n;
//     for(int i=n ; i>0 ; i=i/10){
//       count ++;
//     }
//     for (int i=n ; i>0 ; i=i/10){
//       digit=i%10;
//       reverse = reverse+pow(digit , count);
//     }
//     if(original==reverse)
//     cout<<"armstrong";
//    else
//    cout<<"number is not armstrong";
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n , sum=0;
//     cout<<"enter the number : ";
//     cin>>n;
//     for(int i=1 ; i<n ; i++){
//     if(n%i==0){
//     sum=sum+i;
//     }
//    }
//    if(sum==n)
//    cout<<"perfect";
// else
// cout<<"not perfect";
// }