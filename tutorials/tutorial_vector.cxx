#include <iostream>
#include <vector>
#include <string>
using ivec = std::vector<int>;
using svec = std::vector<std::string>;
void print_vec(ivec const& v) {
    // call by reference for vector
    std::cout << "Element: " << v[4] << " size of v is: "
        << v.size() << "\n";
} 

void vector_manip() {
    ivec vi1 {2,3,4,3,2,1};
    ivec vi2 {vi1}; // copy constructor
    ivec vi3 = {vi1.begin(), vi1.end()}; // range c'tor
    ivec vi4 = vi1; // copy assignment
    print_vec(vi4);
}


void loop_vector() {
    svec sv {}; 
    sv.push_back("Text no 1");
    sv.push_back("Text no 2");
    sv.push_back("Text no 3");
    // Former state-of-the-art C++
    for (auto p = sv.begin(); p != sv.end(); ++p)
        (*p).erase(5,3);
    for (int i = 0; i < sv.size(); ++i) 
        std::cout << " String " << i << " is now \"" << sv[i] << "\"\n";
    // C++ 11
    for (auto& p : sv)
        p.erase(1,3);
    for (int i = 0; i < sv.size(); ++i)
        std::cout << " String " << i << " is now \"" << sv[i] << "\"\n";
}

int main() {
    vector_manip();
    loop_vector();
    return 0;
}