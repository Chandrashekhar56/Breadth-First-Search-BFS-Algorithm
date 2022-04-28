graph_for_BFS = {
  '6' : ['4','7'],
  '4' : ['3', '5'],
  '7' : ['9'],
  '3' : [],
  '5' : ['9'],
  '9' : []
}

visited_nodes = [] 
Qu= []    

def breadth_first_search_function(visited_nodes, graph_for_BFS, new_node):
  visited_nodes.append(new_node)
  Qu.append(new_node)

  while Qu:          
    k = Qu.pop(0) 
    print (k, end = " ") 

    for node_neighbour in graph_for_BFS[k]:
      if node_neighbour not in visited_nodes:
        visited_nodes.append(node_neighbour)
        Qu.append(node_neighbour)

print("Breadth First Search: ")
breadth_first_search_function(visited_nodes, graph_for_BFS, '6')  
