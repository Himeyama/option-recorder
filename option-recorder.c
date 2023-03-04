#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]){
    char userprofile[64] = {};
    char filename[64] = {};
    FILE *fp;

    if(!GetEnvironmentVariable("USERPROFILE", userprofile, sizeof(userprofile))){
        fprintf(stderr, "Error: Unable to load environment variables.\n");
    }
    snprintf(filename, sizeof(filename), "%s\\log.txt", userprofile);
    printf("Writing to %s...\n", filename);
    fp = fopen(filename, "w");
    if(fp != NULL){
        for(int i = 0; i < argc; i++){
            fprintf(fp, "ARGV[%d]: %s\n", i, argv[i]);
        }
        puts("Writing completed.");
        fclose(fp);
    }else{
        puts("Error: Failed to open file.");
    }
    return 0;
}
