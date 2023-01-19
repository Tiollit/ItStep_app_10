#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file3;
    string text;
    file3.open("file3.txt", ios::in);
    file3.open("file4.txt", ios::out);
    if (!file3.is_open())
    {
        perror("Log: ");
    }
    else
    {
        while (getline(file3, text))
        {
            cout << text << endl;
        }
        file3.close();
    }
    return 0;
}