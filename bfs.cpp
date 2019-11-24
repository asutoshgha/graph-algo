#include<bits/stdc++.h>
using namespace std;

class graph
{
	map<int,list<int>> m;
    public:
    	void addedge(int v,int w)
    	{
    		if(m.find(v)==m.end()){
    			list<int> t;
    			t.push_back(w);
    			m.insert({v,t});
    		}
    		else{
    				m[v].push_back(w);
    		}
    	}

    	void bfs(int s);
		void dfs(int s);
		void DFSUtil(int v, map<int,bool>&visited);
};

void graph::bfs(int s)
{
	list<int> q;
	map<int,bool> visited;
	for(auto i=m.begin();i!=m.end();i++)
	{
		visited.insert({i->first,false});
		for(auto j=i->second.begin();j!=i->second.end();j++){
			visited.insert({*j,false});
		}
	}
	q.push_back(s);
	while(!q.empty())
	{
		int v=q.front();
		q.pop_front();
		cout<<v<<" ";
		for(auto i=m[v].begin();i!=m[v].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				q.push_back(*i);
			}
		}
	}
}
void graph::DFSUtil(int v, map<int,bool>& visited) {
	visited[v]=true;
	cout<<v<<" ";
	for(auto i=m[v].begin();i!=m[v].end();i++){
		if(!visited[*i]){
			DFSUtil(*i,visited);
		}
}
}
void graph::dfs(int s){
	map<int,bool> visited;
	for(auto i=m.begin();i!=m.end();i++)
	{
		visited.insert({i->first,false});
		for(auto j=i->second.begin();j!=i->second.end();j++){
			visited.insert({*j,false});
		}
	}
	DFSUtil(s,visited);
}
int main()
{
	graph g;
	g.addedge(1,4);
	g.addedge(1,2);
	g.addedge(4,3);
	g.addedge(3,10);
	g.addedge(3,9);
	g.addedge(2,3);
	g.addedge(2,5);
	g.addedge(2,7);
	g.addedge(2,8);
	g.addedge(5,8);
	g.addedge(5,6);
	g.addedge(5,7);
	g.addedge(7,8);
	g.bfs(1);
	cout<<endl;
	g.dfs(1);
	cout<<endl;
}
