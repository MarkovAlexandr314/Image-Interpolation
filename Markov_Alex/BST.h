/**
 * @file BST.h
 * @author Markov Alexandr (you@domain.com)
 * @brief
 * This file contains a description of the binary search tree class\n
 * and the auxiliary node structure
 * @version 0.1
 * @date 2025-02-19
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef BST_H
#define BST_H

#include <iostream>

/**
 * @brief Node struct is auxiliaryn to our BST
 * 
 */
struct Node
{
    int key{0};     ///< The value stored in the node
    ///@brief The height of the node in the tree
    int height{1};  
    Node *parent; ///< Pointer to the parent node
    Node *left;   ///< Pointer to the left node
    Node *right;  ///< Pointer to the right node
    /**
     * @brief Construct a new Node object
     * 
     * @param[in] key the value to store in the node
     * Pointers to the parent, right and left child is \b nullptr
     */
    Node(int key)
    {
        this->key = key;
        this->left = this->right = this->parent = nullptr;
    }
};

/**
 * @brief 
 * Binary search tree class\n 
 * @warning It is used for educational purposes
 */
class BST
{
    /**
     * @brief Pointer to the root of the tree
     * By default, this is @b nullptr
     */
    Node *root = nullptr;

    /**
     * @brief 
     * A method that determines whether a tree with root @b n \n
     * contains a node with a given key
     * @param[in] n pointer to the root
     * @param[in] key the desired value
     * @return true 
     * @return false 
     */
    bool contains(Node *n, int key);

    /**
     * @brief 
     * This method inserts a node into the tree.@n
     * Attention duplicates are not inserted
     * @param[in] n the node we want to add the key to
     * @param[in] key value that we want to add to the tree
     * @param[in] parent the parent node
     */
    void insert(Node *&n, int key, Node *parent);

    /**
     * @brief 
     * We free up the memory and put nullptr in the old pointers.
     * @param[in] n pointer to the root
     */
    void destroy(Node *n);

    /**
     * @brief 
     * We go through the tree and output the values of its keys to the console
     * @param[in] n pointer to the root
     */
    void iter(Node *n);

    /**
     * @brief 
     * We output to the console the value of the leftmost, i.e. the smallest element in the tree
     * @param[in] n pointer to the root
     */
    void subtree_first(Node *n);

    /**
     * @brief 
     * We output to the console the value of the rightmost, i.e. the largest element in the tree
     * @param[in] n pointer to the root
     */
    void subtree_last(Node *n);

    /**
     * @brief 
     * Get a pointer to a subtree with a key value equal to key
     * @param[in] n pointer to the root
     * @param[in] key The value of the key you are looking for
     * @return Node* 
     */
    Node *subtree(Node *n, int key);

    /**
     * @brief 
     * We get the maximum distance from the leaf to the root
     * @param[in] n pointer to the root
     * @return int 
     */
    int height(Node *n);

    /**
     * @brief 
     * Turn left
     * @param[in] n 
     * @return Node* 
     */
    Node *rotateLeft(Node *n);

    /**
     * @brief Balancing the node
     * 
     * @param[in] n 
     * @return Node* 
     */
    Node *balance(Node *n);

    /**
     * @brief 
     * Right turn
     * @param[in] n 
     * @return Node* 
     */
    Node *rotateRight(Node *n);

    /**
     * @brief 
     * Delete a node
     * @param[in] n pointer to the root
     * @param[in] key the value that we are deleting
     * @return Node* 
     */
    Node* removeNode(Node*& n, int key);

    /**
     * @brief 
     * Find the minimum value
     * @param[in] n pointer to the root
     * @return Node* 
     */
    Node* findMin(Node* n);
public:
    /// Wrappers for private methods

    /**
     * @brief 
     * Get the height of the tree
     * @return int 
     */
    int height();

    /**
     * @brief 
     * Delete a node by key
     * @param[in] key value to delete
     */
    void removeNode(int key);

    /**
     * @brief 
     * The distance from the node to the root of the tree
     * @param[in] n the node to which we are looking for the distance
     * @return int distance
     */
    int depth(Node *n);

    /**
     * @brief 
     * Get a pointer to a node with a specific key
     * @param[in] key the key you are looking for
     * @return Node* pointer to a node
     */
    Node *subtree(int key);

    /**
     * @brief 
     * A method that checks if there is a key in the tree
     * @param[in] key the key you are looking for
     * @return true 
     * @return false 
     */
    bool contains(int key);

    /**
     * @brief 
     * Insert the key into the tree
     * @param[in] key the key that we insert
     */
    void insert(int key);

    /**
     * @brief 
     * Output all values from the tree to the console
     */
    void iter();

    /**
     * @brief 
     * Get the leftmost element
     */
    void subtree_first();

    /**
     * @brief 
     * Get the rightmost element
     */
    void subtree_last();

    /**
     * @brief Get the Root object
     * Get a pointer to the root of the tree
     * @return Node* root
     */
    Node *GetRoot();

    /**
     * @brief Destroy the BST object
     * 
     */
    ~BST();
};

#endif
