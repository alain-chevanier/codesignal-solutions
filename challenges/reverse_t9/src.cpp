#include <iostream>
#include <string>
#include <cstring>

#define SIZE 255
#define INPUT 1600
#define OUTPUT 1600

using namespace std;

string reverse_t9(string keys) {
    char mapping[SIZE];
    for(int i=0; i<SIZE; i++) mapping[i]=0;
    mapping['2'] = 'a';
    mapping['3'] = 'd';
    mapping['4'] = 'g';
    mapping['5'] = 'j';
    mapping['6'] = 'm';
    mapping['7'] = 'p';
    mapping['8'] = 't';
    mapping['9'] = 'w';
    
    char input[INPUT];
    char output[OUTPUT];
    strcpy(input, keys.c_str());

    char* head = input;
    char current = 0;
    int pos = 0, count = 0;
    while(*head != '\0') {
        if(*head != current && current!=' ' && current) {
            output[pos++] = mapping[current] + count - 1;
            count = 0;
            current = *head;
        }
        else {
            current = *head;
            count++;
        }
        
        head++;
    }
}
