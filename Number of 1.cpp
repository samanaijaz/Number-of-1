class Solution {
public:
    int hammingWeight(uint32_t n) {

        int count =0;
        
        //checking only the last bit
        while(n!=0){
            if(n&1){

                //if last bit is 1 we are incrementing count
                count++ ;
            }

            //right shifting 1
            n>>=1;
        }

        return count;
        
    }
};