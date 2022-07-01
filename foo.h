#pragma once

#include <tuple>

class foo
{
private:
    double secret1;
    double secret2;
public:
    foo();
    ~foo();
    std::tuple<double, double> return_thing(void);
};


