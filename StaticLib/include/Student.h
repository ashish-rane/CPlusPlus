#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>

namespace StaticLib
{
    class Student
    {
        private:
            int _age;

        public :
            Student(int age);

            int getAge() const;
    };
}

#endif
