class Solution {
    private:
    void Solve(vector<vector<int>>& img,vector<vector<int>>& v,int i,int j,int n,int m){
         int sum = 0;
        int count = 0;
        
        for (int start = i - 1; start <= i + 1; start++) {
            for (int idx = j - 1; idx <= j + 1; idx++) {
                if (start >= 0 && start < n && idx >= 0 && idx < m) {
                    sum += img[start][idx];
                    count++;
                }
            }
        }
                v[i][j] = sum / count;
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
     int n = img.size();
     int m = img[0].size();
    vector<vector<int>> v(n, vector<int>(m));

     for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
                Solve(img,v,i,j,n,m);
        }
     }

     return v;
        
    }
};