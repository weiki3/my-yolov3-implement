/*
图类，通过临界矩阵来表示图结构
*/

#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <string>
#include <iostream>
#include <sstream>

enum Direction
{
    Directed,
    Undirected
};
enum Format
{
    Empty,
    Edges,
    AdjacencyList
};

class Graph
{
public:
    // Graph(Format format = Empty, Direction direction = Directed);
    // Graph(int numVertices, std::vector<std::pair<int, int>> edges); // creates a graph from given edges
    Graph();
    std::vector<int> adjacencyList; // neighbours of consecutive vertexes
    std::vector<int> edgesOffset;   // offset to adjacencyList for every vertex
    std::vector<int> edgesSize;     // number of edges for every vertex
    int numVertices;
    int numEdges;

    void print();

private:
    Graph(std::vector<std::vector<int>> adjacencyList);
    void init(std::vector<std::vector<int>> adjacencyList, int numEdges);
};

#endif // GRAPH_H
