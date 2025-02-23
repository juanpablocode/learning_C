#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[])
{   
    if (argc != 2)
    {
        printf("Usage %s <filename>\n", argv[0]);
        return 1;
    }
    
    const char* filename[] = argv[1];    
    FILE *archive = fopen(*filename, "r");
    if (archive == NULL)
    {
        printf("Unable to open file %s\n", filename);
        return 1;
    }
    
    uint8_t buffer[4];
    fread(buffer, 1, 4, archive);

    for (int i = 0; i < 4; i++)
    {
        printf("%i \n", buffer[i]);
    }

    fclose(archive);
    
    return 0;
}
