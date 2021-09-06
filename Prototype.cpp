//Be Proficient at Prototypes
#include <iostream>
using namespace std;

struct s2;

struct s3{
    s2 *g;
    int h;
};

struct s2{
    int d;
    s3 *e;
    int f;
};

struct s1{
    int a;
    s2 *b;
    s1 *c;
};

int main()
{
    s1 *S = new(s1);
    S->b = new(s2);
    S->b->e = new(s3);
    //S->b->e->g = new(s2); tried going to d via g 
    
    int reader;
    cin >> reader;
    S->a = reader;
    cin >> reader;
    S->b->f = reader;
    cin >> reader;
    S->b->e->h = reader;
    
    S->b->d = S->a + S->b->f + S->b->e->h;
    
    cout << S->a << " " <<S->b->d << " " << S->b->f << " " << S->b->e->h;
    
}

