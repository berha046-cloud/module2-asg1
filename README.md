Base Converter Program
Problem Statement
Generalize the to_binary() function to to_base_n() that converts numbers to any base 2-16. Handle invalid bases with error messages. Add standard prefixes (0 for octal, 0x for hex).
Describe the Solution
Extended the recursive algorithm to work with any base:

Uses n % base for digit extraction
Maps 0-9 to '0'-'9', 10-15 to 'a'-'f'
Validates base range (2-16)
Adds prefixes automatically

Pros and Cons
Pros:

Maintains recursive elegance
Standard notation support
Robust error handling
Efficient O(log n) performance

Cons:

Limited to bases 2-16
Stack usage for large numbers
No reverse conversion
Fixed lowercase hex digits
