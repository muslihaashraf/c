  1 #include<stdio.h>
  2 int graph[10][10],visited[10],n;
  3 void dfs(int v){
  4     visited[v]=1;
  5     printf("%d",v);
  6     for(int i=1;i<=n;i++) {
  7         if(graph[v][i]==1&&!visited[i]){
  8             dfs(i);
  9         }
 10     }
 11 }
 12 int main(){
 13     int i,j,start;
 14     printf("enter number of vertices:");
 15     scanf("%d",&n);
 16     printf("enter adjacency matrix:\n");
 17     for(i=1;i<=n;i++){
 18         for(j=1;j<=n;j++){
 19         scanf("%d",&graph[i][j]);
 20     }
 21 }
 22 for(i=1;i<=n;i++)
 23 visited[i]=0;
 24 printf("enter starting vertex:");
 25 scanf("%d",&start);
 26 printf("dfs traversal:");
 27 dfs(start);
 28 printf("\n");
 29 return 0;
 30
 31 }
 32
