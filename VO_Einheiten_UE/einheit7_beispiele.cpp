#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <cmath>
#include <list>
#include <time.h>  
using namespace std;



class Chessboard
{
    
    public:
    Chessboard(){};
    
    void printChessBoard(){

    std::cout <<"\n******************************\n" << std::endl;
    std::cout <<"CHESSBOARD\n"<<std::endl;
    for(int row= 0; row < 4; row++){
        for (int col = 0; col< 4; col++){
            std::cout<< chessBoard[row][col]<<" "; 
        
        };
        std::cout<<""<<std::endl;
    };
    std::cout <<"\n******************************\n" << std::endl;
    };
    
    void setChessboard(){
        for(int row = 0; row< 4; row++){
        for (int col = 0; col< 4; col++){
            chessBoard[row][col] = 0; 
        
        };
       
    };
    };

    int getValue(int row, int col){
        return chessBoard[row][col];
    }

    void setQueenToPosistion(int row, int col){
        chessBoard[row][col] = 1;
        



    };     
        
   
    private:

        int chessBoard[3][3];

};

class Queen
{
    public:
    Queen(){ };
    void setPositionQueen(int rowInput, int colInput){
        row = rowInput;
        col = colInput;

    };
    int getRow(){return row;};
    int getCol(){return col;};

    void setRow(int inputRow){row =inputRow;};
    void setCol(int inputCol){col = inputCol;};

    private:
        int row;
        int col;


};


int getPosition(){
    int i;
    cout<<"Give index (first:row, second:col)";
    cin>>i;
    return i;


}


int randomNumber(int len, int i ){
    int min = 1, max = len;
    int range = max - min;
    srand(i);
    double random = rand() / (double)RAND_MAX; // [0..1]
    int randomInRange = round(min + random * range);
    return randomInRange;
}




bool checkPositions(Chessboard* board){
    board->printChessBoard();
    for(int row = 0; row< 4; row++){
        int temp = 0;
        for (int col = 0; col< 4; col++){
            
            temp += board->getValue(row,col);

        };
       
       if (temp>1){return false;};
    
    };


    for(int row = 0; row< 4; row++){
        int temp2 = 0;
        for (int col = 0; col< 4; col++){
            
            temp2 += board->getValue(col,row);

        };
       
       if (temp2>1){return false;};
    
    };

    for(int row = 0; row< 4; row++){
        int temp = 0;
        for (int col = 0; col< 16-row; col+=5){
            
            temp += board->getValue(row,col);

        };
       
       if (temp>1){return false;};
    
    };

    for(int row = 0; row< 4; row++){
        int temp = 0;
        for (int col = 0; col< 16-row; col+=5){
            
            temp += board->getValue(col,row);

        };
       
       if (temp>1){return false;};
    
    };



     for(int row = 3; row>= 0; row++){
        int temp = 0;
        for (int col = 0; col< 16-row; col+=5){
            
            temp += board->getValue(row,col);

        };
       
       if (temp>1){return false;};
    
    };
     for(int row = 3; row>= 0; row++){
        int temp = 0;
        for (int col = 0; col< 16-row; col+=5){
            
            temp += board->getValue(col,row);

        };
       
       if (temp>1){return false;};
    
    };





    return true;

    }





 










void queenProblem(const int row, const int col ){
    
   

    auto queen1 = new Queen();
    queen1->setPositionQueen(row,col);
    auto queen2 = new Queen();
    auto queen3 = new Queen();
    auto queen4 = new Queen();
    auto *chessboard = new Chessboard();


    chessboard->setChessboard();
    chessboard->printChessBoard();

    chessboard->setQueenToPosistion(queen1->getRow(),queen1->getCol());
    chessboard->printChessBoard();


    for( int k = 0; k<4; k++){
        queen2->setRow(k);
        for( int j = 0;j<4; j++){
            queen2->setCol(j);
            chessboard->setQueenToPosistion(queen2->getRow(),queen2->getCol());
                        for( int k = 0; k<4; k++){
                        queen3->setRow(k);
                        for( int j = 0; j<4; j++){
                            queen3->setCol(j);
                            chessboard->setQueenToPosistion(queen3->getRow(),queen3->getCol());
                                        for( int k = 0; k<4; k++){
                                        queen4->setRow(k);
                                            for( int j = 0; j<4; j++){
                                                queen4->setCol(j);
                                                chessboard->setQueenToPosistion(queen2->getRow(),queen2->getCol());
                                                if(checkPositions(chessboard) == true) {std::cout <<"TRUE"<<std::endl; chessboard->printChessBoard();};
                                            };
                                        };

                                };
                        };


        };
    };


        };


    

    //checkPositions(chessboard);














// Programm benötigt txt datei und gewünschtes Programm, also zb:  .a.out input.txt 1 bzw a.exe input.txt 1
// um programm 1 (doppelte wörter) aufzurufen
int main(int argc, char* argv[]) {

    //string filename= argv[1];
    string command = argv[1];

    if (command == "queen") { 
        
        
        int row = getPosition();
        int  col = getPosition(); 
        queenProblem(row,col);



    
    }

    if (command == "2") { 
        cout<<2;
    }
    
    if (command == "3") {
        cout<<3;
    }
}