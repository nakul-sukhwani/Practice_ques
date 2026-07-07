class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int> res;
        int n = arr.size();
        for(int i = 0 ; i<n ; i++){
            if(i%2==0){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
};