#include <initializer_list>
#include <stdio.h>

class App
{
public:
  void start() noexcept
  {
    const std::initializer_list<const char *> message{"Henlo", "World", "\n"};

    for (auto const &m : message)
    {
      printf("%s ", m);
    }
  }
};

int main()
{
  static App app;
  app.start();
}
