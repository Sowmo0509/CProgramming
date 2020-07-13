#include<stdio.h>
#include<string.h>

int main(){
    char classword[50]; 
    char password[50];
    
    printf("Please enter your name: ");
    scanf("%s", classword);

    printf("Please enter pass: ");
    scanf("%s", password);

    if (!strcmp(classword, "dog") & !strcmp(password, "pass")){
        printf("correct");
    }
    else{
        printf("wrong");
    }
}


/* The code below is the temporary test */
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char classword[30];
//     char password[30];

//     scanf("%s",classword);
//     scanf("%s",password);

//     if(!strcmp(classword, "name") & !strcmp(password, "pass")){
//     printf("working");
//     }
//     else{
//     printf("bug");
//     }
//     return 0;
// }