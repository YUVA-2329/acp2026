#!/usr/bin/env bats

@test "Temperature program runs with valid input" {
  run ./act1.exe <<EOF
25.5
30.2
28.0
31.5
29.0
27.8
26.4
EOF

  [ "$status" -eq 0 ]
}