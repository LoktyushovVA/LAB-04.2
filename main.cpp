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
                cout << "Wrong format";
                break;
            }

                        while( colon != nullptr )
            {
                if( isalpha( namefile[colon - namefile - 1] ) > 0 &&
                    namefile[colon - namefile + 1] == '\\')
                    colon = strchr(colon + 1, ':');
                else
                {
                    cout << "Wrong format";
                    break;
                }
            }
        }
        if( strrchr( namefile, '.' ) == nullptr )
        {
            *(namefile + strlen(namefile) - 1) = '.';
            strcat( namefile, "txt" );
        }

        else
        {
            char* ext = strrchr( namefile, '.' );
            for( int i = 1; ext[i] != '\0'; i ++ )
                *(ext + i) = char(tolower(*(ext + i)));
            if( strncmp( ext, ".txt", MAX_EXTENSION + 1 ) == 0 );
            else
            {
                cout << "Wrong format";
                break;
            }
        }
        break;
    }

     FILE* file = fopen( namefile, "r" );
    fseek( file, 0, SEEK_END );
    long filesize = ftell( file );

    char* filedata = new char[filesize];
    rewind( file );
    fread( filedata, 1, filesize, file );
