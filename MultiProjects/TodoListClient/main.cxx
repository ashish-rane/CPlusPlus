#include "TodoList.h"

#include <iostream>

using namespace std;
using namespace TodoListComponent;

void main (int argc, char* argv[])
{
    cout << "Test Client : Todo List Library" << endl;

    TodoList todos;
    todos.addTask("First Task");
    todos.addTask("Second Task");

    cout << "Index 0 : " << todos.getTask(0) << endl;
    cout << "Index 1 : " << todos.getTask(1) << endl;

    char c;
    cin >> c;
}
