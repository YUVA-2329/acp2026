#!/usr/bin/env bats

@test "act7 program runs" {
  run ./act7.exe <<< "1"
  [ "$status" -eq 0 ]
}
