  1 #include<stdio.h>
  2 int main()
  3 {
  4     int n,graph[10][10],visited[10]={0};
  5     int queue[10],front=0,rear=-1;
  6     printf("enter number of nodes:");
  7     scanf("%d",&n);
  8     printf("enter adjacency matrix:\n");
  9     for(int i=0;i<n;i++)
 10         for(int j=0;j<n;j++)
 11             scanf("%d",&graph[i][j]);
 12     int start;
 13     printf("enter starting node:");
 14     scanf("%d",&start);
 15     visited[start]=1;
 16     queue[++rear]=start;
 17     printf("bfs order:");
 18     while(front<=rear){
 19         int node=queue[front++];
 20         printf("%d",node);
 21         for(int i=0;i<n;i++){
 22             if(graph[node][i]==1&&visited[i]==0){
 23                 visited[i]=1;
 24                 queue[++rear]=i;
 25             }
 26         }
 27     }
 28     printf("\n");
 29     return 0;
 30 }
