#include <list>

using path = list< treeNode * >;

bool path_to_node( path & p, treeNode * n, int k )
{
    if( n )
    {
        if(     n->value == k 
            ||  path_to_node( p, n->left,  k )
            ||  path_to_node( p, n->right, k )
          )
        {
            p.push_front( n );
            return true;
        }
    }
    return false;
}

// Add any helper functions(if needed) above.
treeNode* find_lca(treeNode* root, int a, int b)
{
    path pa, pb;
    
    path_to_node( pa, root, a );
    path_to_node( pb, root, b );
    
    treeNode * common = root;
    
    auto pai = pa.cbegin();
    auto pbi = pb.cbegin();
    while( pai != pa.end() && pbi != pb.end() && *pai == *pbi )
    {
        common = *pai;
        ++pai; 
        ++pbi;
    }
    
    return common;
}