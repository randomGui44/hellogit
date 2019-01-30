#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	/*Demonstartes use of vectors*/

	int counter = 1;
	int num;
	
	vector <int> numbers;
	
	while(counter <= 6){
		numbers.push_back(counter);
		counter++;
	}/*End While*/
	
	cout << "Number of elements in the vector = " << numbers.size();
	
	while(counter <= 6){
		numbers.pop_back(counter);
		counter++;
	}/*End While*/
	
	
	/*Demonstrates use of strings*/
	
	cout << "Number of elements in the vector after pop = " << numbers.size();
	
	string name = "Mike"
	string name2 = "Ross"
	
	cout << name + " " + name2 + << " is a lawyer"<<;
	
	/*Prints each letter from the string 'name'*/
	for(char letter : name)
		cout << letter;
	
	/*Demonstrates the use of 'auto'*/
	
	for(auto counter2 : numbers)
		cout<<counter2;
	
}/*End Main*/
