class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) 
    {
     unordered_map<int, int> prevSum;
 
    int c= 0;
   int sum=0;
    int currSum = 0;
 
    for (int i = 0; i < n; i++) 
    {
        currSum += arr[i];
        if (currSum == sum)
            c++;
        if (prevSum.find(currSum - sum)!=prevSum.end())
             c+= (prevSum[currSum - sum]);
            prevSum[currSum]++;
    }
 
    return c;
    }
};
