#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const size_t MAX_SIZE = 256;
const char* separators = " \r\n,.!?:;()-";
const char* forbidden =  "*<>?|\"";

int main ()
{
int main()
{
    char text[MAX_SIZE];
    cout << "Enter file name: ";
    fgets(text, MAX_SIZE, stdin);
    char* namefile = text;
    while(true)
    {
        if( strcspn( namefile, forbidden ) == strlen( namefile ) ) ;
        else
        {
            cout << "Wrong format\n";
            break;
        }

        if( strchr(namefile, ':' ) == nullptr ) ;
        else
        {
            char* colon = strchr(namefile,':');
            if( colon - namefile + 1 <= 1 )
            {
                cout << ""Wrong format";
                break;
            }

                        while( colon != nullptr )
            {
                if( isalpha( filename[colon - filename - 1] ) > 0 &&
                    filename[colon - filename + 1] == '\\')
                    colon = strchr(colon + 1, ':');
                else
                {
                    cout << "Invalid format";
                    break;
                }
            }
        }

