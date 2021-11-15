
#include <bits/stdc++.h>
using namespace std;

const int alpha_size=26;


struct trie_node
{
	struct trie_node *child[alpha_size];
	bool is_next;
};

struct trie_node *get_node()
{
	struct trie_node *p_node=new trie_node;
    p_node->is_next=false;
    for(int i=0;i<alpha_size;i++)
	p_node->child[i]=NULL;
    return p_node;
}

void insert(struct trie_node *root, string key)
{
	struct trie_node *p_crawl=root;
    for(int i=0;i<key.length();i++)
	{
		int pos=key[i]-'a';
		if(!p_crawl->child[pos])
		p_crawl->child[pos]=get_node();
        p_crawl=p_crawl->child[pos];
	}
	p_crawl->is_next=true;
}

bool search(struct trie_node *root, string key)
{
	struct trie_node *p_crawl=root;

	for (int i=0;i<key.length();i++)
	{
		int pos=key[i]-'a';
		if (!p_crawl->child[pos])
		return false;
        p_crawl=p_crawl->child[pos];
	}
    return (p_crawl->is_next);
}

int main()
{
	
	string keys[] = {"the", "a", "there",
					"answer", "any", "by",
					"bye", "their" };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct trie_node *root=get_node();
	for(int i=0;i<n;i++)
    insert(root, keys[i]);

	search(root,"the")?cout<<"Yes\n":cout<<"No\n";
	search(root,"these")?cout<<"Yes\n":cout<<"No\n";
    search(root,"their")?cout<<"Yes\n":cout<<"No\n";
    search(root,"a")?cout<<"Yes\n":cout<<"No\n";
	return 0;
}
