#include <stdio.h>
#include <stdlib.h>

int main(){
    int vertex, edges;
    scanf("%d %d", &vertex, &edges);

    int **adjMat = (int **)malloc(vertex * sizeof(int *));
    for(int i = 0; i < vertex; i++){
        adjMat[i] = (int *)calloc(vertex, sizeof(int));
    }
    
    // FOR A WEIGHTED GRAPH MAKE INT w, TAKE A INPUT
    int u, v, w;
    for(int i = 0; i < edges; i++){
        scanf("%d %d %d", &u, &v, &w);

        if(u >= 0 && u < vertex && v >= 0 && v < vertex){
            
            // WRITE w IF IS A WEIGHTED GRAPH
            // FOR UNDIRECTED GRAPH
            // adjMat[u][v] = w;
            // adjMat[v][u] = w;

            // FOR DIRECTED GRAPH
            adjMat[u][v] = w;
        }
        else{
            printf("Invalid Input");
        }
    }


    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            printf("%d ", adjMat[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < vertex; i++){
        free(adjMat[i]);
    }
    free(adjMat);

    return 0;
}