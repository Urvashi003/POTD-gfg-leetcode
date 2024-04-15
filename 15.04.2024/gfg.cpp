class Solution {
  public:
     int solve(vector<int> &b,int val)
     {
        //  jo jo value val se kaam hai usko cnt vapis bhej do easily 
        
        int s = 0;
        int e  = b.size()-1;
        int cnt =-1;
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            if(b[mid]<=val)
            {
                s = mid+1;
                cnt = mid;
            }
            else
            {
                e = mid-1;
            }
        }
      
        
        return cnt;
     }
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
       
       vector<int> res;
       sort(b.begin(),b.end());
       
       for(int x:query)
       {
           int z = solve(b, a[x] );
            
            res.push_back(z+1);
           
       }
       return res;
      
    }
};