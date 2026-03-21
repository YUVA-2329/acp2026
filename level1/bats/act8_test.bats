#!/usr/bin/env bats

@test "act8 program runs" {
  run ./act8.exe <<< "1"
  [ "$status" -eq 0 ]
}
