#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"



char randchar(){
    char randomLetter = 'A' + rand() % 26;

    return randomLetter;
}

