#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    fstream file;
    char inf[256];
    //char* nt = new char;
    char text[256];
    //const char *S = "!?.,;/*-+\n\t";
    //char* word = 0;
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
        file.close();
    }

    fstream file2;    
    file.open("file.txt", ios::in);
    file2.open("file2.txt", ios::out);
    //if (!file.is_open())
    //{
    //    perror("Log: ");
    //}
    //else
    //{
    //    while (getline(file, text))
    //    {
    //        strcpy(nt, text.c_str());
    //        word = strtok(nt, S);   //(char*)text.c_str()
    //        while (word)
    //        {
    //            if (strlen(word) > 7)
    //            {
    //                file2 << word << " ";
    //            }
    //            word = strtok(0, S);
    //        }
    //    }        
    //}
    for (file >> text; !file.eof(); file >> text)
    {
        if (strlen(text) > 7)
        {
            file2 << text << " ";
        }
    }
    file.close();
    file2.close();
    return 0;
}