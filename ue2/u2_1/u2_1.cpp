// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;





string reverseString(string& inputString){
            string revsersedResultString;
            inputString.insert(0, " ");
            int indexOfWordgaps = 0;
            int lenOfInputString = inputString.length();
            for(int index = 1; index <= lenOfInputString ; index++) {
                char characterAtIndex = inputString[index];
                
                if (characterAtIndex == ' ' || characterAtIndex == '\0') { 
                
                    for(int innerIndex=index-1; innerIndex>indexOfWordgaps; innerIndex--){
                        char characterAtInnerIndex = inputString[innerIndex];
                        if (innerIndex== index-1) { revsersedResultString += toupper(characterAtInnerIndex);}
                    
                        else{revsersedResultString += tolower(characterAtInnerIndex);};
                        
                };
                
                indexOfWordgaps = index;
                revsersedResultString += " ";
            };

            };
        
        
            return revsersedResultString;
}

void programmInfoBox(){
    cout<<"Revserse String"<<endl;
    cout<<"Enter String as Input. Any string is possible, but be aware that special characters may cause problems!"<<endl;
    cout <<"Enter 'exit()' to terminate the programm"<<endl;

}

string inputHandler() {
    cout<<"\nEnter new string:"<<endl;
    string newString;
    if (getline(cin, newString)) {
        return(newString);
    } else {
        cout<<"Unspecified Error occured. Programm will terminate now";
        return (0);}
    return(0);
}



bool boolProgammTermination(string& inputString){ 
    if(inputString  == "exit()"){
        return true;

    }
    else{ return false;}
}




int main() {

    programmInfoBox();
    while(1){

        string newInputStr = inputHandler();
        if (boolProgammTermination(newInputStr)){
            break;
            }
           
        cout<<reverseString(newInputStr) <<endl;
        

    }
}