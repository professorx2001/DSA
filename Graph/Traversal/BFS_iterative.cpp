void bfs(int start, unordered_map<int, vector<int> > adjList,unordered_map<int, bool>& visited){
        queue<int> q;

        q.push(start);
        visited[start] = true;

        while (!q.empty()){
            int front = q.front();
            q.pop();
            cout<<front<<" ";
            for(auto neighbour: adjList[front]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
        
    }
