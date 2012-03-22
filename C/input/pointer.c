void main(){
    int a;
    int *p;
    int **q;

    a = 1;
    p = &a;
    q = &p;
    printf("p = %d, *q = %d, **q = %d\n", p, *q, **q);
}
