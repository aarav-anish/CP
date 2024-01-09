class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<bool> col(matrix[0].size());
        bool row = false;
        
        for(int i=0; i<matrix.size(); i++) {
            row = false;
            for(int j=0; j<matrix[0].size(); j++) {
                if(matrix[i][j] == 0) {
                    col[j] = true;
                    row = true;
                }
            }
            if(row) {
                for(int j=0; j<matrix[0].size(); j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int j = 0; j<matrix[0].size(); j++) {
            if(col[j]) {
                for(int i=0; i<matrix.size(); i++) {
                    matrix[i][j] = 0;
                }
            }
        }        
    }
};