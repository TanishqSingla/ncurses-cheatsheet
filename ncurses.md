# ncurses

`ncurses` is a library that lets you interact with the terminal in a different way allowing you to make better gui and render text

# initscr()

This function is used to initiate the curses mode, it clears the screen and presents a blank screen in the terminal.

# printw()

This syntax of this command is similar to the `cstdio` `printf`. This command prints the output in a window.

## Usage

Just like the formatted print in `cstdio` i.e `printf`, printw can be called to print a formatted output on a window.

```cpp
printw("Hello World");
```
