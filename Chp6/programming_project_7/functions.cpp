//
// Created by Hein Htet Lu Lu on 20/11/2023.
//

#include "functions.h"

void run()
{
    int size = 20;
    std::string arr[size], filename = "file.txt";
    std::ifstream fin;
    getAnswers(fin, filename, arr, size);
    output("Ask a question");
    getInput();
    output(getRandomAnswer(arr, size));
}

bool openFile(std::ifstream &fin, const std::string &filename)
{
    fin.open(filename);
    return !fin.fail();
}

void getAnswers(std::ifstream &fin, const std::string &filename, std::string arr[], int size)
{
    assert(getLineCount(fin, filename) < size);
    if(openFile(fin, filename))
    {
        std::string next;
        int i = 0;
        while(getline(fin, next))
        {
            arr[i] = next;
        }
        fin.close();
    }
}

std::string getRandomAnswer(const std::string arr[], int size)
{
    return arr[rand() % size];
}

std::string getInput()
{
    std::string string;
    std::cin >> string;
    return string;
}

void output(const std::string &message)
{
    std::cout << message << std::endl;
}

int getLineCount(std::ifstream &fin, const std::string &filename)
{
    assert(openFile(fin, filename));
    int count = 0;
    std::string next;
    while(getline(fin, next))
    {
        count++;
    }
    fin.close();
    return count;
}

void replaceChapterNumber(std::string &sentence, int chapter)
{
    std::string s;
    for(int i; i < sentence.size(); i++)
    {
        if(i < sentence.size() -1 && sentence[i] == '#' && sentence[i + 1] == 'N')
        {
            s += std::to_string(chapter);
            ++i;
        }
        else
        {
            s += sentence[i];
        }
    }
}