#!/bin/sh

export LD_LIBRARY_PATH=$HOME/lib:$LD_LIBRARY_PATH
exec gzip -cd complete.1.genomic.gbff.gz | ./main -gb $*
