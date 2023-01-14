#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    ofstream file;
    string inf;
    cout << "Insert Text to a File" << endl;
    gets_s(inf);
    file.open("file.txt", ios::out);
    if (!file.is_open())
    {
        perror("Log: ");
    }
    else
    {
        file << inf << endl;        
    }

    return 0;
}