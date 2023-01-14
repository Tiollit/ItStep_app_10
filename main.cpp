#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    string text;
    file.open("file.txt", ios::out);
    if (!file.is_open())
    {
        perror("Log: ");
    }
    else
    {
        get_s()
        file.close();
    }
    return 0;
}