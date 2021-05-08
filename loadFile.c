//
// Created by Hildibjorg on 23.04.2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
    FILE *infile;
    int c;
    char input[100] = "";

    printf("Enter a file name:\n");
    // Test path: C:\\Users\\Hildibjorg\\Desktop\\Deck.txt

    //scans and saves the given filepath
    scanf("%s",&input);

    //opens the file and saves the content in input
    infile = fopen(input, "r");

    //Print error message if loading the file fails
    if(infile == NULL){
        printf("Error in opening file");
        return(-1);
    }

    // prints the content of the given file:
    while(1) {
        c = fgetc(infile);
        if(feof(infile)){
            break;
        }
        printf("%c",c);
    }


    fclose(infile);
    return(0);
}