#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>

namespace SharedLib
{
    class Student
    {
        private:
            std::string _name;

        public :
            Student(std::string name);

            std::string getName() const;
    };
}

#endif
