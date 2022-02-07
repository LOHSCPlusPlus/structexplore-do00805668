#include <iostream>
#include <string>
using namespace std;

struct Person{
  string firstName;
  string secondName;
  Person();
  Person(string first, string second);
  void PrintPerson(string first, string second);
};

Person::Person(){
  firstName = "unknown";
  secondName = "unknown";

}
Person::Person(string first, string second){
  firstName = first;
  secondName = second;

}

void Person::PrintPerson(string first, string second)
{
  cout << "First name is: " << first << ", ";
  cout << "Second name is: " << second << endl;
}

int main() {
	Person p1;
  Person p2("Charlie", "Brown");

  //cout << p1.firstName << " " << p1.secondName << endl;
  //gcout << p2.firstName << " " << p2.secondName << endl;

  p1.firstName = "Dorian";
  p1.secondName = "Gray";
  //p2.firstName = "Charlie";
  //p2.secondName = "Brown";

  p1.PrintPerson(p1.firstName, p1.secondName);
  p2.PrintPerson(p2.firstName, p2.secondName);




	return 0;
}
