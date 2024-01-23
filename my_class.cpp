#include "my_class.hpp"
#include <iostream>

using namespace std;

People::People(string new_name, string new_surname, int new_age, int new_weight)
: name(new_name),surname(new_surname), age(new_age), weight(new_weight) {}
