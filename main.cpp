#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file5, file6;
    string text;
    file5.open("file5.txt", ios::in);
    file6.open("file6.txt", ios::out);
    if (!file5.is_open())
    {
        perror("Log: ");
    }
    else
    {
        while (getline(file5, text))
        {
            file6 << text << endl;
        }
        file5.close();
        file6.close();
    }
    return 0;
}