#include <stdio.h>

int main(){
    char name[10];
    char qwerty[100] = "qwertyuiopasdfghjklzxcvbnm";
    printf("Please enter your name: ");
    scanf("%s", &name);
    for(int i = sizeof(name); i>0; i--){
       int count = 0;
       while(count <= 25){
        if (name[i-1] == qwerty[count]) printf("%c", name[i-1]);
        count++;
       }
    }
    printf("\n");
    printf("ok");
    printf("ok");
    return 0;
}
