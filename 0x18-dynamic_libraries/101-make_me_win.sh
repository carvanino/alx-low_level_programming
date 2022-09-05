#!/bin/bash
wget -P /tmp https://github.com/carvanino/alx-low_level_programming/raw/main/0x18-dynamic_libraries/winning_ticket.so
export LD_PRELOAD=/tmp/winning_ticket.so
