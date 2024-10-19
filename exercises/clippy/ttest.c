
struct A{

    void (*calc)(int a,int b);
}


struct B{
    void (*calc)(int a,int b);
}


void multi(int a,int b){
    return a*b;
}

void add(int a,int b){
    return a+b;
}
void main(){

    A* a;
    a->calc = add;
    B* b;
    b->calc = multi;


}