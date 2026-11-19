class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            vector<int>temp_edge = edges[i];
            int src = temp_edge[0];
            int des = temp_edge[1];
            adj[src].push_back(des);
            adj[des].push_back(src);
        }
       vector<bool>visited(n,0);
       queue<int>q;
       q.push(source);
       visited[source]=true;
       while(!q.empty())
       {
         int temp = q.front();
         q.pop();
         if(temp==destination)
            {
            return true;
            }
         for(int i=0;i<adj[temp].size();i++)
         {
            if(visited[adj[temp][i]]==false)
            {
                q.push(adj[temp][i]);
                visited[adj[temp][i]]=true;
            }
         }
       }
       return false;
    }
};