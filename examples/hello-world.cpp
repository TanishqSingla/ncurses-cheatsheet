#include <ncurses.h>

int main()
{
    // Initializing curses mode
    initscr();
    printw("Hello World!!!"); // print hello world
    refresh();                // print it on screen instead of window
    // wait for user input
    getch();
    // end curses mode
    endwin();
}