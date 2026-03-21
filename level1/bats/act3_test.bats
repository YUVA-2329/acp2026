#!/usr/bin/env bats

@test "act3 program runs" {
  run ./act3.exe <<< "1"
  [ "$status" -eq 0 ]
}
