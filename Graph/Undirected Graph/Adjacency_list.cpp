class UndirectedGraph{
    public:
    unordered_map<int, vector<int> > adjList;

    void addEdge(int u, int v){
        //prepairing adjacency list
        adjList[u].push_back(v);
        adjList[v].push_back(u);
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
