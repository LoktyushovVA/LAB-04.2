#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const size_t MAX_SIZE = 256;
const char* separators = " \r\n,.!?:;()-";
const char* forbidden =  "*<>?|\"";

int main ()
{
    char text[MAX_SIZE];
    cout<<"Enter the name of the file :";
    //STDIN
    fgets(text, MAX_SIZE, stdin);
    char* namefile = text;

}
