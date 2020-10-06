// https://leetcode.com/problems/moving-average-from-data-stream
#include <iostream>
#include <queue>

using namespace std;

class MovingAverage
{
public:
  int size;
  double sum;
  queue<int> buffer;

  MovingAverage(int size)
  {
    this->size = size;
    sum = 0;
  }

  double next(int value)
  {
    if (buffer.size() == size)
    {
      sum -= buffer.front();
      buffer.pop();
    }

    buffer.push(value);

    sum += value;

    return (double)sum / buffer.size();
  }
};

int main()
{
  MovingAverage m(3);

  cout << m.next(3) << endl
       << m.next(5) << endl
       << m.next(7) << endl
       << m.next(6) << endl;
  return 0;
}
