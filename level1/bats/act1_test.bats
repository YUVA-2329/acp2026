#!/usr/bin/env bats

@test "act1 program runs" {
  run ./act1.exe <<< "1"
  [ "$status" -eq 0 ]
}
