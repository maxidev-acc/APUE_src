// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int isPrime(int inputNumber) {
    
    if (inputNumber == 1) {
        cout<<"\nEXCLUSIVE NUMBER. 1 is not a prime number\n";
        return (0);
    };
    
    for (int k=2; k<inputNumber; k++) {
        if(inputNumber%k == 0) {
        cout<< to_string(inputNumber) + " is not a prime number \n"<<endl; cout<<"Dividers: ";
        for (int j=2; j<inputNumber; j++) {
        if(inputNumber%j == 0){cout<<j; cout<<" "; };
        };
        
      return(0); 
       
    };

    
};

cout << to_string(inputNumber) + " is a prime number!";
return (1);
    
}


void programmInfoBox(){
    cout<<"\n"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Prime Number Programm"<<endl;
    cout<<"Programm to check if number is a prime number. \n0 will terminate the programm!\nEntering invalid input (str, -int) will terminate the programm! "<<endl;




}


int inputHandler() {
    cout<<"\nEnter new number: "<<endl;
    int sideLength;
if (cin >> sideLength) {
    if (sideLength >= 0){ return(sideLength);};
    cout<<"Error. No negative Int-Input allowed" <<endl;;
    return(0);
} else {
    cout<<"Error. Wrong input type.";
    return (0);
}
        
}


int main(){
    programmInfoBox();
    while(1)
    {
        int newInput = inputHandler();
        if (newInput ==0) { break;};
        isPrime(newInput);

    };
    return 0;
}