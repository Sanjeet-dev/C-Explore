#include <stdio.h>
#include <string.h>

int main(){
    int var = 55;
    int *ptr = &var; // declaring pointer variable and assign the address of 'var'
    
    // Display the value and address of var
    printf("value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);

    // Display the value and address stored in 'ptr'

    printf("value stored in ptr (address of var): %p\n", (void*)ptr);
    printf("value pointed to by ptr: %d\n", *ptr);
    return 0;

}