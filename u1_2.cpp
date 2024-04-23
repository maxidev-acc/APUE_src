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


int inputHandler(){
    cout<<"\n"<<endl;
    cout<<"*********************************"<<endl;
    cout<<"Programm to check if number is a prime number. \n 0 will terminate the programm \n"   <<endl;
    int inputNumber;
    cin>>inputNumber;
    return(inputNumber);
}

int main() {
 
    while(1){ 
    int inputNumber = inputHandler();
    if( inputNumber == 0) {break;}; 
    isPrime(inputNumber);
    }
    return 0;
   
}