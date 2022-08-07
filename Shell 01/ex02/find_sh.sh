#!/bin/bash

find . -name "*.sh" | sed 's/.*\///g' | cut -f 1 -d '.'
