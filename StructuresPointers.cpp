#include <iostream>
using namespace std;

struct s10{
    int y;
    s10 *z;
};
struct s9{
    int x;
    s9 *w;
};
struct s8{
    s9 *t;
    int u;
    s10 *v;
};
struct s7{
    int n;
    char o;
    s8 *p;
};
struct s6{
    s7 *q;
    int r;
    s6 *s;
};
struct s5{
    int l;
    s6 *m;
};
struct s4{
   s7 *j;
   s5 *k;
};
struct s3{
    s4 *g;
    s3 *h;
    s5 *i;
};
struct s2{
    char e;
    s3 *f;
};
struct s1{
    s1 *a;
    int b;
    s2 *c;
    s1 *d;
};

int main(){
    
    s1 *S = (s1*)malloc(sizeof(*S));
    S->c = new (s2);
    S->c->f = new(s3);
    S->c->f->g = new(s4);
    S->c->f->g->j = new(s7);
    S->c->f->i = new(s5);
    S->c->f->i->m = new(s6);
    //S->c->f->i->m->q = new(s7);
    S->c->f->g->j->p = new(s8);
    S->c->f->g->j->p->t = new(s9);
    S->c->f->g->j->p->v = new(s10);

    int reader;
    cin >> reader;
    S->b = reader;
    cin >> reader;
    S->c->f->i->m->r = reader;
    cin >> reader;
    S->c->f->g->j->p->u = reader;

    if((S->c->f->g->j->p->u)%2 == 0)
    {    
        S->c->f->g->j->p->t->x = S->b;
        S->c->f->g->j->p->v->y = S->c->f->i->m->r;
    }
    else
    {
        S->c->f->g->j->p->t->x = S->c->f->i->m->r;
        S->c->f->g->j->p->v->y = S->b;
    }

    cout << (S->b) << " " << (S->c->f->i->m->r) << " " << (S->c->f->g->j->p->u) << " " << (S->c->f->g->j->p->t->x) << " " << (S->c->f->g->j->p->v->y);
}







