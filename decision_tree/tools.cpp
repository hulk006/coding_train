//
// Created by yh on 17-9-5.
//
#include "tools.h"
void splitString( const std::string &input,char *split,std::vector<std::string> &output)
{
    output.clear();
    std::vector<std::string> input_split;
    char temp[1024];
    strcpy(temp,input.c_str());
    char *tmpStr = strtok(temp, split);
    while(tmpStr!=NULL)
    {
        input_split.push_back(std::string(tmpStr));
        tmpStr = strtok(NULL, split);
    }
    output = input_split;
}