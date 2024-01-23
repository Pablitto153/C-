
#include <iostream>
#include "my_class.hpp"

using namespace std;

int main() {

  People new_person("Pavel", "Abranin", 27, 82);
  cout << new_person.name << " " << new_person.surname << endl;
  cout << new_person.age << " years" << endl;
  cout << new_person.weight << " Kg" << endl;
}
