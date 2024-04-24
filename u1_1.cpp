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


void programmInfoBox(){
    cout<<"Rhombus Programm"<<endl;
    cout<<"Enter side length as Int. Entering 0 will terminate the programm. \nEntering invalid input (str, float) will terminate the programm! "<<endl;

}


int inputHandler() {

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




int main() {
    programmInfoBox();
    while (1) {
    int sideLength= inputHandler();
    if( sideLength ==0) {break;}
    printRhombus(sideLength);
    
 };
return 0;
}
