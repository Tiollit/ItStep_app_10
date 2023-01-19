#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file3, file4;
    string text;
    file3.open("file3.txt", ios::in);
    file4.open("file4.txt", ios::out);
    if (!file3.is_open())
    {
        perror("Log: ");
    }
    else
    {
        while (getline(file3, text))
        {
            file4 << text << endl;
        }
        file3.close();
        file4.close();
    }
    return 0;
}