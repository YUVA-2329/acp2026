#!/usr/bin/env bats

@test "Electricity bill program runs with input" {
  run ./act1.exe <<EOF
3
101
10
102
20
103
15
EOF

  [ "$status" -eq 0 ]
}