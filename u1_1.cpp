#include <iostream>
using namespace std;


void printRhombus(int len) {

   int range = len*2+1;
   
   for(int k =1; k<=len; k++)
   {    
       string newLineUpperRhombus; 
       newLineUpperRhombus.append(len+1-k, ' ');
       newLineUpperRhombus.append(k*2-1, '*');
       cout <<newLineUpperRhombus<<endl;
       
    }; 
    
    
        string middleLineRhombus; 
        middleLineRhombus.append(range, '*');
        cout<<middleLineRhombus<<endl;
    
   for(int k =len; k>0; k--) {
       
       string newLineLowerRhombus; 
       newLineLowerRhombus.append(len+1-k, ' ');
       newLineLowerRhombus.append(k*2-1, '*');
       cout <<newLineLowerRhombus<<endl;
}; 
        
}


int inputHandler() {

    int sideLength;
    cout<<" Rhombus Programm"<<endl;
    cout<<" Prompt side length as Int. Prompt 0 to terminate programm."<<endl;
if (cin >> sideLength) {
    return(sideLength);
} else {
    cout<<"Error. Wrong input type.";
    return (0);
}
    
    
    
    

}
   
int main() {
    while (1) {
    int sideLength= inputHandler();
    if( sideLength ==0) {break;}
    printRhombus(sideLength);
    
 };
return 0;
}
