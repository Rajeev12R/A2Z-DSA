/*
#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
if(i > n){
    return;
    cout << "raj";
    f(i+1 , n);
}
}
int main(){
int n ,i;
cin >> i;
cin >> n;
f(i , n);

return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;


void num(int i , int n){
    if(i > n){
        return ;
    }
    cout << i <<" ";
    num( i + 1 , n);

}

int main(){
    int n, i;
    cout << "Enter the number n: " << endl;
    cin >> n ;
    num(i , n);



return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
void num(int i , int n){
    if(i < 1){
        return ;
    }
    cout << i <<" ";
    num( i - 1 , n);

}
int main(){

int n, i;
    cout << "Enter the number n: " << endl;
    cin >> n ;
    num(n , n);



return 0;
}


