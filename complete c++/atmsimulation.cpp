#include <bits/stdc++.h>
using namespace std;

int main() {
   int balance = 1;
   int pin=1234;
   int enteredpin;
   int choice;
   int amount;
   cout<<"enter your pin : ";
   cin>>enteredpin;
   if(enteredpin == pin)
   {
        do{
            cout<<"\n\n==MCHINE==\n";
            cout<<"1. check balance\n";
            cout<<"2. withdraw balance\n";
            cout<<"3. deposite balance\n";
            cout<<"4. Exit\n";
            cout<<"enter your choice : ";
            cin>>choice;

            switch(choice){
                case 1:
                    cout<<"balance is : "<<balance;
                    break;
                case 2:
                    cout<<"enter amount to withdraw : ";
                    cin>>amount;

                    if(amount <= balance){
                        balance=balance-amount;
                        cout<<"withdrawl succesfull!"<<endl;
                        cout<<"\nRemaining balance : "<<balance;
                    }

                    else{
                        cout<<"insufficient balance!";
                    }
                    break;
                case 3:
                    cout<<"enter amount to deposite : ";
                    cin>>amount;
                    
                    balance = balance + amount ;
                    cout<<"deposit successfull!"<<endl;
                    cout<<"your current updated balance is : "<<balance;
                    break;
                case 4:
                    cout<<"<<<<<<<<< Thank you for using ATM >>>>>>>>";
                    break;
                default:
                    cout<<"Invalid choice";
            }

    }while(choice != 4);
   }
    else{
    cout<<"Wrong pin";
}
}