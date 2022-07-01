#include "foo.h"
#include <tuple>

foo::foo()
{
    secret1 = 1;
    secret2 = 2;
}

foo::~foo()
{
}

std::tuple<double, double> foo::return_thing(void) {
    return {secret1, secret2};
}