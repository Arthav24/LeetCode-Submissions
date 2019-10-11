#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

struct TrieNode
{
    struct TrieNode *cnode[26];
    bool isEnd;
};

struct TrieNode *getNode(void)
{
    struct TrieNode *p = new TrieNode;
    if (p)
    {
        int i;
        p->isEnd = false;
        for (i = 0; i < 26; i++)
        {
            p->cnode[i] = NULL;
        }
    }
    return p;
}
void insert(struct TrieNode *root, string key)
{
    int length = key.length();
    int index;
    struct TrieNode *pCrawl = root;
    for (int level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->cnode[index])
            pCrawl->cnode[index] = getNode();

        pCrawl = pCrawl->cnode[index];
    }
    pCrawl->isEnd = true;
}
int countChildren(struct TrieNode *node, int *index)
{
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (node->cnode[i] != NULL)
        {
            count++;
            *index = i;
        }
    }
    return (count);
}
string walkTrie(struct TrieNode *root)
{
    struct TrieNode *pCrawl = root;
    int index;
    string prefix;

    while (countChildren(pCrawl, &index) == 1 &&
           pCrawl->isEnd == false)
    {
        pCrawl = pCrawl->cnode[index];
        prefix.push_back('a' + index);
    }
    return (prefix);
}
void constructTrie(vector<string> arr, int n, struct TrieNode *root)
{
    for (int i = 0; i < n; i++)
        insert(root, arr[i]);
    return;
}
string commonPrefix(vector<string> arr, int n)
{
    struct TrieNode *root = getNode();
    constructTrie(arr, n, root);
    return walkTrie(root);
}
string longestCommonPrefix(vector<string> &strs)
{
    return commonPrefix(strs, strs.size());
}
int main()
{
    vector<string> strs = {"geeksforgeeks", "geeks", "geek", "geezer"};
    cout << longestCommonPrefix(strs);
    return 0;
}