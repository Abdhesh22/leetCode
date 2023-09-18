class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start =0;
        int row = matrix.size();
        int col = matrix[0].size();

        int n = row * col;

        int s = 0;
        int e = n-1;

        while(s <= e){
            int mid = s + (e-s)/2;
            int rowIndex = mid / col;
            int colIndex = mid % col;

            int curr = matrix[rowIndex][colIndex];
            if(curr == target){
                return true;
            }else if(curr < target){
                s = mid+1;
            }else {
                e = mid-1;
            }

        }
        return false;
    }
};