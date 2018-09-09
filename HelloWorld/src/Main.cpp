#include "Student.h"

#include <iostream>

using namespace test;

int main(int argc, char* argv[])
{
    std::cout << "Hello World !" << std::endl;
    Student* student = new Student("Ashish");

    std::cout << " Hello " << student->getName() << std::endl;

    delete student;
    return 0;
}