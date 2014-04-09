#include<cstdio>

#include<cmath>

#include<cstring>

#include<string>

#include<iostream>

#include<queue>

#include<algorithm>

using namespace std;

#define INF  2147483647





/***************** Max Flow Algorithm***************

****************************************************/

const int maxINDX=102;
int flow[maxINDX][maxINDX],cap[maxINDX][maxINDX];
int path[maxINDX];
int src,dest;
int BFS(int node) {
    int i,item,cf;
    queue<int> q;
    for(i=1;i<=node;i++)
        path[i]=-2;// color it
    q.push(src);
    path[src]=-1;

    while(!q.empty()) {

        item=q.front();

        q.pop();

        if(item==dest) {

            i=dest;

            cf=INF;

            while(path[i]!=-1) {

                if(cf>flow[path[i]][i])

                    cf=flow[path[i]][i];

                i=path[i];

            }

            return cf;

        }

        for(i=1;i<=node;i++) {

            if(flow[item][i]!=0 && path[i]==-2) {

                q.push(i);

                path[i]=item;

            }

        }

    } // end of while loop

    return 0;

}

int maxflow(int node) {
    int i,j,cf,totalflow=0;
    while((cf=BFS(node))!=0) {
        totalflow+=cf;
        i=dest;
        while(path[i]!=-1) {
            flow[path[i]][i]-=cf;
            flow[i][path[i]]+=cf;
            i=path[i];
            cout <<i<<" ->"; // for available pathS
        }
        cout << endl;
    }
    return totalflow;
}

void graph_initial(int node){

    int i,j;

    for(i=1;i<=node;i++){

        for(j=1;j<=node;j++) {

            cap[i][j]=0;

            flow[i][j]=0;

        }

    }



}



int main()

{





    int node,edge,a,b,c,i,resultedFlow,j;



    while(scanf("%d",&node)==1 && node!=0) {



        graph_initial(node);



        scanf("%d %d",&src,&dest);

        scanf("%d",&edge);



        for(i=1;i<=edge;i++) {

            scanf("%d %d %d",&a,&b,&c);

            cap[a][b]+=c;

            cap[b][a]+=c;

            flow[a][b]+=c;

            flow[b][a]+=c; // For BI-Directed Graph

        }



        resultedFlow=maxflow(node);



        printf("%d\n",resultedFlow);



    /*    for(i=1;i<=node;i++)

        for(j=1;j<=node;j++)

        cout << i<<","<<j<<":"<<flow[i][j] <<" "<<i<<":"<<path[i]<<endl;*/

    }



return 0;

}



/*

7

1 7 8

1 2 3

2 4 3

3 4 5

1 3 1

4 7 2

3 5 4

5 6 2

6 7 3

*/
