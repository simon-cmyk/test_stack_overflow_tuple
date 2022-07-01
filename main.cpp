#include "foo.h"
#include <iostream>
//------------------------------------------------------------------------------'
using namespace std;

int main()
{
    foo Foo = foo();
    auto [s1, s2] = Foo.return_thing();
	cout << s1 << " " << s2 << endl;
}

//------------------------------------------------------------------------------
