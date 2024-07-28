#include <stdio.h>

#define MAX 100

struct father_son_relation
{
    char arr[MAX][100];
    
    
}son,father;

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

void getTheInputFromUser(struct father_son_relation *s, int size)
{

    printf("enter array elements\n");
    for (int i = 0; i < size; i++) {
        scanf("%s", s->arr[i]);
    }

    printf("array is\n");
    for (int i = 0; i < size; i++) {
        printf("%s\t",s->arr[i]);
    }
}

void my_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

void findTheRelations(struct father_son_relation *son, struct father_son_relation *father, int size, char fatherName[100]) {
    
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (my_strcmp(father->arr[i], fatherName) == 0) {
            printf("%s -> %s\n", son->arr[i], fatherName);
            my_strcpy(fatherName, son->arr[i]);
            count++;
        }
    }
    printf("Total number of sons: %d\n", count);
}


int main() {

    int size;

    printf("enter size\n");
    scanf("%d",&size);

    struct father_son_relation son;
    getTheInputFromUser(&son, size);
    
    struct father_son_relation father;
    getTheInputFromUser(&father, size);
    
    char fatherName[100];
    printf("enter father's name\n");
    scanf("%s", fatherName);

    findTheRelations(&son, &father, size, fatherName);


}
