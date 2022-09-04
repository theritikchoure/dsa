#include<iostream>
#include<vector>
#include<list>
#include<iterator>

using namespace std;

class Edge {
    public: 
        int destinationVertexIndex;
        int weight;

        Edge() {

        }

        Edge(int vertexIndex, int w) {
            destinationVertexIndex = vertexIndex;
            weight = w;
        }

        void setEdgeValues(int vertexIndex, int w) {
            destinationVertexIndex = vertexIndex;
            weight = w;
        }

        void setWeight(int w) {
            weight = w;
        }

        int getDestinationVertexIndex() {
            return destinationVertexIndex;
        }

        int getWeight() {
            return weight;
        }
};


class Vertex {
    public:
        int stateId;
        string stateName;   

        list<Edge> edgeList;

        Vertex() {
            stateId = 0;
            stateName = "";
        }

        Vertex(int id, string name) {
            stateId = id;
            stateName = name; 
        }

        int getStateId() {
            return stateId;
        }

        string getStateName() {
            return stateName;
        }

        void setStateId(int id) {
            stateId = id;
        }

        void setStateName(string name) {
            stateName = name;
        }

        list<Edge> getEdgeList() {
            return edgeList;
        }
};

class Graph {
    public:
        vector<Vertex> vertices;

        bool checkIfVertexExistsById(int vid) {
            bool flag = false;
            for (int i = 0; i < vertices.size(); i++) {
                if(vertices.at(i).getStateId() == vid) return true;
            }

            return flag;
        }

        Vertex getVertexById(int vertex) {
            return;
        }

        bool checkIfEdgeExistsById(int fromVertex, int toVertex) {
            Vertex v = getVertexById(fromVertex);
            list<Edge> e;

            e = v.getEdgeList();

            for(auto it = e.begin(); it != e.end(); it++) {
                if(it->getDestinationVertexIndex() == toVertex) {
                    return true;
                    break;
                }
            }

            return false;
        }
        void addVertex(Vertex newVertex) {
            bool check = checkIfVertexExistsById(newVertex.getStateId());

            if(check == true) {
                cout << "Vertex already exists" << endl;
                return;
            } else {
                vertices.push_back(newVertex);
                cout << "Vertex added" << endl;
                return;
            }
        }

        void addEdgeById(int fromVertex, int toVertex, int weight) {
            bool check1 = checkIfVertexExistsById(fromVertex);
            bool check2 = checkIfVertexExistsById(toVertex);

            if(check1 == true && check2 == true) {
                bool check3 = checkIfEdgeExistsById(fromVertex, toVertex);


            }
        }

        void printGraph() {
            for (int i = 0; i < vertices.size(); i++) {
                Vertex temp;
                temp = vertices.at(i);
                cout << temp.getStateId() << " " << temp.getStateName() << endl;
            }
        }
};


int main() {

    int option, sid;
    string sname;
    Graph graph;
    Vertex newVertex;
    // Menu Driven Program
    do {
        cout << "What operation do you want to perform?" << endl;
        cout << "Select option number or enter 0 to exit." << endl;
        cout << endl;
        cout << "1. Add Vertex" << endl;
        cout << "2. Update Vertex" << endl;
        cout << "3. Delete Vertex" << endl;
        cout << "4. Add Edge" << endl;
        cout << "5. Update Edge" << endl;
        cout << "6. Delete Edge" << endl;
        cout << "7. Check if two vertices are neighbors" << endl;
        cout << "8. Print all the neighbors of a vertex" << endl;
        cout << "9. Print graph" << endl;
        cout << "10. Clear Screen" << endl;
        cout << "0. Exit" << endl;

        cin >> option;

        switch (option)
        {
            case 0:
                break;

            case 1:
                cout << "Enter State Id" << endl;
                cin>>sid;
                cout << "Enter State Name" << endl;
                cin>>sname;
                newVertex.setStateId(sid);
                newVertex.setStateName(sname);
                graph.addVertex(newVertex);
                break;

            case 2:
                cout << "Enter value to search in heap" << endl;
                cout<< endl;
                break;

            case 3:
                cout << "Enter value to delete in heap" << endl;
                cout<< endl;
                break;
            
            case 4:
                // cout << "Min Value" << obj.getMinValue() << endl;
                break;

            case 5:
                cout << "Max Value" << endl;
                break;

            case 6:
                cout << "Heap tree height" << endl;
                break;

            case 7:
                cout << "Heap tree Values - " << endl;
                cout << endl;
                break;

            case 9:
                graph.printGraph();
                break;

            case 8:
                system("cls");
                break;

            default:
                cout << "Invalid Options" << endl;
        }
    } while(option != 0);

    return 0;
}