#include "functions.h"

int main() {
    std::ofstream fout;
    std::ifstream fin;
    char change;

    if(openFileInput(fin, "file.txt"))
    {
        std::string name;

        while (!fin.eof())
        {
            fin >> name;
        }

        std::cout << "Welcome back, " << name << std::endl;
        std::cout << "Do you want to change your name?: ";
        std::cin >> change;

        if (tolower(change) == 'y')
        {
            if(openFile(fout, "file.txt"))
            {
                enterName(name);
                fout << name << std::endl;
                fout.close();
            } else
            {
                std::cout << "Cannot open file";
                exit(2);
            }
        }
        fin.close();
    } else
    {
        if(openFile(fout, "file.txt"))
        {
            std::string name;
            enterName(name);
            fout << name << std::endl;
            fout.close();
        } else
        {
            std::cout << "Cannot open file";
            exit(1);
        }
    }
    return 0;
}
