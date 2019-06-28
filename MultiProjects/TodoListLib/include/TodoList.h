#ifndef _TODO_H_
#define _TODO_H_

#include "TodoListLib.h"

#include <string>
#include <vector>

namespace TodoListComponent
{
    class TodoListLib_API TodoList
    {
        public:
            TodoList();
            ~TodoList();

            void addTask(const std::string& task);
            std::string getTask(size_t index) const;
        
        private:
            std::vector<std::string> m_tasks;

    };
} // TodoListComponent



#endif