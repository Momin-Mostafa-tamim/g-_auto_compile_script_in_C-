#include <iostream>
#define MaxChar 40
using namespace std; //using this because there is no other namespace.
int main(int argc, char *argv[])
{

    string filename;
    string command;
    string outputFileName;
    outputFileName = "./output"; //output file (if not "a", then add "./")
    // i/o file name :
    if (argc == 1)
    {
        filename = "main.cpp"; //file I want to compile.
    }
    else
    {
        filename = argv[1];
    }

    command = "g++ " + filename + " -o " + outputFileName;
    char cha[MaxChar]; // system() can't use string thats why I had to convert 'command' to array.
    for (int i = 0; i < MaxChar; i++)
    {
        cha[i] = command[i];
    }
    if (argc > 2)
    {
        system(cha);
    }
    else
    {
        system(cha);
        system("clear");
    }

    // executing the output file.
    char outputfilename[MaxChar];
    for (int i = 0; i < MaxChar; i++)
    {
        outputfilename[i] = outputFileName[i];
    }
    system(outputfilename);

    // //test case

    // cout << "\n this is test result : ";
    // for (int i = 0; i < MaxChar; i++)
    // {
    //     char test = outputfilename[i];
    //     cout << test;
    // }

    // //test case
    return 0;
}