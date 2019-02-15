// Command_line_v3.cpp
// Test program for parsing a command line

#include <iostream>
#include <cstring>

using namespace std;

// "main() "function --- the program's entry point
//      int argc        // Number of parameters on the command line
//      char *argv[]    // An array of pointers to C-strings

int main(int argc, char *argv[])
{
    cout << endl;
    for(int i = 0; i < argc; ++i)
    {
        cout << "Argument " << i << " : " << argv[i] << endl;
    }
    cout << endl;

    char *arg = argv[1];
    const char DASH = '-';

    char valid_options[] = "?hifap";
    char *p = valid_options;

    bool first_char = arg[0] == DASH;   // Test 1st arg's 1st char
    
    bool second_char = false;

    for(; p != 0; ++p)                  // Test 1st arg's 2nd char
    {
        second_char = arg[1] == *p;
        if (second_char == true) break;
    }
    
    char buf[100 + 1];
    bool string_found = arg[2] != 0;    // Look for a string
    strcpy(buf, arg+2);

    cout << "Database file: " << buf << endl;
    cout << endl;

    return 0;
}

