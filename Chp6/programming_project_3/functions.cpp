//
// Created by Hein Htet Lu Lu on 25/11/2023.
//

#include "functions.h"

void chp6ProgrammingProject3()
{
    std::ifstream fin;
    std::ofstream fout;
    std::string name;

    fin.open("input.txt");
    fout.open("output.txt");

    if(fin.fail())
    {
        std::cout << "Cannot open file";
        exit(1);
    }

    if(fout.fail())
    {
        std::cout << "Cannot open file";
        exit(2);
    }

    fout << "Output Explanation:\n"
         << "Each line contains a student’s last name, first name, and ten or fewer quiz scores.\n"
         << "If there are fewer than ten quiz scores, the missing scores are considered as 0.\n"
         << "The last number on each line is the average score.\n\n";

    computeAverage(fin, fout);
    fin.close();
    fout.close();

    copyOutputToInput("input.txt", "output.txt");

    std::cout << "Averages calculated and written to output.txt, and the contents are copied to input.txt\n";

}

void computeAverage(std::ifstream &fin, std::ofstream &fout)
{
    std::string lastName, firstName;
    int quizScore;
    double average;

    while (fin >> lastName >> firstName)
    {
        average = 0.0;

        fout << lastName << " " << firstName;

        int numScores = 0;
        for (int i = 0; i < 10; ++i) {
            if (fin >> quizScore)
            {
                fout << " " << quizScore;
                average += quizScore;
                numScores++;
            } else
            {
                fout << " " << "0";
            }
        }

        average /= numScores;

        fout << " " << average << std::endl;
    }
}

void copyOutputToInput(const std::string &inputFileName, const std::string &outputFileName)
{
    std::ifstream src(outputFileName);
    std::ofstream dest(inputFileName);

    std::string line;
    while (std::getline(src, line))
    {
        dest << line << '\n';
    }
    src.close();
    dest.close();
}