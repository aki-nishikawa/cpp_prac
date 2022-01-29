#!/usr/bin/env bash

OUTPUT_FILE="data"
if [ -e ./$OUTPUT_FILE ]; then
    rm ./$OUTPUT_FILE
fi

LEN=1000
for i in `seq ${LEN}`
do
    echo $(($RANDOM % 1000)) >> $OUTPUT_FILE
done