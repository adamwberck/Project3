#include <iostream>
#include <cstdio>

#include <queue>
#include <list>
#include <cstring>
#include <malloc.h>
#include "helper.h"
#include <stdio.h>
#include <assert.h>

const char*  DEFAULT_DICTIONARY = "words.txt";

int main(int argc,char* argv[]) {
    assert(argc<=2);
    std::vector<char*> word_vector;
    FILE *file ;
    const char* dictionary = argc==1 ? DEFAULT_DICTIONARY : argv[1];
    file = fopen(dictionary, "r");
    read_file_as_vector(word_vector, file);

    std::queue<const char*> connect_queue;

    return 0;
}

