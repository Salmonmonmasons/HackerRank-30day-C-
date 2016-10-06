/*
You are given two classes, Person and Student, where Person is the base class
and Student is the derived class. Completed code for Person and a declaration
for Student are provided for you in the editor. Observe that Student inherits
all the properties of Person.
*/
#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
  		// Write your constructor
        Student(string firstName,string lastName,int ID, vector<int> scores) : Person(firstName,lastName,ID)
            {
                this->testScores = scores;
            }


  	// Write char calculate()
    char* calculate()
    {
        int average = 0;
        for(int i = 0; i < testScores.size(); i++)
        {
            average = average + testScores[i];
        }
        average = average / testScores.size();

        if(average >= 90)
        {
            return "O";
        }
        if(average>=80)
        {
            return "E";
        }
        if(average>=70)
        {
            return "A";
        }
        if(average>=55)
        {
            return "P";
        }
        if(average>=40)
        {
            return "D";
        }
        else
        {
            return "T";
        }
    };

};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
