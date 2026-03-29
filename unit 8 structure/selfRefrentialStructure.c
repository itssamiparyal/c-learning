// A structure that contains the pointer variable of its own type 
// syntax: 
// struct structure_name{
//     struct structure_name *link;
// }
// eg:

// struct node{
//     int data;
//     struct Node *next;
// };
// struct Node n1,n2; // memory allocation
// n1.next = &n2;

// struct Tree{
//     int data;
//     struct Tree *left;
//     struct Tree *right;
// };
// sturct Tree n1,n2,n3;
// n1.data = 'A';
// n1.left