

#include <iostream>
#include <type_traits>

using namespace std;

int cpp_version() {
    std::cout << "__cplusplus: " << __cplusplus << std::endl;

    // Additional readability for C++ versions
    if (__cplusplus == 199711L) std::cout << "C++98 or C++03" << std::endl;
    else if (__cplusplus == 201103L) std::cout << "C++11" << std::endl;
    else if (__cplusplus == 201402L) std::cout << "C++14" << std::endl;
    else if (__cplusplus == 201703L) std::cout << "C++17" << std::endl;
    else if (__cplusplus >= 202002L) std::cout << "C++20 or later" << std::endl;

    return 0;
}



// template <typename T, std::enable_if_t<!std::is_same_v<T, float>, int> = 0>
// void foo(T x) {
//     std::cout << x << std::endl;
// }

// Allow only int and bool
// void foo(int x) {
//     std::cout << x << std::endl;
// }
// void foo(bool x) {
//     std::cout << x << std::endl;
// }

// // Delete all other overloads
// template <typename T>
// void foo(T) = delete;

template <typename T>
void foo(T x) {
    static_assert(!is_floating_point_v<T>, "Floating-point types are not allowed!");
    cout << x << endl;
}

int main() {

    cpp_version();

    foo(5);        // Works, int
    foo(true);     // Works, bool
    //  foo(5.0f);  // Error: no matching function for call to 'foo'

    return 0;
}

