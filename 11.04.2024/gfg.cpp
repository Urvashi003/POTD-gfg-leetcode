class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        vector<int>binary;
        while(n){
            if(n&1)
            binary.push_back(1);
            else
            binary.push_back(0);
            n=n>>1;
        }
        reverse(binary.begin(), binary.end());
        for(int i=1; i<binary.size(); i++){
            binary[i]= binary[i-1]^binary[i];
        }
        int ans =0, j=0;
        for(int i= binary.size()-1; i>=0;i--){
            if(binary[i])
            ans = ans + pow(2,j);
            j++;
            
        }
        return ans;
    }
};