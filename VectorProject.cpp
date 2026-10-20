#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> highPriorityTasks = {"Finish project", "Call mom"};
    vector<string> mediumPriorityTasks = {"Clean room", "Do laundry"};
    vector<string> lowPriorityTasks = {"Watch TV", "Play video games"};

    for (const string &hTask : highPriorityTasks)
    {
        cout << "High priority tasks: " << hTask << endl;
    }

    for (const string &mTask : mediumPriorityTasks)
    {
        cout << "Medium priority tasks: " << mTask << endl;
    }
    for (const string &lTask : lowPriorityTasks)
    {
        cout << "Low priority tasks: " << lTask << endl;
    }

    while (!highPriorityTasks.empty() || !mediumPriorityTasks.empty() || !lowPriorityTasks.empty())
    {
        if (!highPriorityTasks.empty())
        {
            cout << "HIGH PRIORITY TASK: " << highPriorityTasks.front() << endl;
            highPriorityTasks.erase(highPriorityTasks.begin());
        }
        else if (!mediumPriorityTasks.empty())
        {
            cout << "MEDIUM PRIORITY TASK: " << mediumPriorityTasks.front() << endl;
            mediumPriorityTasks.erase(mediumPriorityTasks.begin());
        }
        else if (!lowPriorityTasks.empty())
        {
            cout << "LOW PRIORITY TASK: " << lowPriorityTasks.front() << endl;
            lowPriorityTasks.erase(lowPriorityTasks.begin());
        }
        else
        {
            cout << "All tasks have been completed" << endl;
        }
    }

    return 0;
}