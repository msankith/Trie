#pragma once

#include "Node.h"
class Trie {
public:
    Trie();
    ~Trie();
    void addWord(string s);
    bool searchWord(string s);
    void deleteWord(string s);
	bool autoComplete(string s,vector<string>&);
    void parseTree(Node *current,char * s,vector<string>&,bool &loop);
private:
    Node* root;
};
