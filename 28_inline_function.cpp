#include<iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}
int main(){
    int a=5;
    cout<<cube(a);
    return 0;
}