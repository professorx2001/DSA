void dfs(unordered_map<int, vector<int> > adjList,unordered_map<int, bool>&visited, int start){
        stack<int> s;
        s.push(start);
        visited[start] = true;

        while(!s.empty()){
            int top = s.top();
            s.pop();

            cout<<top<<" ";
            for(auto neighbour: adjList[top]){
                if(!visited[neighbour]){
                    s.push(neighbour);
                    visited[neighbour] = true;
                }
            }

        }
        
    }
