#include "head.h"
Graph::Graph(int V){
        v=V;
        g=new vector<pair<int, int >[V];
        frm=new int[V];
        loop(v){frm[i]=inf;}
}
void Graph::add_edge(int x, int y, int w){
        g[x].pb(make_pair(y,w));
}
void Graph::sho_pat(int x){
        frm[x]=0;
        bool visited[v];
        loop(v){visited[i]=0;}
        myset.insert(make_pair(0,x));
        while(!myset.empty()){
                auto it=myset.begin();
                pair<int,int> temp=*it;
                myset.erase(it);
                int to_expl=(*it).second,d=(*it).first;
                visited[to_expl]=1;
                for(auto p=g[to_expl].begin();p!=g[to_expl].end();++p){
                        if(visited[*p.first]==0){
                                int t=d+(*p).second;
                                if(t<frm[(*p).first]){
                                        auto it2=myset.find(make_pair(frm[(*p).first],*p.first));
                                        if(it2!=myset.end()){myset.erase(it2);}
                                        frm[(*p).first]=t;
                                        myset.insert(myset.find(make_pair(frm[(*p).first],*p.first)));
                                }
                        }
                }
        }
        for(i=0;i<v;++i){
                if(i!=x){
                        cout<<frm[i]<<" ";
                }
        }
}