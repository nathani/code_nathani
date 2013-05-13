#ifdef _LIST_H
struct Node;
/*typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
*/
List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P,List L);
template < class T>
Position Find(T x,List L);
template < class T>
void Delete(T x,List L);
template < class T>
Position FindPrevious(T x,List L);
template < class T>
void Insert(T x,List L,Position P);
void DeleteList(List L);
Position Header(List L); 
Position First(List L);
Position Advance(Position P);
template <class T>
T Retrieve(Position P);
#endif
