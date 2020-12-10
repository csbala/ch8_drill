#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
cout<<"before swap_v"<<endl;
cout<<"a: "<<a<< " b: "<<b<<endl;
int temp;
temp=a;
a=b;
b=temp;
cout<<"after swap_v"<<endl;
cout<<"a: "<<a<< " b: "<<b<<endl;
}

void swap_r(int& a, int& b)
{
cout<<"before swap_r"<<endl;
cout<<"a: "<<a<< " b: "<<b<<endl;
int temp;
temp=a;
a=b;
b=temp;
cout<<"after swap_r"<<endl;
cout<<"a: "<<a<< " b: "<<b<<endl;
}

void swap_cr(const int& a,const int& b) //ez csak érték lekérdezésre jó így értékét nem lehet változtatni így hibát dob ki
{
cout<<"before swap_cr"<<endl;
cout<<"a: "<<a<< " b: "<<b<<endl;
int temp;
temp=a;
a=b;
b=temp;
cout<<"after swap_cr"<<endl;
cout<<"a: "<<a<< " b: "<<b<<endl;
}


int main()
{

int x = 7; 
int y =9;  
swap_r(x,y); //ez jó
swap_v(7,9); //ez jó
const int cx = 7;  //konstans értéket nem kéne változtatni
const int cy = 9; //konstans értéket nem kéne változtatni
swap_cr(cx,cy);   
swap_v(7.7,9.9); //az int nem képes erre
double dx = 7.7;  //egész számokra az int nem képes
double dy = 9.9; //egész számokra az int nem képes
swap_r(dx,dy);
swap_v(7.7,9.9);

return 0;
}
