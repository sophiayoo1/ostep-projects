/*
CIS 3207 Project 0
wcat file
*/

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){
    //exit program if a file name is not entered
    if(argc <= 1){
        printf("wcat: no file entered\n");
        exit(1);
    }

    int index = 1;
    while(index < argc){
        //open filename given by argv at index argc
        FILE *fp = fopen(argv[index], "r");
        char c;

        //check if file exists
        if(fp == NULL){
            printf("wcat: cannot open file\n");
            exit(1);
        }

        else{
            //read contents from file
            c = fgetc(fp);
            //while there is more to the file
            while(c != EOF){
                //print the contents of the file
                printf("%c", c);
                c = fgetc(fp);
            }
            //file has been printed
            fclose(fp);
        }
        //increment index counter
        index++;
    }
    //reach if program successful
    return 0;
}
