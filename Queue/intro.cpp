#include <iostream>
#include <queue>
using namespace std;

int main()
{

    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    if (d.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }

    // create a queue
    /*
    queue<int> q;

    q.push(11);
    cout << "front of q is: " << q.front() << "\n";
    q.push(15);
    cout << "front of q is: " << q.front() << "\n";
    q.push(13);
    cout << "front of q is: " << q.front() << "\n";

    cout << "Size of queue is : " << q.size() << "\n";

    q.pop();
    q.pop();
    q.pop();

    cout << "Size of queue is : " << q.size() << "\n";

    if (q.empty())
    {
        cout << "Queue is empty "
             << "\n";
    }
    else
    {
        cout << "Queue is not empty "
             << "\n";
    }

    */

    return 0;
}