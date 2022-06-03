//1079. Letter Tile Possibilities
//Link:-https://leetcode.com/problems/letter-tile-possibilities/

    
    void solve(string tiles, string &output, set<string> &result, 
               map<int, bool> &vis) {
        
        //to check for each character in string
        for(int i=0 ;i<tiles.length(); i++) {
            
            //to track indexes
            if(vis[i] == 0) 
            {
                
                output.push_back( tiles[i]);
                vis[i] = 1;
                
                cout << "storing " << output << " in results " << endl;
                //store output string into results set
                result.insert(output);
                //recursive call
                solve(tiles, output, result, vis);
                
                //when u return from recursive call
                
                //backtracking
                output.pop_back();
                vis[i] = 0;
                
                
            }
        }
        
    }
    int numTilePossibilities(string tiles) {
        
        string output = "";
        
        //to store all different output strings
        set<string> result;
        
        //to track which has been included in the output string
        map<int, bool> flag;
        
        //function call
        solve(tiles, output, result, flag);
        
        return result.size();
    }


//22. Generate Parentheses
//Link:-https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    
    void solve(int currOpen,int currClose,int remOpen,
               int remClose, vector<string> &result, string &output) {
        cout << "call recieved for " << currOpen << " " << currClose << " " << remOpen << " " << remClose << " " << output << endl;
        //base case
        if(remOpen == 0 && remClose == 0)
        {
            //ans store and return
            result.push_back(output);
            return;
        }
        
        //'C' bracket k liye call
        if(remOpen > 0) {
            output.push_back('(');
            solve(currOpen+1,currClose, remOpen-1, remClose, result, output );
            //backtrack
            output.pop_back();
        }
        
        //')' bracket k liye call
        if(remClose > 0 && currOpen > currClose) {
            output.push_back(')');
            solve(currOpen,currClose+1, remOpen, remClose-1, result, output );
            //backtrack
            output.pop_back();
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> result;
        string output = "(";
            
        
        int currOpen = 1;
        int currClose = 0;
        int remOpen = n-1;
        int remClose = n;
        
        solve(currOpen, currClose, remOpen, remClose, result, output);
        
        return result;
        
    }
};


//526. Beautiful Arrangement
//Link:-https://leetcode.com/problems/beautiful-arrangement/
