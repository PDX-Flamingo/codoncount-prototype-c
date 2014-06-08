#!/bin/sh

export LD_LIBRARY_PATH=$HOME/lib:$LD_LIBRARY_PATH
exec ./main $*
