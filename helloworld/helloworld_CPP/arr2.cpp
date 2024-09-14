#include <iostream>
using namespace std;

int main(){
    int board[8][8] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0}
    };
    int n;
    cin >> n;
    int current_row =2;
    int current_col =2;
    bool f=true;
    int f1=0;
    while (f==true){
        if (n==1){
            int old_row =current_row;
            int old_col =current_col;
            char move;
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
            cin >> move;
            switch(move){
                case 'W':
                current_row--;
                break;
                case 'S':
                current_row++;
                break;
                case 'A':
                current_col--;
                break;
                case 'D':
                current_col++;
                break;
            }
            board[current_row][current_col] = 1;
            board[old_row][old_col]=0;
        }
        else{
            break;
        }
        f1++;
        if (f1==50 or f1==100 or f1==150 or f1==200){
            cout << "DO YOU WANT TO QUIT?" << endl;
            int a;
            cin >> a;
            if (a==1){
                break;
            }
        }
    }
}