#include "file_manager.h"

#include <stdio.h>
#include <stdlib.h>


int open_or_create_tree(const char *file_path, int leaf_order, int internal_order) {
	// TODO: Implement here
	return -1;
}

void load_header_page(int fd, header_page* dest) {
	// TODO: Implement here
}

void write_header_page(int fd, const header_page* src) {
	// TODO: Implement here
}

void load_page(int fd, int64_t pgn, page* dest) {
	// TODO: Implement here
}

void write_page(int fd, const page* src) {
	// TODO: Implement here
}

page *alloc_page(int fd) {
	header_page header;
	load_header_page(fd, &header);

	return alloc_page1(fd, &header);
}

page *alloc_page1(int fd, header_page *header_page) {
	// TODO: Implement here
	return NULL;
}

int free_page(int fd, int64_t pgn) {
	// TODO: Implement here
	return 0;
}

void exit_with_err_msg(const char* err_msg) {
	perror(err_msg);
	exit(EXIT_FAILURE);
}
