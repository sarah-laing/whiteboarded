#include <limits>

bool check_node( treeNode *node, int min_value, int max_value )
{
    if( node )
    {
        if( node->value < min_value || node->value > max_value )
            return false;
            
        return  check_node( node->left, min_value, node->value ) &&
                check_node( node->right, node->value, max_value );
    }
    return true;
}

bool validate_bst(treeNode* root)
{
    if( root )
    {
        return  check_node( root->left, numeric_limits<int>::min(), root->value ) &&
                check_node( root->right, root->value, numeric_limits<int>::max() );
    }
    return true;
} 