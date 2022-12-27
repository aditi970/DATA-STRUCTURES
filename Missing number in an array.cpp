class Solution{
  public:
    int MissingNumber(vector<int>& array, int n)
    {
        int x = array[0] ; 
        for(int i=1;i<n-1;i++) x = x ^ array[i] ; 
        int y = 1 ; 
        for(int i=2;i<=n;i++) y = y ^ i ; 
        return x ^ y ;
    }
}
