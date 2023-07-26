#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_DIGIT 10
#define START_INDEX 0
#define MIN_SIZE 2


/**
 * struct listint_s - Doubly_linked list node
 *
 * @n: Integer stored
 * @prev: Pointer to previous element of  list
 * @next: Pointer to next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** printing functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/** Swap two element for sorting arrays*/
void swap(int *first_element, int *second_element);

/** Swap two element for sorting linked lists*/
void swap_nodes(listint_t **list, listint_t *curr_node, listint_t *prev_node);

/** Insertion Sort*/
void insertion_sort_list(listint_t **list);
bool is_small_list(listint_t **list);

/** Bubble Sort*/
void bubble_sort(int *array, size_t size);

/** Selection Sort */
void selection_sort(int *array, size_t size);
size_t find_minimum_index(const int *array, int start, size_t size);

/** Shell Sort */
void shell_sort(int *array, size_t size);
int less(int first, int second);
int compare_to(int first, int second);

/** Counting Sort */
void counting_sort(int *array, size_t size);
int *generate_count_array(int k, const int *array, size_t size);
int get_max(const int *array, size_t size);

/** Quick Sort (Lumoto) */
void quick_sort(int *array, size_t size);
void quick_sort_array(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);

/** Radix Sort */
void radix_sort(int *array, size_t size);
void generalized_count_sort(int *array, int exp, size_t size);

/** Cocktail Shaker Sort */
void cocktail_sort_list(listint_t **list);
listint_t *swap_forward(listint_t **list, listint_t *start, listint_t *end);
listint_t *swap_backward(listint_t **list, listint_t *start, listint_t *end);

/** Heap Sort */
void heap_sort(int *array, size_t size);
void build_heap(int *array, size_t end, size_t size);
void heapify(int *array, int parent_idx, size_t end, size_t size);

/** Merge Sort*/
void merge_sort(int *array, size_t size);
void top_down_split(int *array, int *buffer, int low, int high);
void merge_array(int *array, int *buffer, int low, int mid, int high);
void print_sub_array(int *array, int start, int end);

/** Bitonic Sort */
void bitonic_sort(int *array, size_t size);
void recursive_bitonic_sort
	(int *array, int low, size_t count, size_t size, bool ascending);
void bitonic_merge(int *array, int low, size_t count, bool ascending);

/** Quick Sort (Hoare)*/
void quick_sort_hoare(int *array, size_t size);
void quick_sort_hoare_array(int *array, int low, int high, size_t size);
int partition_hoare(int *array, int low, int high, size_t size);

#endif /* SORT_H */
/**
 * Adonijah kiplimo
 */
