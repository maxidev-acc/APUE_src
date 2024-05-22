#include <iostream>
#include <set>
#include <vector>
#include <fstream>


using namespace std;


class Comparison
{   
    public:


        Comparison(string& file1, string& file2)
            : fileName1(file1), fileName2(file2)
        {
        }

        void compareFiles(){
            parseTextFile(this->fileName1, file1ContentAsSet);
            parseTextFile(this->fileName2, file2ContentAsSet);
            compareWordSets();
            printMatchedWords();
        }



    private:
       



        void parseTextFile(string& filename, set<string>& targetSet){
            ifstream inputFile1 (filename);
            string word;
            cout<<"\n\n>Word of input file: "<< filename <<endl;
            while (inputFile1.eof() == false)
            {
                inputFile1 >> word;
                cout <<word <<" ";
                targetSet.insert(word);
            }
            inputFile1.close();

            
        } 

        void compareWordSets() {
            for(auto entryFile1: file1ContentAsSet){
                //cout<<entry<<endl;
                for(auto entryFile2 :file2ContentAsSet){
                    if(entryFile1 == entryFile2){
                        matchedWordsAsSet.insert(entryFile1);
                    }
                }
            }
        }

        void printMatchedWords(){
            cout<<"\n\n>>MATCHED WORDS:"<<endl;
            for (auto matchedWord : matchedWordsAsSet){
                    cout<< matchedWord<<endl;
            };
        }

        string fileName1;
        string fileName2;
        set<string> file1ContentAsSet;
        set<string> file2ContentAsSet;
        set<string> matchedWordsAsSet;




};







int main(int argc, char* argv[]){

 if(argc != 3){ cout<<"Too few textfiles."; return 0;};
 string file1 =  argv[1];
 string file2 =  argv[2];
 auto parser = new Comparison(file1,file2);
 parser->compareFiles();
 
 return 0;


}