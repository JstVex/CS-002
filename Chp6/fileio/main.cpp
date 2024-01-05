#include <iostream>
#include <fstream>
#include <cmath>
#include "functions.h"

int main()
{
    srand(time(0));
    std::ofstream fout;
//    fout.open("file.txt", std::ios::app);
//
//    if(fout.fail())
//    {
//       std::cout << "Cannot open file";
//        exit(1);
//    }

    if(openFile(fout, "file.txt"))
    {
        for(int i = 0; i < 100; i++)
        {
            fout << rand() << std::endl;
        }
    } else
    {
        std::cout << "Cannot open file";
        exit(1);
    }

    fout.close();

    // Read file
    std::ifstream fin;
    fin.open("file.txt");

    if(fin.fail())
        exit(34);

    int x;
    while (!fin.eof())
    {
        fin >> x;
        std::cout << x << std::endl;
    }

    fin.close();

    return 0;
}
