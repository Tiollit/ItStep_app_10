#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    int p = 0, i = 0, A[5];
    char nt[100];
    fstream file5, file6;
    string text;     
    file5.open("file5.txt", ios::in);
    file6.open("file6.txt", ios::out);  // Очищаємо старий файл
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
            cout << text;
            strcpy(nt, text.c_str());
            A[i] = strlen(nt);
            i += 1;
            cout << " " << A[i];
        }
        file5.seekg(0, ios_base::end);
        getline(file5, text);
        strcpy(nt, text.c_str());

        file6 << text << endl;
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