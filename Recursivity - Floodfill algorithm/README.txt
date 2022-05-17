the program reads the name of a text file that contains a pre-estabilished "figure" and a coordinate below it. 
Then returns the same figure after floodfilling the part that contains the coordinate.

Examples:


Input:

XXXXXXXXXXXXXXXXXXXX
X       X          X
X       X          X
X       X          X
X       X          X
XXXXXXXXX          X
X                  X
X                  X
X                  X
X                  X
X                  X
XXXXXXXXXXXXXXXXXXXX
X       X          X
X       X          X
X       X          X
X       X          X
X       X          X
X       X          X
X       X          X
XXXXXXXXXXXXXXXXXXXX
2 2


Output:

XXXXXXXXXXXXXXXXXXXX
XXXXXXXXX          X
XXXXXXXXX          X
XXXXXXXXX          X
XXXXXXXXX          X
XXXXXXXXX          X
X                  X
X                  X
X                  X
X                  X
X                  X
XXXXXXXXXXXXXXXXXXXX
X       X          X
X       X          X
X       X          X
X       X          X
X       X          X
X       X          X
X       X          X
XXXXXXXXXXXXXXXXXXXX