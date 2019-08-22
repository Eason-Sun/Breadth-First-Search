# Breadth-First-Search

## Problem Definition:
Construct a graph using give vertices and edges. Determine the shortest path using Breadth-First-Search

## Input:
(a) The specification of a set of vertices starts with 'V', followed by a space, followed by a positive integer, all in one single line. If the integer that follows the V is i, then we assume that the vertices are identified by 0, ... , i - 1.

e.g.  
V 15

(b) The specification for a set of edges starts with 'E'. It then has a space, followed by the set of edges in a single line delimited by '{' and '}'. The two vertices of an edge are delimited by '<' and '>' and separated by a comma. The edges in the set are also separated by a comma. There are no whitespace characters within the {}.

e.g.  
E {<2,6>,<2,8>,<2,5>,<6,5>,<5,8>,<6,10>,<10,8>}

(c) The input starts with an 's'. It asks for a shortest path from the first vertex to the second that is specified after the s. The s is followed by a space, a vertex ID, another space, and a second vertex ID.

e.g.  
s 2 10 # Find the shortest path between vertex 2 and vertex 10
2-8-10 # Path 2 -> 8 -> 10 is the shortest path

## Note:
The graph is specified by the specification of the set of vertices V followed by the set of edges E, in that order. V and E always occur together. There is no relationship between subsequent graph specifications; when a new V specification starts, all previous information will be forgotten. After the specification of the graph there can be zero or more shortest-path queries s. For each s query, only one shortest path is outputed; multiple shortest paths might exist and an arbitrary choice is made. Note that there is no self loop in the graph.
