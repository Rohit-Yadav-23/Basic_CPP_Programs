//                      FORMATE SPECIFIER (%s) IN CHARACTER ARRAY

#include <stdio.h>

int main()
{
    char arr[5] = {'1', '2', '3', '4', '5'};

    for (int i = 0; i < 5; i++){
        printf("%c ", arr[i]);
    }

    printf("\n");

    printf("%s\n", arr); // This prints some GARBAGE VALUE

    // This happens because '%s' FORMATE SPECIFIER is used to print a STRING not a CHARACTER ARRAY
    // AND HERE, arr is a CHARACTER ARRAY "NOT" a STRING   --> That's why, %s prints the GARBAGE VALUE

    char brr[6] = {'1', '2', '3', '4', '5'};

    for (int i = 0; i < 6; i++){
        printf("%c ", brr[i]);
    }

    printf("\n");

    printf("%s\n", brr); // This prints correctly
}
