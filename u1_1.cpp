#include <iostream>
using namespace std;

void printRaute(int len) {
   int range = len*2+1;
   for(int k =1; k<=len; k++)
    
  
   {    
       string new_row; 
       new_row.append(len+1-k, ' ');
       new_row.append(k*2-1, '*');
       cout <<new_row<<endl;
       
    }; 
    
    
    string middle; 
    middle.append(range, '*');
    cout<<middle<<endl;
    
   for(int k =len; k>0; k--) {
       
       string new_row; 
       new_row.append(len+1-k, ' ');
       new_row.append(k*2-1, '*');
       cout <<new_row<<endl;
}; 
        
}
   
int main() {
    while (1) {
    cout<<" Raute Programm"<<endl;
    cout<<" Geben Sie die Seitenlänge an. 0  als Input zum beenden"<<endl;
    int seitenlänge;
    cin >>seitenlänge;
    printRaute(seitenlänge);
    if( seitenlänge ==0) {break;}
 };
return 0;
}
