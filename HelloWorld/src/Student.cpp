#include "Student.h"

using namespace std;
using namespace test;

Student::Student(string name){
    this->_name = name;
}

string Student::getName() const
{
    return this->_name;
}