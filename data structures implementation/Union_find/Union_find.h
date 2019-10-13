#pragma once
#include <stdio.h>
#include <iostream>

class Edge {
public:
	int source, dest;
};

class Graph {
public:
	//number of vertices and number of edges
	int V, E;
	//graph is represented as an array of edges
	Edge* edge;

	Graph* createGraph(int V, int E) {
		Graph* graph = (Graph*)malloc(sizeof(Graph));
		graph->V = V;
		graph->E = E;
		graph->edge = (Edge*)malloc(sizeof(graph->E * sizeof(Edge)));
		return graph;
	}
};

class Union_find
{
public:
	
	int find(int parent[], int i) {
		if (parent[i] == -1) 
			return i;
		return find(parent, parent[i]);
		
	}
	
	void Union(int parent[], int x, int y) {
		int xset = find(parent, x);
		int yset = find(parent, y);
		if (xset != yset) {
			parent[xset] = yset;
		}
	}

	int isCycle(Graph* graph) {
		int *parent = (int*)malloc(graph->V * sizeof(int));
		memset(parent, -1, sizeof(int)*graph->V);

		for (int i = 0; i < graph->E; ++i) {
			int x = find(parent, graph->edge[i].source);
			int y = find(parent, graph->edge[i].dest);
			if (x == y) {
				return 1;
			}
			Union(parent, x, y);
		}
	}

	Union_find();
	~Union_find();
};

