git#include <iostream>
#include <string>
using namespace std;

struct Person{
  string firstName;
  string secondName;
};






int main() {
	Person p1;
  Person p2;

  p1.firstName = "Dorian";
  p1.secondName = "Gray";
  p2.firstName = "Charlie";
  p2.secondName = "Brown";

  cout << p1.firstName << " " << p1.secondName << endl;
  cout << p2.firstName << " " << p2.secondName << endl;






	// Add the prints here




	return 0;
}
