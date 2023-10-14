class DirectedGraph{
    public:
    unordered_map<int, list<int> > adj;

    void addEdge(int u, int v){
      //prepairing adjacency list
        adj[u].push_back(v);
    }

    void printAdjList(){
        cout<<"Adjacency List"<<endl;
        for(auto i: adjList){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};
