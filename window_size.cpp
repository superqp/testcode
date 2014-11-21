#include<iostream>
#include<sys/termios.h>
#include<stdlib.h>
#include<signal.h>

#ifndef TIOCGWINSZ
#include<sys/ioctl.h>
#endif

using namespace std;

static void showWindowSize(int fd)
{
    struct winsize size;
    if(ioctl(fd, TIOCGWINSZ, (char *) &size) < 0)
    {
        cout << "error for getting window size, exit." << endl;
        exit(1);
    }
    cout << "rows: " << size.ws_row << " columns: " << size.ws_col << endl << endl;
}

static void signalWindowSizeChange(int signo)
{
    cout << "receive window size change signal" << endl;
    showWindowSize(STDIN_FILENO);
}

int main()
{
    if(isatty(STDIN_FILENO) == 0)
    {
        cout << "It is not a terminal, exit" << endl;
        exit(2);
    }
    if(signal(SIGWINCH, signalWindowSizeChange) == SIG_ERR)
    {
        cout << "Error for set SIGWINCH signal routine, exit" << endl;
        exit(3); 
    }
    showWindowSize(STDIN_FILENO);
    while(true)
    {
        cout << "Sleeping..." << endl;
        pause();
    }

    return 0;
}
