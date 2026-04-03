class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //1. check for each row
        for(int i=0;i<9;i++){
            vector<int> arr(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j] == '.') continue;
                int v = (int)board[i][j] - '0';
                arr[v]++;
                if(arr[v] > 1) return false;
            }
        }

        //check every col
        for(int i=0;i<9;i++){
            vector<int> arr(10,0);
            for(int j=0;j<9;j++){
                if(board[j][i] == '.') continue;
                int v = (int)board[j][i] - '0';
                arr[v]++;
                if(arr[v] > 1) return false;
            }
        }

        //check 3*3 box
        for(int k=0;k<9;k++){
            vector<int> arr(10,0);
             for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (k / 3) * 3 + i;
                    int col = (k % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    int v = (int)board[row][col] - '0';
                arr[v]++;
                if(arr[v] > 1) return false;
                }
            }
        }
        return true;
    }
};
