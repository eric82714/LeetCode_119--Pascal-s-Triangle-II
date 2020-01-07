/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    int* result;
    int* tmp; 
        
    for(int k = 0; k < rowIndex+1; k++) {
        *returnSize = k + 1;
        result = malloc((*returnSize) * sizeof(int));
        *(result+0) = 1;
        *(result+k) = 1;
        for(int i = 0; i < k-1; i++) {
            *(result+i+1) = *(tmp+i) + *(tmp+i+1);
        }
        
        tmp = malloc((*returnSize) * sizeof(int));
        for(int j = 0; j < *returnSize; j++) {
            *(tmp+j) = *(result+j);
        }
    }        
    return result;
}
