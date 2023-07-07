from cffi import FFI

# Define the C code to be compiled
ffi = FFI()
ffi.set_source("_operations", """
    #include "100-operations.c"
""")

# Specify the function signatures
ffi.cdef("""
    int add(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
    int div(int a, int b);
    int mod(int a, int b);
""")

if __name__ == '__main__':
    ffi.compile()
