#ifndef SEARCH_H
#define SEARCH_H
#include<stdio.h>
#include<string.h>
void search(){
    char opt[11];
    printf("Enter mobile number.");
    scanf("%s",&opt);
    FILE *fp;
    char line[200];
    char *lines[1000];
    int line_count = 0;
    int n;
    fp=fopen("bills.txt","r");
    while (fgets(line, sizeof(line), fp)) {
        lines[line_count] = malloc(strlen(line) + 1);
        if (lines[line_count] == NULL) {
            perror("Error allocating memory");
            return EXIT_FAILURE;
        }
        strcpy(lines[line_count], line);
        line_count++;
    }
    int c=0;
    for(int i=0; i<line_count; i++){
        if(strstr(lines[i],opt)){
            c+=1;
            printf("\n\n%d.\n",c);
            for (int j=i-4;j<i+9; j++){
                printf("%s", lines[j]);
            }
            printf("------------------------------------------------------------");
        }

    }
    printf("\nYou have %d bills in total", c);
    fclose ( fp );

}
#endif
