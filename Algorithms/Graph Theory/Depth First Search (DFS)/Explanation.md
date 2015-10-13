#Depth First Search (DFS)

##Introduction

Depth-first search (DFS) is an algorithm for traversing or searching tree or graph data structures.
One starts at the root (selecting some arbitrary node as the root in the case of a graph) and explores as far as possible 
along each branch before backtracking.

##Properties

The time and space analysis of DFS differs according to its application area.
In theoretical computer science, DFS is typically used to traverse an entire graph, and takes time Θ(|V| + |E|), linear in the 
size of the graph.
In these applications it also uses space O(|V|) in the worst case to store the stack of vertices on the current search path as 
well as the set of already-visited vertices.
Thus, in this setting, the time and space bounds are the same as for breadth-first search and the choice of which of these two 
algorithms to use depends less on their complexity and more on the different properties of the vertex orderings the two 
algorithms produce.

##Example

For the following graph:

![alt text](https://en.wikipedia.org/wiki/Depth-first_search#/media/File:Graph.traversal.example.svg "DFS")

A depth-first search starting at A, assuming that the left edges in the shown graph are chosen before right edges, and 
assuming the search remembers previously visited nodes and will not repeat them (since this is a small graph), will visit the 
nodes in the following order: A, B, D, F, E, C, G.

##Pseudocode

**Input:** A graph G and a vertex v of G

**Output:** All vertices reachable from v labeled as discovered

A recursive implementation of DFS:

```1  procedure DFS(G,v):
2      label v as discovered
3      for all edges w in G.adjacentEdges(v) do
4          if vertex w is not labeled as discovered then
5              recursively call DFS(G,w)```

A non-recursive implementation of DFS:

```1  procedure DFS-iterative(G,v):
2      let S be a stack
3      S.push(v)
4      while S is not empty
5            v = S.pop()
6            if v is not labeled as discovered:
7                label v as discovered
8                for all edges from v to w in G.adjacentEdges(v) do
9                    S.push(w)```

These two variations of DFS visit the neighbors of each vertex in the opposite order from each other: the first neighbor of v 
visited by the recursive variation is the first one in the list of adjacent edges, while in the iterative variation the first 
visited neighbor is the last one in the list of adjacent edges.
The non-recursive implementation is similar to breadth-first search but differs from it in two ways: it uses a stack instead 
of a queue, and it delays checking whether a vertex has been discovered until the vertex is popped from the stack rather than 
making this check before pushing the vertex.
Note that this non-recursive implementation of DFS may use O(|E|) space in the worst case, for example on a complete graph.

##Reference

[Wikipedia](https://en.wikipedia.org/wiki/Depth-first_search)
