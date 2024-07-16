#include <stdio.h>

int main()
{
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represent new line
    printf("Hey I am good \n nice \n\n\n");

    // -> \n <- Inserts a newline character into the string.
    printf("Hello\nWorld \n");

    // -> \t <- Inserts a tab space.
    printf("Hello\tWorld \n");

    // -> \\ <- Inserts a backslash character.
    printf("C:\\Program Files \n");

    // -> \" <- Inserts a double quote character.
    printf("She said, \"Hello\" \n");

    // -> \' -< Inserts a single quote character.
    printf("It\'s a nice day \n");

    // -> \a -< Produces an audible or visible alert.
    printf("\a \n");
    // might produce a beep sound (depending on the system).

    // -> \b -< Moves the cursor one position back.
    printf("Hello\b\bWorld \n");

    // -> \r -< Moves the cursor to the beginning of the line.
    printf("Hello\rWorld \n");

    // -> \f -< Advances the cursor to the next page (not commonly used in modern systems).
    printf("Hello\fWorld \n");

    // -> \v -< Moves the cursor to the next vertical tab stop.
    printf("Hello\vWorld \n");

    return 0;
}