#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    string text;
    file.open("file.txt", ios::in);
    if (!file.is_open())
    {
        perror("Log: ");
    }
    else
    {
        while (getline(file, text))
        {
            cout << text << endl;
        }
        file.close();
    }
    return 0;
}