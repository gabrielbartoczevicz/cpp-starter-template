
#include <initializer_list>
#include <stdio.h>

class App
{
public:
    void start() noexcept
    {
        const std::initializer_list<const char*> message { "Henlo", "from", "C/C++", "project", "template!" };

        for (auto const& m : message)
            printf("%s ", m);

        printf("\n");
    }
};

int main()
{
    static App app;
    app.start();
}
