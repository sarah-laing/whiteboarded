void traverse( treeNode * by_level, int& node_count, treeNode * node )
{
    if( node )
    {
        ++node_count;
        
        if( by_level->left )
            by_level->left = new treeNode { node->value, by_level->left->left, by_level->left };
        else
            by_level->left = new treeNode { node->value, nullptr, nullptr };
            
        traverse( by_level->left, node_count, node->right );
        traverse( by_level->left, node_count, node->left );
    }
}

// Add any helper functions(if needed) above.
vector<int> level_order(treeNode* root)
{
    treeNode *by_level = nullptr;
    int node_count = 0;
    
    if( root )
    {
        ++node_count;
        by_level = new treeNode { root->value, nullptr, nullptr };
        traverse( by_level, node_count, root->right );
        traverse( by_level, node_count, root->left );
    }
    
    vector< int > outputs( node_count );
    
    int i = 0;
    for( treeNode *level = by_level; level; level = level->left )
        for( treeNode *node = level; node; node = node->right )
            outputs[ i++ ] = node->value;
            
    return outputs;
}