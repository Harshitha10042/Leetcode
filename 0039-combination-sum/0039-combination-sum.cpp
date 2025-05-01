class Solution {
public:
    set<vector<int>>s;
    void getallcombinations(vector<int> & arr,int indx,int tar,vector<vector<int>> & ans,vector<int>combin){
        if(indx==arr.size() || tar<0){
            return;
        }
        if(tar==0){
            if(s.find(combin)==s.end()){
                ans.push_back({combin});
                s.insert(combin);
            }
            return;
        }
        combin.push_back(arr[indx]);
        //single
        getallcombinations(arr,indx+1,tar-arr[indx],ans,combin);
        //multiple
        getallcombinations(arr,indx,tar-arr[indx],ans,combin);
        combin.pop_back();
        //exclusion
        getallcombinations(arr,indx+1,tar,ans,combin);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<vector<int>>ans;
        vector<int>combin;
        getallcombinations(arr,0,tar,ans,combin);
        return ans;
        
    }
};