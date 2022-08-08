#include <iostream>

using namespace std;

int main() {
    int n = 5;
    for(int row = 1 ; row <= n ; row++){
        if(row == 1){
        for(int col =1 ; col <=n ;col++){
             cout<<"* ";
        }
        cout<<"\n";
        continue;
        }
        if(row == n ){
            cout << "* ";
           continue;
        }
        cout<<"* ";
        for(int col =1 ; col <= n-row-1 ;col++){
                 cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}