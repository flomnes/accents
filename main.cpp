#include <filesystem>
#include <iomanip>
#include <iostream>

namespace fs = std::filesystem;

int main()
{
    std::cout << std::boolalpha;
    {
        fs::path p("josé.txt");
        std::cout << "fs::path " << fs::exists(p) << std::endl;
    }
    {
        fs::path q = fs::u8path("josé.txt");
        std::cout << "fs::u8path " << fs::exists(q) << std::endl;
    }
}
