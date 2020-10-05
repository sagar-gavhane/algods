// https://leetcode.com/problems/implement-stack-using-queues/
#include <iostream>
#include <queue>

using namespace std;

class QueueStack
{
public:
  int cur_size;
  queue<int> q1, q2;

  void push(int value)
  {
    cur_size++;

    q2.push(value);

    while (!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }

    // swap
    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
  }

  void pop()
  {
    if(q1.empty()) {
      return;
    }

    q1.pop();
    cur_size--;
  }

  int peek()
  {
    return q1.front();
  }

  bool empty()
  {
    return q1.empty();
  }

  void print() {
    queue<int> current = q1;

    while (!current.empty())
    {
      cout << current.front() << endl;
      current.pop();
    }
  }
};

// queue -> LIFO
int main()
{
  QueueStack qs;
  qs.push(10);
  qs.push(20);
  qs.push(30);
  qs.print();
  printf("------\n");
  qs.pop();
  qs.push(40);
  qs.print();
  printf("------\n");
  qs.pop();
  qs.print();
}

// [10,20,30]
// pop -> 30 [10,20]
// push -> 40 [10,20,40]
// pop -> [10, 20]
