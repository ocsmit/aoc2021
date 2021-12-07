#include <stdio.h>
#include <stdlib.h>

// Declarations
int get_lines(FILE *fp);


/************
 * FUNCTIONS
 ************/
int get_lines(FILE *fp)
{
    int lines = 0;
    while (EOF != (fscanf(fp, "%*[^\n]"), fscanf(fp,"%*c")))
    {
        ++lines;
    }
    return lines;
}


// run
int main(int argc, char * argv[])
{
    int lines[2000] = {0}, i = 0, increase = 0; // hardcoded, ugly


    if (argc < 1) {
        printf("Pass input file with list of depths \n");
        return 1;
    }

    char const* const file_path = argv[1];

    FILE* depths = fopen(file_path, "r");

    while (EOF != fscanf(depths, "%d", &lines[i])) {
        if (i != 0) {
            //printf("%d %d \n", lines[i - 1], lines[i]);
            if (lines[i - 1] - lines[i] < 0) {
                increase++;
            }
        }

        i++;
    }

    fclose(depths);
    printf("%d\n", increase);

    return 0;
}


