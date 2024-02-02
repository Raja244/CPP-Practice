#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main()
{
    int sVar = 0;

    if (fork() == 0)
    {
        cout << "Child 1: PID " << getpid() << ". Initial value: " << sVar << endl;
        sVar += 5;
        cout << "Child 1: Modified value: " << sVar << endl;
        exit(0);
    }

    if (fork() == 0)
    {
        cout << "Child 2: PID " << getpid() << ". Initial value: " << sVar << endl;
        sVar -= 3;
        cout << "Child 2: Modified value: " << sVar << endl;
        exit(0);
    }

    wait(nullptr);
    wait(nullptr);

    cout << "Parent: Both children finished. Final value: " << sVar << endl;

    return 0;
}
