//
// Created by mandr on 2019-03-23.
//

#include "helper.h"

//finds newline char and replaces it with null terminator
void remove_newline_char(char **str){
    char *s = *str;//get pointer to char
    int i=0;
    //loop through string
    while(s[i]!='\0'){//stop looping when you get to null terminator
        //replace newline with null terminator
        if(s[i]=='\n'||s[i]=='\r'){
            s[i]='\0';
        }
        i++;
    }
}


void read_file_as_vector(std::vector<char *> &line_vector, FILE *file) {
    char line[256];
    fgets(line, 10, file);
    while(fgets(line, sizeof(line), file)){//keep going unless end of file
        char *input;
        input = static_cast<char *>(malloc(sizeof(char) * strlen(line)));
        sprintf(input,"%s", line);
        remove_newline_char(&input);
        line_vector.push_back(input);
    }
}