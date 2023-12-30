class Solution {
public:
    
    void solve(string tiles, int& cnt, int i)
    {
        cnt++;
        
        for(int ind=i; ind<tiles.length(); ind++)
        {
            if(ind!=i && tiles[ind]==tiles[i])
            {
                continue;
            }
            
            swap(tiles[ind], tiles[i]);
            solve(tiles, cnt, i+1);
        }
    }
    
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(), tiles.end());
        int i = 0, cnt = -1;
        solve(tiles, cnt, i);
        
        return cnt;
    }
};