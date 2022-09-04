### Graph Data structure

#### Add Vertex Operation

function addVertex(newVertex) {
    1. check = checkIfVertexExistsById(vid);
    2. if check == true
        2.1 then-> print("Vertex already exists")
    3. else
        3.1 vertices.push_back(newVertex);
        3.2 print("Vertex added");
}

function checkIfVertexExistsById(vid) {
    1. loop:(int i=0 to vertices.size)
        1.1 if(vertices[i] == vid) 
            1.1.1 return true
    end loop
    2. return false
}

#### Add Edge Operation

function addEdgeById(sourceId, destinationId, weight) {
    check1 = checkIfVertexExistsById(sourceId)
    check2 = checkIfVertexExistsById(destinationId)

    if(check1 && check2) {
        check3 = checkIfEdgeExistsById(sourceId, destinationId)

        if(check3) {
            print ("edge exist");
        } else {
            loop: (int i = 0 to vertices.size())
            if(vertices.at(i).getStateId() == fromVertex) {
                Edge e(toVertex, w);
                vertices.at(i).edgList.push_back(e);
            } else if(vertices.at(i).getStateId() == toVertex) {
                Edge e(fromVertex, w);
                vertices.at(i).edgList.push_back(e);
            }
            end loop
            print("Edge Added Successfully")
        }
    }
}