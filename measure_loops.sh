#!/bin/bash

NUM_RUNS=1000


time (
    for i in $(seq 1 $NUM_RUNS); 
        do ./for_loop
        done
    )

time (
    for i in $(seq 1 $NUM_RUNS);
        do ./while_loop
        done
    )
