#include <iostream>
using namespace std;

int main(){
cout<<"multiplication table of 6 is:"<<endl;
int n=6;
int i=1;
do{
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    i++;
}while(i<=10);
return 0;
}
