#!/usr/bin/env bats

@test "act10 program runs" {
  run ./act10.exe <<< "1"
  [ "$status" -eq 0 ]
}
