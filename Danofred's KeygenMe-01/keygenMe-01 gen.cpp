#include <iostream>
#include <string>
#include <Windows.h>

std::string input = "";

std::string getEncrytKey(const char* a1)
{
    int v4 = strlen("tryHarderToMakeAGoodKeyGen");
    std::string res;
    for (size_t i = 0; i < strlen(a1); i++)
        res += *(uintptr_t*)(a1 + (v4 ^ *(char*)(a1 + i)) % strlen(a1));
    return res;
}

int main()
{
    std::cout << "Enter name\n";
    std::cin >> input;
    std::cout << "Here is your key: " << getEncrytKey(input.c_str()) << std::endl;
    system("pause");
}