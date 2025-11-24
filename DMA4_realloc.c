#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int count=0,x=0, i;
    char (*arr)[20]; 
    
    printf("Enter number of strings: ");
    scanf("%d",&count);
    
    arr = malloc(count*sizeof(*arr));
    for (i = 0; i < count; i++) {
        printf("Enter string %d: ", i);
        scanf("%s", arr[i]); 
    }
    printf("Enter number of strings to add: ");
    scanf("%d", &x);
    arr=realloc(arr,(count+x)*sizeof(*arr));
    for (i=count;i<count+x;i++) {
        printf("Enter string %d: ", i);
        scanf("%s", arr[i]);
    }
    printf("\nAll strings:\n");
    for (i=0;i<count+x;i++) {
        printf("String[%d]: %s\n", i, arr[i]);
    }
    
    free(arr); 

    return 0;
}
