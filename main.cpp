#include <algorithm>
#include <iostream>
#include <vector>

void repro(std::vector<std::int64_t>& output)
{
    int32_t input[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto len = sizeof(input) / sizeof(int32_t);
    output.resize(len);
    std::transform(input,
                   input + len,
                   output.begin(),
                   [](int32_t x) -> std::int64_t { return static_cast<std::int64_t>(x); });
    for (auto x: output)
    {
        std::cout << x << std::endl;
    }
}

int main()
{
    std::vector<std::int64_t> output;
    repro(output);
}
