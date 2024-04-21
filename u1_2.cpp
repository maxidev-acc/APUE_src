// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int isPrime(int num) {
    
    if (num == 1) {
        cout<<"Sonderfall. 1 ist KEINE Primzahl";
        return (0);
    };
    
    for (int k=2; k<num; k++) {
        if(num%k == 0) {
        cout<<"Keine Primzahl"<<endl; cout<<"Teiler: ";
        for (int j=2; j<num; j++) {
        if(num%j == 0){cout<<j; cout<<" ,"; };
        };
      return(0); 
       
    };

    
};

cout << to_string(num) + " ist eine Primzahl!";
return (1);
    
}


int main() {
    // Write C++ code here
    
    cout<<"Geben Sie eine Zahl ein!" <<endl;
    int inputnum;
    cin>>inputnum;
    isPrime(inputnum);
    return 0;
}