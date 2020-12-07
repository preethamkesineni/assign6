#include "gc.h"

#include <cassert>
#include <cstdio>

#include <iomanip>
#include <sstream>
#include <iostream>

using std::unordered_set;

GcSemiSpace::GcSemiSpace(intptr_t* frame_ptr, int heap_size_in_words) {
  // Initialize GC data structures and allocate space for the heap
  // here

	heap_ptr = (intptr_t*) malloc( 2 * heap_size_in_words); // init heap with this amount of words
	
	from_space_ptr = heap_ptr;

	

	heap_size = 2 * heap_size_in_words;

	semi_space_size = heap_size_in_words;
	
	
//	to_space_ptr = from_space_ptr + semi_space_size * 16;


	std::cout << heap_size << std::endl;


	
}

intptr_t* GcSemiSpace::Alloc(int32_t num_words, intptr_t * curr_frame_ptr) {
  // This is a dummy return value to make the compiler happy. Return
  // the allocated address in your implementation.
  	
			
	
	return heap_ptr;
}
