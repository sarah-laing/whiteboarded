// BST_find_kth_smallest_node.cpp 
//Write a function to find and return the kth smallest node in a binary search tree
//If the node is not found, return NULL.

#include <iostream>
#include <vector>

struct treeNode
{
  int value;
  treeNode *left;
  treeNode *right;
};

treeNode* kth_smallest(treeNode* n, int &k)
{
  if (k && n)
  {
    if (n->left)
      if (treeNode* kth = kth_smallest(n->left, k))
        return kth;
    if (--k == 0)
      return n;
    return kth_smallest(n->right, k);
  }
  return nullptr;
}

// Add any helper functions(if needed) above.
treeNode* find_kth_smallest(treeNode* root, int k)
{
  return kth_smallest(root, k);
}

treeNode tree1[] =  { { 4, &tree1[1], &tree1[2] }
                    , { 2, nullptr, nullptr }
                    , { 8, &tree1[3], &tree1[4] }
                    , { 5, nullptr, nullptr }
                    , { 10, nullptr, nullptr }
                    };

struct test
{
  treeNode *tree;
  int k;
  treeNode *expected;
};

std::vector<test> tests { { &tree1[0], 2, &tree1[0] } };

int main()
{
  for( auto t : tests )
  {
    auto result = kth_smallest( t.tree, t.k );
    std::cout << ( result == t.expected ? "Pass: " : "Fail: " ) 
              << "kth_smallest( " << t.k << " ) => " << ( result ? result->value : 0 )   
              << ". Expected: " << ( t.expected ? t.expected->value : 0 ) 
              << std::endl;
  }

  return 0;
}