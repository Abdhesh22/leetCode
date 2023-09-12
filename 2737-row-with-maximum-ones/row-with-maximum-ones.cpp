class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rowNumber = -1;
        int maximumOne = INT_MIN;

        for(int row=0; row < mat.size(); row++){
            int oneCount = 0;
           for(int col=0; col < mat[row].size(); col++){
                if(mat[row][col]==1){
                    oneCount++;
                }   
            }

            if(oneCount > maximumOne){
                maximumOne = oneCount;
                rowNumber = row;
            }

        }

        return {rowNumber, maximumOne};
    }
};