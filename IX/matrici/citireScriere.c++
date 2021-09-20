#include <iostream>
using namespace std;
 
int main() {
int i,j,M,N;

cout << "Cate linii?  ";
cin >> M;

cout << "Cate coloane?  ";
cin >> N;
int A[M][N];

for( i = 0 ; i < M; i++) {
    for ( j = 0 ; j < N ; j++) {
        cout << "A[" << i << "][" << j << "]= ";
        cin >> A[i][j];
    }
}


for( i = 0 ; i < M ; i++) {
    for ( j = 0 ; j < N ; j++) {
        cout << A[i][j] << " "; 
    }
    cout << endl;
}
}