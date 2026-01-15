- [Basics reference tutorial](https://www.youtube.com/watch?v=87SH2Cn0s9A)
- C memory management course from [boot.dev](https://www.boot.dev), video guide [link](https://www.youtube.com/watch?v=rJrd2QMVbGM).
- 

### Notes
- Use `switch-case` statement instead of many `if-else` statements.
- Never return the address of a local (stack) variable. E.g. 
```python
coord_t* bad_coord(int x, int y) {
    coord_t c;
    c.x = x;
    c.y = y;
    return &c;   // ❌ returning address of stack variable
}
```
- Evey function is assigned a `stack frame`, `stack pointer` and `return address`. When a function ends executing, the stack pointer returns to the return address freeing memory. The return address is at the beginning of the stack frame.
- Use stack memory if we know how much memory is needed or size is within one function. E.g. int age = 22; 
- Use heap if required memory is not known ahead of time or return value isn't limited to one function. To pass data from one function to another, we use the heap. E.g. char *full_greeting = malloc(size * sizeof(char));


### Important Terms
- Bit-wise operators
- enum
- struct
- typedef
- memory = array of bytes in RAM
- memory block = a single unit (byte) within memory
- memory address = address of where a memory block is located. E.g. `&age`, where `age` is some variable. Memory addresses are in Hex.
- Pointer = var like reference that holds memory address to another var, useful in data-structures (linked-lists, stacks, queues ...etc.)
- `*` = indirection operator
