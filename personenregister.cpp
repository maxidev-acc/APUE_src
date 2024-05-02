#include <iostream>
using namespace std;






class Person
{


private:

    string name;
    int age;
    int birthYear;
    string sex;
public:
 Person(string name, int age, int birthYear, string sex) : name(name), age(age), birthYear(birthYear), sex(sex) {}  


 void printPersonData()
 {
 cout << "Person Info:  name: "+ name  +  ", age: "+ to_string(age) + ", birthYear: " + to_string(birthYear) +  ", sex:" +sex  << endl;
 }
 int getPersonAge(){
    return age;

 }
 string getFirstName() { return name;}

 int getPersonBirthyear(){
    return birthYear;

 }



};



class PersonRegister

    {
        private:
            int id;
            int size = 5;
            Person* registerArray[5];


        public:
             PersonRegister(int id) : id(id) {} 

             void initComplete(){ cout<< "Intitialization complete. Register with id " +to_string(id) + " ready." <<endl;} 
             void addPersonToRegister(Person *newPerson, int index) {
                cout <<"Add person to register: " + newPerson->getFirstName() <<endl;
                  
                  registerArray[index] = newPerson;

             }   
             
             void printRegister(){
                cout<<"Print full Register"<<endl;
                for (auto p : registerArray)
                {   
                    if(p != nullptr){ 
                    p->printPersonData();};
                    
                };


             }   

             void sortRegister(){
                int n =5;
               
                cout<<"Sort  Register"<<endl;
                { 
                int i, j; 
                for (i = 0; i < n - 1; i++) 
                    for (j = 0; j < n - i - 1; j++) 
                        if (registerArray[j] ->getPersonBirthyear() > registerArray[j + 1]->getPersonBirthyear()) 
                            swap(registerArray[j], registerArray[j + 1]); 
                        } 
                        }

            void printPersonsWithBirthYear(int year){
                cout<<"Persons with BirthYear"<<endl;
                for (auto p : registerArray)
                {   

                    if(p->getPersonBirthyear() == year){ p->printPersonData();};
                    
                };

            }
    

    };





int main() {

    PersonRegister newRegister = PersonRegister(1);
    newRegister.initComplete();
    Person *kate = new Person("Kate", 18, 2006, "f");
    Person *maxi = new Person("maxi", 19, 2000, "m");
    Person *leo = new Person("Leo", 20, 1988, "m");
    Person *moritz = new Person("Moritz", 23, 2002, "m");
    Person *arnold = new Person("Arnold", 25, 2002, "m");

    newRegister.printRegister();

    //initTestPersons();
    newRegister.addPersonToRegister(kate,0);
    newRegister.addPersonToRegister(maxi,1);
    newRegister.addPersonToRegister(leo,2);
    newRegister.addPersonToRegister(moritz,3);
    newRegister.addPersonToRegister(arnold,4);
    newRegister.printRegister();
    newRegister.sortRegister();
    newRegister.printRegister();
    newRegister.printPersonsWithBirthYear(2002);
    return(0);

}