#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int position;
    fstream file5, file6;
    string text; 
    char nt[255];
    file5.open("file5.txt", ios::in);
    file6.open("file6.txt", ios::out);  // ������� ������ ����
    file6.close();
    file6.open("file6.txt", ios::app);
    if (!file5.is_open())
    {
        perror("Log: ");
    }
    else
    {
        while (getline(file5, text))
        {
            cout << text << endl;
            position = file6.tellp();
            strcpy(nt, text.c_str());            
            file6.seekp(position - strlen(nt));
            file6 << text << endl;
        }
        file5.close();
        file6.close();
    }
    cout << endl;
    cout << endl;
    cout << "New File is:" << endl;
    file6.open("file6.txt", ios::in);
    if (!file6.is_open())
    {
        perror("Log: ");
    }
    else
    {
        while (getline(file6, text))
        {
            cout << text << endl;            
        }        
        file6.close();
    }
    return 0;
}