#include "file_manager.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * @brief Open a database file or create a new one if it doesn't exist.
 * @param file_path[in] The path to the database file.
 * @param leaf_order[in] The leaf order of the B+ tree.
 * @param internal_order[in] The internal order of the B+ tree.
 * @return The file descriptor of the database file. Return -1 if failed.
 *
 * Set the header page and free pages pool during tree creation. Plus, use -1
 * to represent a NULL page number for fields such as the initial root page number
 * in header page or next page number of the last free page.
 */
int open_or_create_tree(const char *file_path, int leaf_order, int internal_order) {
	// TODO: Implement here
	return -1;
}

/**
 * @brief Load the header page from the database file.
 * @param fd[in] The file descriptor of the database file.
 * @param dest[out] The destination to store the header page.
 */
void load_header_page(int fd, header_page* dest) {
	off_t cur_offset = 0;
	if (pread(fd, &(dest->free_pgn), 8, cur_offset) == -1) exit_with_err_msg("Error on loading free page number at header page.");
	cur_offset += 8;

	if (pread(fd, &(dest->root_pgn), 8, cur_offset) == -1) exit_with_err_msg("Error on loading root page number at header page.");
	cur_offset += 8;

	if (pread(fd, &(dest->num_pages), 8, cur_offset) == -1) exit_with_err_msg("Error on loading number of pages at header page.");
	cur_offset += 8;

	if (pread(fd, &(dest->leaf_order), 4, cur_offset) == -1) exit_with_err_msg("Error on loading leaf order at header page.");
	cur_offset += 4;

	if (pread(fd, &(dest->internal_order), 4, cur_offset) == -1) exit_with_err_msg("Error on loading internal order at header page.");
	cur_offset += 4;
}

/**
 * @brief Write the header page to the database file.
 * @param fd[in] The file descriptor of the database file.
 * @param src[in] The header page to write.
 */
void write_header_page(int fd, const header_page* src) {
	off_t cur_offset = 0;
	if (pwrite(fd, &(src->free_pgn), 8, cur_offset) < 8) exit_with_err_msg("Error on writing free page number at header page.");
	cur_offset += 8;

	if (pwrite(fd, &(src->root_pgn), 8, cur_offset) < 8) exit_with_err_msg("Error on writing root page number at header page.");
	cur_offset += 8;

	if (pwrite(fd, &(src->num_pages), 8, cur_offset) < 8) exit_with_err_msg("Error on writing number of pages at header page.");
	cur_offset += 8;

	if (pwrite(fd, &(src->leaf_order), 4, cur_offset) < 4) exit_with_err_msg("Error on writing leaf order at header page.");
	cur_offset += 4;

	if (pwrite(fd, &(src->internal_order), 4, cur_offset) < 4) exit_with_err_msg("Error on writing internal order at header page.");
	cur_offset += 4;
}

/**
 * @brief Load a page from the database file.
 * @param fd[in] The file descriptor of the database file.
 * @param pgn[in] The page number of the page to load.
 * @param dest[out] The destination to store the page.
 */
void load_page(int fd, int64_t pgn, page* dest) {
	// TODO: Implement here
}

/**
 * @brief Write a page to the database file.
 * @param fd[in] The file descriptor of the database file.
 * @param src[in] The page to write. Return NULL if failed.
 */
void write_page(int fd, const page* src) {
	// TODO: Implement here
}

/**
 * @brief Allocate a new page.
 * @param fd[in] The file descriptor of the database file.
 * @return The new page.
 *
 * If no free pages are left, this function doubles the free pages pool, and then allocates one.
 * If memory allocation fails, then kill the process using the `exit_with_err_msg()` function.
 */
page *alloc_page(int fd) {
	header_page header;
	load_header_page(fd, &header);

	return alloc_page1(fd, &header);
}

/**
 * @brief Allocate a new page. This function uses the passed header_page pointer instead of calling load_header_page.
 * @param fd[in] The file descriptor of the database file.
 * @param header_page[in] The header page.
 * @return The new page.
 *
 * If no free pages are left, this function doubles the free pages pool, and then allocates one.
 * If memory allocation fails, then kill the process using the `exit_with_err_msg()` function.
 */
page *alloc_page1(int fd, header_page *header_page) {
	// TODO: Implement here
	return NULL;
}

/**
 * @brief Free a page.
 * @param fd[in] The file descriptor of the database file.
 * @param pgn[in] The page number of the page to free.
 */
void free_page(int fd, int64_t pgn) {
	// TODO: Implement here
}

/**
 * @brief Print an error message and exit the program.
 * @param err_msg[in] The error message to print.
 */
void exit_with_err_msg(const char* err_msg) {
	perror(err_msg);
	exit(EXIT_FAILURE);
}
