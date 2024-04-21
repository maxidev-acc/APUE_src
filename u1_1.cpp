#include <iostream>
using namespace std;

void printRaute(int len) {
   int range = len*2+1;
   
   for(int k =1; k<=range/2; k++) {
        for(int leer = 0; leer <=len-k; leer++) {cout<<" ";};
        for(int stern = 0; stern<k*2-1; stern++) {cout<<"*";};
   cout<<""<<endl;     
}; 
    for(int k =0; k<range; k++) { cout<<"*";};
    cout<<""<<endl;  
   for(int k =len; k>0; k--) {
        for(int leer = 0; leer <=len-k; leer++) {cout<<" ";};
        for(int stern = 0; stern<k*2-1; stern++) {cout<<"*";};
   cout<<""<<endl;     
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
