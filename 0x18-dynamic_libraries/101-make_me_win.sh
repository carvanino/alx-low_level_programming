#!/bin/bash
wget -P /tmp https://github.com/carvanino/alx-low_level_programming/blob/fa0812669edb8c52188d6b5a0dcfa360f146087d/0x18-dynamic_libraries/winning_ticket.so
export LD_PRELOAD=/tmp/winning_ticket.so
