class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();//row size
        int m = matrix[0].size();//col size
        int low = 0;
        int high = (m*n)-1;
        while(low<=high){
            int mid = (high+low)/2;
            int row = mid/m;
            int col = mid%m;
            if(matrix[row][col] == target){
                return true;
            }else if(target<matrix[row][col] ){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
};
