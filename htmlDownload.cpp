#include "GetUrl.h"
#include <iostream>

int main( int argc, char *argv[ ] )
    {
    if ( argc != 2 )
        exit( 1 );
    ParsedUrl url( argv[ 1 ] );
    std::cout << LinuxGetHTML( url ) << std::endl;
    }