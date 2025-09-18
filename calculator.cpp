#include<iostream>
using namespace std;

int main(){
    cout<<"Welcome to the c++ claculator"<<endl;
    int num1;
    int num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    string choice;

    cout<<"what operation would you like to perform on these 2 numbers"<<endl;

    cin>>choice;

    if (choice == "add" || choice == "Add" || choice == "ADD"){
        cout << num1 + num2;
    }
    else if (choice == "subtract" || choice == "Subtract" || choice == "SUBTRACT")
    {
        cout<<num1-num2;
    }
    else if (choice == "multiply" || choice == "Multiply" || choice == "MULTIPLY")
    {
        cout<<num1*num2;
    }
    
    else if (choice == "divide" || choice == "Divide" || choice == "DIVIDE")
    {
        cout<<num1/num2;
    }

    else{
        cout<<"Invalide choice!"<<endl;
    }
    
}