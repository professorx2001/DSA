void dfs(int node, unordered_map<int, vector<int> > adjList,unordered_map<int, bool>&visited){
        cout<<node<<" ";
        visited[node] = true;

        for(auto neighbour: adjList[node]){
            if(!visited[neighbour])
            dfs(neighbour, adjList, visited);
        }
    }
