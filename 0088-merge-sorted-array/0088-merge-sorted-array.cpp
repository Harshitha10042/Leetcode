class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int indx=m+n-1,i=m-1,j=n-1;
        while (i >= 0 && j >= 0) {
            if (a[i] >= b[j]) {
                a[indx--] = a[i--];
            } else {
                a[indx--] = b[j--];  
            }
        }

        // Copy remaining elements of 'b' into 'a' (if any left)
        while (j >= 0) {
            a[indx--] = b[j--];//o(m+n)
        }
        
    }
};