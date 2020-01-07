class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result, tmp;
        
        if(rowIndex == 0) return {1};
        
        for(int k = 0; k < rowIndex+1; k++) {
            result.push_back(1);
            result.push_back(1);
            for(int i = 0; i < k-1; i++) {
                result.insert(result.begin()+i+1, tmp[i] + tmp[i+1]);
            }
            tmp.clear();
            tmp = result;
            if(k < rowIndex) result.clear();
        }        
        return result;        
    }
};
