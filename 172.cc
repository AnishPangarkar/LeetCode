class Solution {
public:
    int trailingZeroes(int n) {
     int result = 0;
     int j =0;
    while(pow(5,j) < n)
        j++;
        for (int k=1;k<=j;k++){
            result+=n/pow(5,k);
        }
    
        return result;
     
    }
};