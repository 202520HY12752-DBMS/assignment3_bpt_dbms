#include "file_manager.h"
#include "dbbpt.h"

#include <stdbool.h>
#ifdef _WIN32
#define bool char
#define false 0
#define true 1
#endif
#include <stdio.h>
#include <stdlib.h>

// FUNCTION DEFINITIONS.
// Find API
/**
 * @brief Find a record with the given key.
 * @param fd[in] The file descriptor of the database file.
 * @param key[in] The key to find.
 * @param verbose[in] Whether to print verbose output.
 * @param leaf_out[out] The leaf page pointer where the key is found.
 * @return The record with the given key, or NULL if not found.
 */
record *db_find(int fd, int64_t key, bool verbose, page **leaf_out) {
	// TODO: Implement here
	return NULL;
}

// Helper functions for find API
// TODO: define helper functions if you need

// Insertion API
/**
 * @brief Insert a record with the given key and value.
 * @param fd[in] The file descriptor of the database file.
 * @param key[in] The key to insert.
 * @param value[in] The value to insert.
 */
void db_insert(int fd, int64_t key, char *value) {
	// TODO: Implement here
}

// Helper functions for insertion API
// TODO: define helper functions if you need

// Deletion API
/**
 * @brief Delete a record with the given key.
 * @param fd[in] The file descriptor of the database file.
 * @param key[in] The key to delete.
 */
void db_delete(int fd, int64_t key) {
	// TODO: Implement here
}

// Helper functions for delete API
// TODO: define helper functions if you need

// Destroy API
/**
 * @brief Destroy the database file.
 * @param fd[in] The file descriptor of the database file.
 */
void db_destroy(int fd) {
	// TODO: Implement here
}

// Helper functions for destroy API
// TODO: define helper functions if you need

// Utility helper functions
// TODO: define helper functions if you need
