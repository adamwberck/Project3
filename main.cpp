#include <iostream>
#include <cstdio>

#include <queue>
#include <list>
#include <cstring>
#include <malloc.h>
#include "helper.h"

const char*  DEFAULT_DICTIONARY = "words.txt";
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::queue<const char*> test_q;
    std::vector<char*> word_list;
    test_q.push("test1");
    std::cout << test_q.front() << std::endl;
    test_q.pop();

    FILE *file ;
    char line[256];
    file = fopen(DEFAULT_DICTIONARY, "r");
    fgets(line, sizeof(line), file);
    do{
        char *input;
        input = static_cast<char *>(malloc(sizeof(char) * strlen(line)));
        sprintf(input,"%s", line);
        remove_newline_char(&input);
        word_list.push_back(input);
    }while(fgets(line, sizeof(line), file));//keep going unless end of file
    for(char* word : word_list){
        std::cout << word << std::endl;
    }

    return 0;
}