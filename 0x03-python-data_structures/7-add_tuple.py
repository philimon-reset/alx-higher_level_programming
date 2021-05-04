#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
        
        if len(tuple_a) < 2:
                if len(tuple_a) == 0:
                        new_tuple = tuple_b[0], tuple_b[1]
                        return (new_tuple)
                new_tuple = tuple_a[0] + tuple_b[0], tuple_b[1]
                return (new_tuple)
        elif len(tuple_b) < 2:
                if len(tuple_b) == 0:
                        new_tuple = tuple_a[0], tuple_a[1]
                        return (new_tuple)
                new_tuple = tuple_a[0] + tuple_b[0], tuple_a[1]
                return (new_tuple)
        new_tuple = tuple_a[a] + tuple_b[a], tuple_a[a + 1] + tuple_b[a + 1]
        return (new_tuple)
