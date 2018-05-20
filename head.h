#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define loop(n) for(int i=0;i<n;++i)
#define loop1(n) for(int j=1;j<=n;++j)
#define pb push_back
#define debug(x,n) cout<<n<<" "<<x<<endl;
#define inf 1000000000 //<<--------------------KEEP IN MIND
using namespace std;
class Graph{
	int v;
	vector<pair<int,int>>* g;
	int* frm;
	set<pair<int,int>> myset;
	public:
		Graph(int V);
		void add_edge(int x, int y, int w);
		void sho_pat(int x);
};