#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    vector<string> tasks;

public:
    // Add a task to the list
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added: " << task << endl;
    }

    // Remove a task from the list by index
    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            cout << "Task removed: " << tasks[index] << endl;
            tasks.erase(tasks.begin() + index);
        } else {
            cout << "Invalid task index!" << endl;
        }
    }

    // Display all tasks
    void displayTasks() const {
        if (tasks.empty()) {
            cout << "No tasks to display." << endl;
        } else {
            cout << "To-Do List:" << endl;
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    }
};

int main() {
    ToDoList myToDoList;
    int choice;
    string task;
    int index;

    do {
        // Display the menu
        cout << "\nTo-Do List Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Remove Task" << endl;
        cout << "3. Display Tasks" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the buffer

        switch (choice) {
            case 1:
                cout << "Enter the task to add: ";
                getline(cin, task);
                myToDoList.addTask(task);
                break;
            case 2:
                cout << "Enter the task number to remove: ";
                cin >> index;
                cin.ignore(); // Ignore the newline character left in the buffer
                myToDoList.removeTask(index - 1);  // Adjust index to 0-based
                break;
            case 3:
                myToDoList.displayTasks();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

