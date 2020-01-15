/*
CIS 3207 Project 0
wcat file
*/

#include <stdio.h>
#include <stdlib.h>



int main(){
    char filename[100];
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    char c;

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
    //reach if program successful
    return 0;
}
