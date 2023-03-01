class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int ans=0;
        int j=0;
        int n=v.size();
        for(int i=n-1;i>=0;i--){
            ans=ans+(v[i]*pow(2,j));
            j++;
        }
        return ans;
    }
};
