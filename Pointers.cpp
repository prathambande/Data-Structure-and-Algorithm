// Let your codes have much 'value'
// by including 'pointers' of 'reference'

// Let you be the 'address' of an 'alias' of 'value'

#include <iostream>
using namespace std;

void S( int x, int &y, int *z )

{ int t;

            t = x + y ;

            x = y + *z ;

            y =  x + t ;

            *z = y + *z;

            cout << x << " " << y << " " << *z << endl;

}

main()

{  int a = 3 , b = 5 , c = 7 ;

            S( a , b , &c ) ;

            cout << a << " "<< b << " "<< c ;

}

