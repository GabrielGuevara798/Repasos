#include <curses.h>

int main() {
    initscr();
    printw("Hola desde PDCurses!");
    refresh();
    getch();
    endwin();
    return 0;
}
