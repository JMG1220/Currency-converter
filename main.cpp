#include <iostream>
using namespace std;

void currencyConverter(int value){
    double dollarValue;
    
    cout << "Enter amount Us: ";
    cin >> dollarValue;
    switch(value){
        case 1:
            cout << "The value " << dollarValue << " converted to Euro is " << dollarValue*.99<<endl;
            break;
        default:
            cout<< "enter valid input" <<endl;
    }
    




}





int main(){
    




    cout << "Currency converter" <<endl;
    int userInput, select;
    cout <<"select currency: "<< endl;
    cout << "1-American to Euro  "<< endl;
    cin>> userInput;
    currencyConverter(userInput);
    
 
}