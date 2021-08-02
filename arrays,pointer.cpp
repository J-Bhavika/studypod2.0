/*pointer and arrays
pointer arithmetic
address new= address current + i*size of datatype*/
#include<iostream>
using namespace std;
int main(){
int marks[]={23,45,56,89};
int*p=marks;
marks[2]=78;
//we can change the value
cout<<"the value of marks[0] is"<<*p<<endl;
cout<<"the value of marks[1] is"<<*(p+1)<<endl;
cout<<"the value of marks[2] is"<<*(p+2)<<endl;
cout<<"the value of marks[3] is"<<*(p+3)<<endl;
// the above can be written like this too:-
//cout<<"the value of *p is"<<*(p+3)<<endl;
//cout<<"the value of *(p+1) is"<<*(p+3)<<endl;
//cout<<"the value of *(p+2) is"<<*(p+3)<<endl;
//cout<<"the value of *(p+3) is"<<*(p+3)<<endl;

cout<<*(p++)<<endl;
cout<<*(p)<<endl;

cout<<*p++<<endl;
cout<<*++p<<endl;
return 0;
}
