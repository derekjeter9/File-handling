#include <stdio.h>
#include <stdlib.h>



int main(){

    int counter = 0, numberOflines;
    char input[255];

    printf("Input how many lines to be appended: ");
    scanf("%d", &numberOflines);


    while( counter < numberOflines ){
        printf("Enter a string for line %d: ", counter+1);
        scanf("%s", input);

        FILE *file = fopen("C:\\text.txt", "a");

        fputs(input, file);
        fputs("\n", file);

        fclose(file);
        counter++;
    }

  	return 0;

}






























