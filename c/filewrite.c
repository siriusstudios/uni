#include <stdio.h>
#include <string.h>

int main(){
    char input[100];

    //id spend all night on it had i not searched up %[^\n] for scanf()
    scanf("%[^\n]", input);
    //file type is for files in c, must be a pointer
    FILE* file = fopen("./writefile.txt", "w");
    fputs(input, file);
    return 0;
}
