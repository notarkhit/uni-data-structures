#include <stdio.h>
#include <termios.h>
#include <unistd.h>

char getch() {
    struct termios oldt, newt;
    char ch;
    
    // Get the terminal settings
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    
    // Disable canonical mode (buffered input)
    newt.c_lflag &= ~(ICANON | ECHO);
    
    // Apply the new settings to the terminal
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    
    // Read a single character from stdin
    ch = getchar();
    
    // Restore the terminal settings
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    
    return ch;
}

int main() {
    printf("Press any key: ");
    getch();  // Get a single character without needing Enter
    printf("\nYou pressed: \n");
    return 0;
}
