#include <stdlib.h>
#include "hash_table.h" // Assuming hash_table.h contains the structure definitions and function prototypes related to hash table

void hash_table_delete(hash_table_t *ht) {
    if (ht == NULL) {
        return; // If the hash table is already NULL, no need to delete
    }

    // Free each node in the hash table
    for (unsigned long int i = 0; i < ht->size; i++) {
        hash_node_t *node = ht->array[i];
        while (node != NULL) {
            hash_node_t *temp = node;
            node = node->next;
            free(temp->key); // Free the key
            free(temp->value); // Free the value
            free(temp); // Free the node
        }
    }

    // Free the array of pointers
    free(ht->array);

    // Free the hash table structure itself
    free(ht);
}
