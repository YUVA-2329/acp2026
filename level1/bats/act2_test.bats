#!/usr/bin/env bats

@test "act2 program runs" {
  run ./act2.exe <<< "1"
  [ "$status" -eq 0 ]
}
