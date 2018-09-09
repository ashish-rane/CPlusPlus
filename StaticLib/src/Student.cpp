#include "Student.h"

using namespace std;
using namespace StaticLib;

Student::Student(int age){
    this->_age = age;
}

int Student::getAge() const
{
    return this->_age;
}