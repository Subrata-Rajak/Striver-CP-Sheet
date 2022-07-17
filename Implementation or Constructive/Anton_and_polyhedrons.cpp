#include <iostream>
#include <string>
using namespace std;

class solution
{
public:
    long long calculate_faces(string polyhedron, long long faces)
    {
        if (polyhedron == "Icosahedron")
            faces += 20;
        else if (polyhedron == "Tetrahedron")
            faces += 4;
        else if (polyhedron == "Cube")
            faces += 6;
        else if (polyhedron == "Octahedron")
            faces += 8;
        else if (polyhedron == "Dodecahedron")
            faces += 12;

        return faces;
    }
};

int main()
{
    int testcases;
    cin >> testcases;

    long long faces = 0;
    while (testcases--)
    {
        string polyhedron;
        cin >> polyhedron;

        solution obSol;

        faces = obSol.calculate_faces(polyhedron, faces);
    }

    cout << faces << endl;
    return 0;
}