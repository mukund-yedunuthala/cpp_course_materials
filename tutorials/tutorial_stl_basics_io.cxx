#include <iostream>
#include <fstream>
void standard_output() {
    using std::cout;
    char c = 'a';
    int i = 4;
    double d = 2.3;
    cout << "Text " << 0.2 << " " << 3 << " " << 'c'
        << "\n" <<c << " " << i << " " << d << "\n"; 
    d = 3.1415;
    cout << std::scientific << d << std::endl;
    cout << std::fixed << d << std::endl;
    bool b = true;
    std::cout << std::boolalpha << b << std::endl;
    std::cout << std::noboolalpha << b << std::endl;
}

void file_output() {
    std::ofstream ofs("../out/text.txt");
    for (int i = 0; i < 5; i++)
    {
        ofs << i << " " << i+0.5 << "\n";
    }
    ofs.close();
}

int main() {
    standard_output();
    return 0;
}