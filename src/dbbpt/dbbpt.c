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
record *db_find(int fd, int64_t key, bool verbose, page **leaf_out) {
	// TODO: Implement here
	return NULL;
}

// Helper functions for find API
// TODO: define helper functions if you need

// Insertion API
void db_insert(int fd, int64_t key, char *value) {
	// TODO: Implement here
}

// Helper functions for insertion API
// TODO: define helper functions if you need

// Deletion API
void db_delete(int fd, int64_t key) {
	// TODO: Implement here
}

// Helper functions for delete API
// TODO: define helper functions if you need

// Destroy API
void db_destroy(int fd) {
	// TODO: Implement here
}

// Helper functions for destroy API
// TODO: define helper functions if you need

// Utility helper functions
// TODO: define helper functions if you need
