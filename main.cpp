#include <cstring>
#include <filesystem>
#include <iomanip>
#include <iostream>

#define FILENAME "josé.txt"

namespace fs = std::filesystem;

fs::path myu8path(const char* s)
{
    std::u8string u8s(s, s + std::strlen(s));
    return fs::path(u8s);
}

int main()
{
    std::cout << std::boolalpha;
    {
        fs::path p(FILENAME);
        std::cout << "fs::path " << fs::exists(p) << std::endl;
    }
    {
        fs::path q = fs::u8path(FILENAME);
        std::cout << "fs::u8path " << fs::exists(q) << std::endl;
    }
    {
        fs::path q = fs::path(myu8path(FILENAME));
        std::cout << "myu8path " << fs::exists(q) << std::endl;
    }
}
