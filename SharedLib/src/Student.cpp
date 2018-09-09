#include "Student.h"

using namespace std;
using namespace SharedLib;

Student::Student(string name){
    this->_name = name;
}

string Student::getName() const
{
    return this->_name;
}