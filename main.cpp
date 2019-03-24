#include <iostream>
#include <cstdio>

#include <queue>
#include <list>
#include <cstring>
#include <malloc.h>
#include "helper.h"
#include <stdio.h>

const char*  DEFAULT_DICTIONARY = "words.txt";

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::queue<const char*> test_q;
    std::vector<char*> word_vector;
    test_q.push("test1");
    std::cout << test_q.front() << std::endl;
    test_q.pop();

    FILE *file ;
    file = fopen(DEFAULT_DICTIONARY, "r");
    read_file_as_vector(word_vector, file);
    for(char* word : word_vector){
        std::cout << word << std::endl;
    }

    return 0;
}

