#include "TodoList.h"

using namespace std;
using namespace TodoListComponent;

TodoList::TodoList(){

}

TodoList::~TodoList()
{

}

void TodoList::addTask(const string& task )
{
    m_tasks.push_back(task);
}

string TodoList::getTask(size_t index ) const
{
    if (index > m_tasks.size())
    {
        return "";
    }
    else
    {
        return m_tasks[index];
    }
}
