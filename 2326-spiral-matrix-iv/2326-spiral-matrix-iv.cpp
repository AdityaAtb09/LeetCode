/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>vect(m,vector<int>(n,-1));
        int cnt=0,tot=m*n;
        int rs=0,re=m-1,cs=0,ce=n-1;
        while(head!=NULL and cnt<tot){
            for(int i=cs;cnt<tot and head!=NULL and i<=ce;i++){
                vect[rs][i]=head->val;
                head=head->next;
                cnt++;
            }
            rs++;
            for(int i=rs;cnt<tot and head!=NULL and i<=re;i++){
                vect[i][ce]=head->val;
                head=head->next;
                cnt++;
            }
            ce--;
            for(int i=ce;cnt<tot and head!=NULL and i>=cs;i--){
                vect[re][i]=head->val;
                head=head->next;
                cnt++;
            }
            re--;
            for(int i=re;cnt<tot and head!=NULL and i>=rs;i--){
                vect[i][cs]=head->val;
                head=head->next;
                cnt++;
            }
            cs++;
        }
        return vect;
    }
};