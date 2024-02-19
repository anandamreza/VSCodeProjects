#include <iostream>

// Function Template = Describes what a function looks like. It can be used to
//                     generate as many overloaded functions as needed, each
//                     using different data types.

//                     Ex: "it's like a cookie-cutter..."
//                     "Cookies are the same shape, but the dough used can be different"

// Advantage = We only need to write the function once and it's compatible with different
//             data types so you don't need different version of the same function.

template <typename T, typename U> // Each typename can hold different data types.
auto max (T x, U y){              // This one can hold up to 2 different data types.
    return (x > y) ? x : y;
}

int main() {
    std::cout<<max('1', 3.1)<<'\n';

    return 0;
}