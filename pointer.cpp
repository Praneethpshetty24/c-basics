#include <iostream>
using namespace std;
int main(){
int a = 24;
int * ptra;

ptra = &a;
cout<<"THe value is of a is "<<a<<endl;
cout<<"THe address is of a is "<<&a<<endl;
cout<<"THe value is of a is "<<*ptra<<endl;
cout<<"THe value is of a is "<<ptra<<endl;


}