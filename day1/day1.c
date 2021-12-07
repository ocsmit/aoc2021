#include <stdio.h>

int main(int argc, char * argv[])
{
    if (argc != 2) {
        printf("Pass input file with list of depths \n");
        return 1;
    }
    FILE *depths;
    int depth[10] = {199, 200, 208, 210, 200, 207, 240, 269, 260, 263};

    for (int i = 0; i < 10; ++i) {
        printf("%i\n", depth[i]);
    }



    return 0;
}


