class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        result = tmp = []
        
        for k in range(rowIndex+1):
            result = [1] * (k+1)
            for i in range(len(tmp)-1):
                result[i+1] = tmp[i] + tmp[i+1]
            
            tmp = result
        
        return result
