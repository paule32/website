#include <iostream>
#include <vector>
using namespace std;

// Wir nehmen an, dass E eine nullbasierte Adjazenzliste darstellt.
vector<vector<int>> E;
vector<int> visited;

void dfs(int v) {
    // Wir sind in Knoten v und erkunden die Nachbarschaft.
    for(int e = 0; e < E[v].size(); e++) {
        int w = E[v][e];
        // Nun prüfen wir ob der Nachbar w noch unbesucht ist.
        if(!visited[w]) {
            visited[w] = true;
            dfs(w);
        }
    }
}

int main() {
    // Wir beginnen damit E einzulesen, z.B. so:
    int n, m;
    cin >> n >> m;
    E = vector<vector<int>>(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        E[a].push_back(b);
        E[b].push_back(a);
    }
    // Nun können wir unsere Tiefensuche starten
    int start = 0;
    visited = vector<int>(n, false); // Zu Beginn haben wir noch nichts besucht.
    visited[start] = true;
    dfs(start);
    // Ob der Ausgang erreicht werden kann, können wir nun ganz leicht ablesen.
    cout << "Kann der Ausgang erreicht werden?\n";
    if(visited[n-1]) {
        cout << "Ja!\n";
    } else {
        cout << "Nein!\n";
    }
}
