class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int piv=-1,n=a.size();
        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                piv=i;//last element cannont be cmpared with it next element so i starts from n-2
                break;
            }
            
        }
        if(piv==-1){
            reverse(a.begin(),a.end());
            return;
        }
        for(int i=n-1;i>piv;i--){
            if(a[i]>a[piv]){
                swap(a[i],a[piv]);
                break;
            }
        }

        //reverse piv+1 to n-1
        int i=piv+1,j=n-1;
        while(i<=j){
            swap(a[i],a[j]);
            i++,j--;
        }
        
    }
};
//next_permutation(a.begin(),a,end());whole program can be replaced with a single line code 