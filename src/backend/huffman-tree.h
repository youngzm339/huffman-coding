//
// Created by YoungZM on 2023/12/13.
//

#ifndef BACKEND_HUFFMAN_TREE_H
#define BACKEND_HUFFMAN_TREE_H

#include <string>
#include <unordered_map>

struct HuffmanNode {
    char data;
    int frequency;
    HuffmanNode *left;
    HuffmanNode *right;

    HuffmanNode(char d, int freq) : data(d), frequency(freq), left(nullptr), right(nullptr) {}
};

HuffmanNode *buildHuffmanTree(const std::unordered_map<char, int> &frequency_map);

void generatingEncodingTable(HuffmanNode *root, const std::string &code,
                             std::unordered_map<char, std::string> &encoding_table);


#endif //BACKEND_HUFFMAN_TREE_H
