#include<iostream>
using namespace std;
/*
A B C
B C D
C D E
*/
int main (){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<<ch<<"\t";
            j++;
        }
        i++;
        cout<<"\n";
    }

}