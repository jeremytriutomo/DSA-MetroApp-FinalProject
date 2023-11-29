#include <iostream>
#include <iomanip> // For setw
#include <string>
#include "metroClass.h"
using namespace std;

int main()
{
    // Initialize an empty linked list of events
    Event *schedule = nullptr;

    // Add events to the schedule (customize as needed)
    // Loop 1
    addEvent(schedule, "Khaenri'ah", "Liyue", 8, "10:40:00 AM", "10:45:00 AM", "Blue Line");
    addEvent(schedule, "Liyue", "Snezhnaya", 9, "11:30:00 AM", "11:35:00 AM", "Blue Line\n");

    addEvent(schedule, "Snezhnaya", "Liyue", 9, "10:45:00 AM", "10:50:00 AM", "Blue Line");
    addEvent(schedule, "Liyue", "Khaenri'ah", 8, "11:30:00 AM", "11:35:00 AM", "Blue Line\n");

    addEvent(schedule, "Inazuma", "Liyue", 9, "10:45:00 AM", "10:50:00 AM", "Green Line");
    addEvent(schedule, "Liyue", "Celestia", 9, "11:35:00 AM", "11:40:00 AM", "Green Line");
    addEvent(schedule, "Celestia", "Fontaine", 9, "12:25:00 PM", "12:30:00 PM", "Green Line\n");

    addEvent(schedule, "Fontaine", "Celestia", 9, "10:45:00 AM", "10:50:00 AM", "Green Line");
    addEvent(schedule, "Celestia", "Liyue", 9, "11:35:00 AM", "11:40:00 AM", "Green Line");
    addEvent(schedule, "Liyue", "Inazuma", 9, "12:25:00 PM", "12:30:00 PM", "Green Line\n");

    addEvent(schedule, "Sumeru", "Celestia", 12, "11:00:00 AM", "11:05:00 AM", "Purple Line");
    addEvent(schedule, "Celestia", "Mondstadt", 5, "11:30:00 AM", "11:35:00 AM", "Purple Line");
    addEvent(schedule, "Mondstadt", "Khaenri'ah", 10, "12:25:00 PM", "12:30:00 PM", "Purple Line\n");

    addEvent(schedule, "Khaenri'ah", "Mondstadt", 10, "10:50:00 AM", "10:55:00 AM", "Purple Line");
    addEvent(schedule, "Mondstadt", "Celestia", 5, "11:20:00 AM", "11:25:00 AM", "Purple Line");
    addEvent(schedule, "Celestia", "Sumeru", 12, "12:25:00 PM", "12:30:00 PM", "Purple Line\n");

    addEvent(schedule, "Natlan", "Mondstadt", 10, "10:50:00 AM", "10:55:00 AM", "Red Line");
    addEvent(schedule, "Mondstadt", "Liyue", 9, "11:40:00 AM", "11:45:00 AM", "Red Line");
    addEvent(schedule, "Liyue", "Sumeru", 9, "12:30:00 PM", "12:35:00 PM", "Red Line\n");

    addEvent(schedule, "Sumeru", "Liyue", 9, "10:45:00 AM", "10:50:00 AM", "Red Line");
    addEvent(schedule, "Liyue", "Mondstadt", 9, "11:35:00 AM", "11:40:00 AM", "Red Line");
    addEvent(schedule, "Mondstadt", "Natlan", 10, "12:30:00 PM", "12:35:00 PM", "Red Line\n");

    addEvent(schedule, "Fontaine", "Natlan", 14, "11:10:00 AM", "11:15:00 AM", "Orange Line");
    addEvent(schedule, "Natlan", "Khaenri'ah", 18, "12:45:00 PM", "12:50:00 PM", "Orange Line");
    addEvent(schedule, "Khaenri'ah", "Inazuma", 12, "13:50:00 PM", "13:55:00 PM", "Orange Line");
    addEvent(schedule, "Inazuma", "Snezhnaya", 6, "14:25:00 PM", "14:30:00 PM", "Orange Line");
    addEvent(schedule, "Snezhnaya", "Sumeru", 8, "15:10:00 PM", "15:15:00 PM", "Orange Line\n");

    addEvent(schedule, "Sumeru", "Snezhnaya", 8, "10:40:00 AM", "10:45:00 AM", "Orange Line");
    addEvent(schedule, "Snezhnaya", "Inazuma", 6, "11:15:00 AM", "11:20:00 AM", "Orange Line");
    addEvent(schedule, "Inazuma", "Khaenri'ah", 12, "12:20:00 PM", "12:25:00 PM", "Orange Line");
    addEvent(schedule, "Khaenri'ah", "Natlan", 18, "13:55:00 PM", "14:00:00 PM", "Orange Line");
    addEvent(schedule, "Natlan", "Fontaine", 14, "15:10:00 PM", "15:15:00 PM", "Orange Line\n");

    // Loop 2
    addEvent(schedule, "Khaenri'ah", "Liyue", 8, "12:15:00 PM", "12:20:00 PM", "Blue Line");
    addEvent(schedule, "Liyue", "Snezhnaya", 9, "13:05:00 PM", "13:10:00 PM", "Blue Line\n");

    addEvent(schedule, "Snezhnaya", "Liyue", 9, "12:20:00 PM", "12:25:00 PM", "Blue Line");
    addEvent(schedule, "Liyue", "Khaenri'ah", 8, "13:05:00 AM", "13:10:00 AM", "Blue Line\n");

    addEvent(schedule, "Inazuma", "Liyue", 9, "13:15:00 PM", "13:20:00 PM", "Green Line");
    addEvent(schedule, "Liyue", "Celestia", 9, "14:05:00 PM", "14:10:00 PM", "Green Line");
    addEvent(schedule, "Celestia", "Fontaine", 9, "14:55:00 PM", "15:00:00 PM", "Green Line\n");

    addEvent(schedule, "Fontaine", "Celestia", 9, "13:15:00 PM", "13:20:00 PM", "Green Line");
    addEvent(schedule, "Celestia", "Liyue", 9, "14:05:00 PM", "14:10:00 PM", "Green Line");
    addEvent(schedule, "Liyue", "Inazuma", 9, "14:55:00 PM", "15:00:00 PM", "Green Line\n");

    addEvent(schedule, "Sumeru", "Celestia", 12, "13:30:00 PM", "13:35:00 PM", "Purple Line");
    addEvent(schedule, "Celestia", "Mondstadt", 5, "14:00:00 AM", "14:05:00 AM", "Purple Line");
    addEvent(schedule, "Mondstadt", "Khaenri'ah", 10, "14:55:00 PM", "15:00:00 PM", "Purple Line\n");

    addEvent(schedule, "Khaenri'ah", "Mondstadt", 10, "13:20:00 PM", "13:25:00 PM", "Purple Line");
    addEvent(schedule, "Mondstadt", "Celestia", 5, "13:50:00 PM", "13:55:00 PM", "Purple Line");
    addEvent(schedule, "Celestia", "Sumeru", 12, "14:55:00 PM", "15:00:00 PM", "Purple Line\n");

    addEvent(schedule, "Natlan", "Mondstadt", 10, "13:25:00 PM", "13:30:00 PM", "Red Line");
    addEvent(schedule, "Mondstadt", "Liyue", 9, "14:15:00 PM", "14:20:00 PM", "Red Line");
    addEvent(schedule, "Liyue", "Sumeru", 9, "15:05:00 PM", "15:10:00 PM", "Red Line\n");

    addEvent(schedule, "Sumeru", "Liyue", 9, "13:20:00 PM", "13:25:00 PM", "Red Line");
    addEvent(schedule, "Liyue", "Mondstadt", 9, "14:10:00 AM", "14:15:00 AM", "Red Line");
    addEvent(schedule, "Mondstadt", "Natlan", 10, "15:05:00 PM", "15:10:00 PM", "Red Line\n");

    addEvent(schedule, "Fontaine", "Natlan", 14, "16:25:00 PM", "16:30:00 PM", "Orange Line");
    addEvent(schedule, "Natlan", "Khaenri'ah", 18, "18:00:00 PM", "18:05:00 PM", "Orange Line");
    addEvent(schedule, "Khaenri'ah", "Inazuma", 12, "19:05:00 PM", "19:10:00 PM", "Orange Line");
    addEvent(schedule, "Inazuma", "Snezhnaya", 6, "19:40:00 PM", "19:45:00 PM", "Orange Line");
    addEvent(schedule, "Snezhnaya", "Sumeru", 8, "20:25:00 PM", "20:30:00 PM", "Orange Line\n");

    addEvent(schedule, "Sumeru", "Snezhnaya", 8, "15:55:00 PM", "16:00:00 PM", "Orange Line");
    addEvent(schedule, "Snezhnaya", "Inazuma", 6, "16:30:00 PM", "16:35:00 PM", "Orange Line");
    addEvent(schedule, "Inazuma", "Khaenri'ah", 12, "17:35:00 PM", "17:40:00 PM", "Orange Line");
    addEvent(schedule, "Khaenri'ah", "Natlan", 18, "19:10:00 PM", "19:15:00 PM", "Orange Line");
    addEvent(schedule, "Natlan", "Fontaine", 14, "20:25:00 PM", "20:30:00 PM", "Orange Line\n");

    cout << " =====================================================================================";
    cout << "\n || * *   * *   ******   *******   *****    *******         *       *****    *****  ||";
    cout << "\n || *  * *  *   *           *      *    *   *     *        * *      *    *   *    * ||";
    cout << "\n || *   *   *   ******      *      *****    *     *       *****     *****    *****  ||";
    cout << "\n || *       *   *           *      *  *     *     *      *     *    *        *      ||";
    cout << "\n || *       *   ******      *      *   *    *******     *       *   *        *      ||";
    cout << "\n =====================================================================================";
    cout << "\n\n";

    cout << "Welcome to our Metro app!";

    while (1)
    {
        int action;

        cout << "\n[1] View Train Schedule \n[2] Find Fastest Route\n\nInsert number for action: ";
        cin >> action;

        if (action == 1)
        {
            // Display the schedule
            cout << "Schedule:" << endl;
            sortScheduleByDepartureTime(schedule);
            displaySchedule(schedule);

            // Delete the schedule and free memory
            deleteSchedule(schedule);
        }
        else if (action == 2)
        {
            //...
        }
        else
        {
            cout << "\nInput unrecognized";
            continue;
        }
    }

    return 0;

    // Example usage
    vector<Vertex> myGraph;

    // Add central station
    addVertex(myGraph, "Khaerin'ah");

    // Add other stations
    addVertex(myGraph, "Liyue");
    addVertex(myGraph, "Snezhnaya");
    addVertex(myGraph, "Inazuma");
    addVertex(myGraph, "Celestia");
    addVertex(myGraph, "Fontaine");
    addVertex(myGraph, "Sumeru");
    addVertex(myGraph, "Mondstadt");
    addVertex(myGraph, "Natlan");

    // Add edges with distances
    addEdge(myGraph, 0, 1, 8);  // Khaerin'ah to Liyue, distance: 8
    addEdge(myGraph, 0, 2, 17); // Khaerin'ah to Snezhnaya, distance: 17

    addEdge(myGraph, 3, 1, 9);  // Inazuma to Liyue, distance: 9
    addEdge(myGraph, 3, 4, 18); // Inazuma to Celestia, distance: 18
    addEdge(myGraph, 3, 5, 27); // Inazuma to Fontaine, distance: 27

    addEdge(myGraph, 6, 4, 12); // Sumeru to Celestia, distance: 12
    addEdge(myGraph, 6, 7, 17); // Sumeru to Mondstadt, distance: 17
    addEdge(myGraph, 6, 0, 27); // Sumeru to Khaerin'ah, distance: 27

    addEdge(myGraph, 8, 7, 10); // Natlan to Mondstadt, distance: 10
    addEdge(myGraph, 8, 1, 19); // Natlan to Liyue, distance: 19
    addEdge(myGraph, 8, 6, 28); // Natlan to Sumeru, distance: 28

    addEdge(myGraph, 5, 8, 14); // Fontaine to Natlan, distance: 14
    addEdge(myGraph, 5, 0, 32); // Fontaine to Khaerin'ah, distance: 32
    addEdge(myGraph, 5, 3, 44); // Fontaine to Inazuma, distance: 44
    addEdge(myGraph, 5, 2, 50); // Fontaine to Snezhnaya, distance: 50
    addEdge(myGraph, 5, 6, 50); // Fontaine to Sumeru, distance: 50

    // Display the graph
    cout << "Graph after adding routes:\n";
    // Loop through each vertex in the graph.
    for (const auto &vertex : myGraph)
    {
        cout << "Station: " << vertex.station << ", Neighbors: ";
        // Loop through each neighbor of the current station.
        for (const auto &neighbor : vertex.neighbors)
        {
            cout << neighbor.first->station << "(" << neighbor.second << ") ";
        }
        cout << endl;
    }

    // Remove a station (optional)
    removeVertex(myGraph, 1);

    // Display the graph after removal (optional)
    cout << "\nGraph after removal:\n";
    // Loop through each vertex in the graph.
    for (const auto &vertex : myGraph)
    {
        cout << "Station: " << vertex.station << ", Neighbors: ";
        // Loop through each neighbor of the current station.
        for (const auto &neighbor : vertex.neighbors)
        {
            // Print the name of the neighbor station and the distance (edge length) to it.
            cout << neighbor.first->station << "(" << neighbor.second << ") ";
        }
        cout << endl;
    }

    // Find the shortest path from Khaerin'ah to Celestia
    unordered_map<string, int> distances = dijkstra(myGraph, 0);

    cout << "\nShortest distances from Khaerin'ah:\n";
    for (const auto &pair : distances)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
