#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Vertex.h"
#include "Graph.h"
#include <iostream>
#include <limits>

using namespace std;

TEST_CASE("1. isRemoved") {
  CHECK(isRemoved('<'));
  CHECK(isRemoved('>'));
  CHECK(isRemoved('{'));
  CHECK(isRemoved('}'));
}

TEST_CASE("2. inputParser") {
  string input = "E {<2,6>,<2,8>,<2,5>,<6,5>,<5,8>,<6,10>,<10,8>}";
  vector<int> outputVector {2,6,2,8,2,5,6,5,5,8,6,10,10,8};
  CHECK(inputParser(input) == outputVector);
}

TEST_CASE("3. Vertex::Vertex")
{
  int id = 5;
  Vertex v = Vertex(id);
  CHECK(v.getId() == id);
  CHECK(v.getColor() == Vertex::white);
  CHECK(v.getDistance() == numeric_limits<int>::max());
  CHECK(v.getPredecessor() == nullptr);
}

TEST_CASE("4. Vertex::setColor")
{
  int id = 5;
  Vertex v = Vertex(id);
  v.setColor(Vertex::black);
  CHECK(v.getColor() == Vertex::black);
}

TEST_CASE("5. Vertex::setDistance")
{
  int id = 5;
  Vertex v = Vertex(id);
  v.setDistance(2);
  CHECK(v.getDistance() == 2);
}

TEST_CASE("6 Vertex::setPredecessor")
{
  int id = 5;
  Vertex v = Vertex(id);
  int id_ = 10;
  Vertex v_ = Vertex(id_);
  v.setPredecessor(&v_);
  CHECK(v.getPredecessor() == &v_);
}

TEST_CASE("7. ToString")
{
  int a = 1;
  CHECK(ToString<int>(a) == "1");
}

TEST_CASE("8. Graph::shortestPath")
{
  string configV = "V 11";
  Graph g = Graph(atoi((configV.substr(2)).c_str()));
  string configE = "E {<2,6>,<2,8>,<2,5>,<6,5>,<5,8>,<6,10>,<10,8>}";
  g.setM(inputParser(configE));
  g.configVertexVect();
  g.updateVertexVect(10);
  string output = g.shortestPath(2, 10);
  CHECK(output == "2-6-10");
}


