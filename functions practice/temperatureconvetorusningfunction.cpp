#include <iostream>
using namespace std;

// Celsius to Fahrenheit
double celsiusToFahrenheit(double c){
    return (9.0/5.0) * c + 32;
}

// Fahrenheit to Celsius
double fahrenheitToCelsius(double f){
    return (5.0/9.0) * (f - 32);
}

int main(){
    int choice;
    double temp;

    cout<<"------ Temperature Converter ------"<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    cout<<"Enter temperature: ";
    cin>>temp;

    if(choice == 1){
        cout<<"Converted Temperature: "
            <<celsiusToFahrenheit(temp)<<" °F";
    }
    else if(choice == 2){
        cout<<"Converted Temperature: "
            <<fahrenheitToCelsius(temp)<<" °C";
    }
    else{
        cout<<"Invalid Choice!";
    }

    return 0;
}