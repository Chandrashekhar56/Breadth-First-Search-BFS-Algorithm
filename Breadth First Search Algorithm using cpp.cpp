#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int queue[100],c[100][100],current_visit_vertices[100],visited_vertices[100];
int total_number_of_edges,total_number_of_vertices,initial_vertex,item_front,item_rare,x,y,z;
int main()
{

    cout<<"Enter no total number of vertices are in graph :";
    cin >> total_number_of_vertices;
    cout <<"Enter no total number of edges are in graph:";
    cin >> total_number_of_edges;
    cout <<"\nEDGES Source to Destination: \n";
    for(z=1;z<=total_number_of_edges; z++)
    {
        cin>>x>>y;
        c[x][y]=1;
    }
    cout <<"Traverse start from initial vertex:";
    cin >>initial_vertex;
    cout <<"All Visitied vertices from queue like this : ";
    cout<<initial_vertex<<" ";
    visited_vertices[initial_vertex]=1;
    z=1;
    while(z<total_number_of_vertices)
    {
        for(y=1;y<=total_number_of_vertices;y++)
            if(c[initial_vertex][y]!=0 && visited_vertices[y]!=1 && current_visit_vertices[y]!=1)
            {
                current_visit_vertices[y]=1;
                queue[item_rare++]=y;
            }
        initial_vertex=queue[item_front++];
        cout<<initial_vertex <<" ";
        z++;
        current_visit_vertices[initial_vertex]=0;
        visited_vertices[initial_vertex]=1;
    }
    return 0;
}
