#include <iostream>
#include <vector>
#include <string>

using namespace std;

class App
{
private:
  vector<string> message;

public:
  void start()
  {
    message = {"Henlo", "from", "C/C++", "project", "template!"};

    for (const string &m : message)
    {
      cout << m << " ";
    }

    cout << endl;
  }
};

int main()
{
  App app;

  app.start();
}
