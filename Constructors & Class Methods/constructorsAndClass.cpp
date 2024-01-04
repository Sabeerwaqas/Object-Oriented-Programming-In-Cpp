#include <iostream>
#include <list>

using namespace std;

    
	class personData {
		
		// We need to put public access modifier to use these member commonly.
		
		public:
		
		// Members of class
		
		string name;
		int age;
		string profession;
		list <string> idealFood;	
		
		
	};


int main(){

	/*
	
	What is OOP?
	
	OOP is a programming paraadigm that allow us to represent real life objects
	in programming.
	
	*/	

	personData firstCandidate;
	
	firstCandidate.name = "Mr. XYZ";
	firstCandidate.age = 25;
	firstCandidate.profession = "Lecturer";
//	firstCandidate.idealFoods = {"Biryani", "Chicken Karahi"};


	cout << "Name: " << firstCandidate.name << endl;
	cout << "Age: " << firstCandidate.age << endl;
	cout << "Profession: " << firstCandidate.profession << endl;
//	cout << "Ideal Foods: " << firstCandidate.idealFood << endl;
//	for(string ideal_food: firstCandidate.idealFood	){
//		cout << ideal_food << endl;
//	}



    return 0;
}
