#include <iostream>
#include <set>
#include <vector>


using namespace std;




bool validateInputArgument(int argc){
    if(argc>1){
        return true;
    }
    else{
        return false;
    }
}

void print(const string& printString){
    cout<<printString<<endl;
}


class ORF
{ 

    public:
        ORF(){};

        void addStartStopTupleToORF1(int start, int stop){
            auto newTuple = make_tuple(start, stop);
            orfTupleSet.insert(newTuple);
        }

        string getStartCodon(){return startCodon; }

        set<string> getStopCodons() {
            return stopCodons;
        }

        set<tuple<int, int> > getTuples(){
            return orfTupleSet;
        }
       

        private:



        std::string startCodon = "AUG";
        set<string> stopCodons = {"UAG", "UGA", "UAA"};
        set<tuple<int, int> > orfTupleSet;
       
        




};


class RnaSequence
{ 

    public:
        RnaSequence(string& inputSequence)
            :  rnaSequenceAsString(inputSequence)
        {   
        }
        

        bool validateSequenceInput() {
            for (auto nuc: rnaSequenceAsString){
                if(rnaNucleotides.count(nuc) !=1){
                    return false;
                }
            };
            print("Input validated. ORF Finding will be performed...");
            return true;
        }
        


    void findORFs(){
        int len = rnaSequenceAsString.length();
        cout <<"Sequence lenght: " << len<<endl;
        for(int index = 0; index < len; index ++){
                //cout << index<< " " << rnaSequenceAsString.substr(index, 3)<<endl;
                auto Stop = orf.getStopCodons();
                if(rnaSequenceAsString.substr(index,3) == orf.getStartCodon()){
                for(int subindex = index; subindex<len; subindex+=3){  
                    if (Stop.count(rnaSequenceAsString.substr(subindex,3)) != 0)
                        {   
                        orf.addStartStopTupleToORF1(index,subindex);
                        break;
                        }
                    };      
                };
        }
        
    
    
    
    }

    void printORFs(){
        print("\nOrignal Sequence:");
        print(rnaSequenceAsString);
        print("");
        for (auto tuple1: orf.getTuples() ){
            int start =  get<0>(tuple1);
            int stop =  get<1>(tuple1);

            for(int k = 0; k<start; k++){
                cout<<"-";
            }
            cout<<rnaSequenceAsString.substr(start,stop-start+3)<<endl;
            for(int k = 0; k<start; k++){
                cout<<" ";
            }
            cout<<start;
    
            for(int k = 0; k<stop-start; k++){
                cout<<" ";
            }
            cout<<stop<<endl;
        }


    }


    private:
        string rnaSequenceAsString; 
        ORF orf;
        set <char> rnaNucleotides{'A', 'C', 'G', 'U'};
        

};









int main(int argc, char* argv[]){

     
    if (!validateInputArgument(argc)) {
        print("No input was given. Program will terrminate now.");
        return 0;
    };

    string commandLineArg = argv[1];
    auto newRnaSequence = new RnaSequence(commandLineArg);

    
    if(!newRnaSequence->validateSequenceInput()){
        print("Sequnce Input contains unspecified Chars. Program will terrminate now.");
        return 0;
    };

    newRnaSequence->findORFs();
    newRnaSequence->printORFs();
    






    
    return 0;
}






