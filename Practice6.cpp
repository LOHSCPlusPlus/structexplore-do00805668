#include <iostream>
#include <string>
using namespace std;

//void changeSecond(Person &p, string second);

struct Person{
  string firstName;
  string secondName;
  Person();
  Person(string first, string second);
  void PrintPerson(string first, string second);
  //void changeSecond(Person &p, string second);
};

void changeSecond(Person &p, string second);

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
void changeSecond(Person &p, string second)
{
  p.secondName = second;
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

  changeSecond(p1, "Bobbi");

  p1.PrintPerson(p1.firstName, p1.secondName);
  p2.PrintPerson(p2.firstName, p2.secondName);

  changeSecond(p2, "Torvalds");

  p1.PrintPerson(p1.firstName, p1.secondName);
  p2.PrintPerson(p2.firstName, p2.secondName);


	return 0;
}
