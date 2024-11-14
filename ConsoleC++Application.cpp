// ConsoleC++Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>

using namespace std;



struct Rectangle
{
    int lenght;
    int breadth;

};

struct Rectangle* fun() {

    struct Rectangle* p;
    p = new Rectangle; // cpp
    //p = (struct Rectangle*)malloc(sizeof(struct Rectangle)); // c


    p->lenght = 15;
    p->breadth = 7;

    return p;
}


struct Rec
{
    int length;
    int breadth;
};

int  area(struct Rec r ) {
    return r.length * r.breadth;
}

int perimetr(struct Rec r) {

    int p; 
    p = 2 * (r.length + r.breadth);
    return p;
}

void init(struct Rec*r , int l , int b) {
    r->length = l;
    r->breadth = b;

}

/*

int main()
{

    Rec r = {0,0};
    int l, b;

   // int length = 0, breadth = 0;

    printf("Enter length annd breadth ");

    //cin >> r.length >> r.breadth;

    cin >> l >> b;

    init(&r, l, b);

    int vararea =area(r);

    int peri = perimetr(r);


    printf("Area =%d\nPerimeter=%d\n", vararea , peri);


    std::cout << "\n \n->Prog End here !\n";
    return 0;

}



*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

