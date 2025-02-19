#include <stdio.h>
#include <stdint.h>

int main(int argc, int* argv[])
{   
    char filename[20] = argv[1];    
    FILE *archive = fopen(filename, "r");
    uint8_t buffer[4];
    fread(buffer, 1, 4, archive);

    for (int i = 0; i < 4; i++)
    {
        printf("%i \n", buffer[i]);    
    }
    fclose(archive)
    
    return 0;
}