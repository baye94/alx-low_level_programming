#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: size of the hash table
 * Return: pointer on hash_table_t element
 */
 
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *ht;
        unsigned long int i;

        if (size < 1)
                return (NULL);

        ht = malloc(sizeof(hash_table_t));

        if (ht == NULL)
                return (NULL);

        ht->array = malloc(sizeof(hash_node_t *) * size);

        if (ht->array == NULL)
                return (NULL);

        for (i = 0; i < size; i++)
                ht->array[i] = NULL;

        ht->size = size;

        return (ht);
}
