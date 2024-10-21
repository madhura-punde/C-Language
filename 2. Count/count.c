// count number of characters, no. of lines and no. of words at its input
#include <stdio.h>
# include ESC 27
int main(void) {
    char c;
    int nc = 0, nl = 0, nw = 0, flag = 0;
    printf("Press any key (type 'q' to quit):\n");

    while (1) {
        c = getchar(); 
        // Check for 'q' to quit
        if (c == 'q') {
            break; 
        }
        if (c == '\n') { // Check for newline
            nl++; 
            putchar(c);
            flag = 0;
        } else {
            putchar(c); 
            nc++; 

            // Check for whitespace characters
            if (c == ' ' || c == '\t') {
                flag = 0; 
            } else if (flag == 0) {
                nw++; 
                flag = 1;
            }
        }
    }

    printf("\nNo. of chars = %d\n", nc);
    printf("No. of lines = %d\n", nl);
    printf("No. of words = %d\n", nw);

    return 0;
}
