#include <iostream>
#include <iomanip>
#include <vector>

#define SIZE 12
using namespace std;

int main() {
vector<vector<int> > matrix;

for(int i = 1; i <= SIZE; i++) {
vector<int> temp;
for(int j = 1; j <= SIZE; j++) {
temp.push_back(i * j);
}
matrix.push_back(temp);
}

cout << setw(4) << "X" << " | ";
for(int i = 1; i <= SIZE; i++) {
cout << setw(4) << i << " | ";
            }
cout << endl;
for(int i = 1; i <= SIZE; i++) {
cout << setw(4) << i << " | "; 
for(int j = 1; j <= SIZE; j++) {
cout << setw(4) << matrix[i-1][j-1]  << " | ";
            }

            cout << endl;
}
    return 0;
            
            
            }
