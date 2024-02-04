class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        unordered_map<string,unordered_map<string,int>> y;
        unordered_map<string,int> z;
        int n = orders.size();
        for(int i=0;i<n;i++){
            z[orders[i][2]]=1;
            y[orders[i][1]][orders[i][2]]++;
        }
        int e=y.size(),f=z.size();
        vector<vector<string>> x(e+1,vector<string>(f+1,""));
        x[0][0]="Table";
        int j=1;
        for(auto i:z){
            x[0][j]=i.first;
            j++;
        }
        sort(x[0].begin()+1,x[0].end());
        j=1;
        for(auto i:y){
            x[j][0]=i.first;
            for(int k=1;k<f+1;k++){
                x[j][k]=to_string(i.second[x[0][k]]);
            }
            j++;
        }
        sort(x.begin()+1, x.end(), [](auto& a, auto& b) {
            return stoi(a[0]) < stoi(b[0]); 
        });
        return x;
    }
};