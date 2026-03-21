#!/usr/bin/env bats

@test "act9 program runs" {
  run ./act9.exe <<< "1"
  [ "$status" -eq 0 ]
}
