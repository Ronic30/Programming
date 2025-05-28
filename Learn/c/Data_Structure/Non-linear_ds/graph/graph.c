#include <stdio.h>
#include <stdlib.h>

struct Node{
    int vertex;
    int weight;
    struct node * next;
};

struct Graph{
    int vertices;
    struct node ** adjList;
};

struct Node * createNode(int v, int w){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode -> vertex = v;
    newNode -> weight = w;
    newNode -> next = NULL;

    return newNode;
}

struct Graph * createGraph(int vertices){
    struct Graph * graph = (struct Graph *)malloc(sizeof(struct Graph));

    graph -> vertices = vertices;
    graph -> adjList = (struct node **)malloc(vertices * sizeof(struct node *));

    for(int i = 0; i < vertices; i++){
        graph -> adjList[i] = NULL;
    }
    return graph;
}

void addEdge(struct Graph * graph, int dest, int weight, int src){
    struct node * newNode = createNode(dest, weight);
    newNode -> next = graph -> adjList[src];
    graph -> adjList[src] = newNode;
}

int main(){
    int vertices, edges;
    printf("Enter Number of Vertices : ");
    scanf("%d ", &vertices);

    struct Graph * graph = createGraph(vertices);

    printf("Enter Number of Edges : ");
    scanf("%d ", &edges);
}