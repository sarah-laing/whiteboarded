int h( treeNode* n )
{
    return n ? 1 + max( h( n->left ), h( n->right ) ) : 0;
}

int diameter(treeNode* n)
{
    if( !n )
        return 0;
    if( !n->right && !n->left )
        return 1;
        
    int rd = diameter( n->right );  int rh = h( n->right );
    int ld = diameter( n->left );   int lh = h( n->left ); 
    
    return ( rd && ld ) ? 1 + min( rd, rh ) + min( ld, lh ) : max( 2, rd + ld );
}